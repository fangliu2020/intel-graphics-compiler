/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/
//
/// GenXLiveRanges
/// --------------
///
/// GenXLiveRanges calculates the actual live range information (the segments)
/// on the LiveRange object for each value. See the comment at the top of
/// GenXLiveness.h for details of how the live range information works. This
/// pass calls GenXLiveness::buildLiveRange to do the work for each value.
///
/// The LiveRange object for each value already existed before this pass, as it
/// was created by GenXCategory. In the case of a value that we can now see does
/// not want a LiveRange, because it is an Instruction baled in to something,
/// we erase the LiveRange here.
///
//===----------------------------------------------------------------------===//
#define DEBUG_TYPE "GENX_LIVERANGES"

#include "FunctionGroup.h"
#include "GenX.h"
#include "GenXBaling.h"
#include "GenXIntrinsics.h"
#include "GenXLiveness.h"
#include "GenXNumbering.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/IR/Type.h"
#include "llvm/Support/Debug.h"
#include "Probe/Assertion.h"

using namespace llvm;
using namespace genx;

namespace {

class GenXLiveRanges : public FunctionGroupPass {
  FunctionGroup *FG;
  GenXBaling *Baling;
  GenXLiveness *Liveness;
public:
  static char ID;
  explicit GenXLiveRanges() : FunctionGroupPass(ID) { }
  virtual StringRef getPassName() const { return "GenX live ranges analysis"; }
  void getAnalysisUsage(AnalysisUsage &AU) const;
  bool runOnFunctionGroup(FunctionGroup &FG);
  // createPrinterPass : get a pass to print the IR, together with the GenX
  // specific analyses
  virtual Pass *createPrinterPass(raw_ostream &O, const std::string &Banner) const
  { return createGenXGroupPrinterPass(O, Banner); }

private:
  void buildLiveRanges();

  bool isPredefinedVariable(Value *) const;
};

/***********************************************************************
 * Local function for testing one assertion statement.
 * Check we don't have any leftover empty live ranges. If we do, it means
 * that a pass between GenXCategory and here has erased a value and failed
 * to erase its LiveRange, or alternatively this pass has failed to erase
 * the LiveRange for a value that does not need it because it is a baled
 * in instruction.
 */
bool testDuplicates(const llvm::GenXLiveness& Liveness) {

  auto testRange = [](const std::pair<llvm::genx::SimpleValue, llvm::genx::LiveRange *>& X) {
    const llvm::genx::LiveRange *const LR = X.second;
    IGC_ASSERT(nullptr != LR);
    const bool HasSegment = (0 < LR->size());
    IGC_ASSERT(HasSegment);
    return HasSegment;
  };

  const bool Result = std::all_of(Liveness.begin(), Liveness.end(), testRange);
  IGC_ASSERT(Result);
  return Result;
}

} // end anonymous namespace

namespace llvm { void initializeGenXLiveRangesPass(PassRegistry &); }
char GenXLiveRanges::ID = 0;
INITIALIZE_PASS_BEGIN(GenXLiveRanges, "GenXLiveRanges", "GenXLiveRanges", false, false)
INITIALIZE_PASS_DEPENDENCY(GenXGroupBaling)
INITIALIZE_PASS_DEPENDENCY(GenXLiveness)
INITIALIZE_PASS_DEPENDENCY(GenXNumbering)
INITIALIZE_PASS_DEPENDENCY(FunctionGroupAnalysis)
INITIALIZE_PASS_END(GenXLiveRanges, "GenXLiveRanges", "GenXLiveRanges", false, false)

FunctionGroupPass *llvm::createGenXLiveRangesPass()
{
  initializeGenXLiveRangesPass(*PassRegistry::getPassRegistry());
  return new GenXLiveRanges();
}

void GenXLiveRanges::getAnalysisUsage(AnalysisUsage &AU) const
{
  FunctionGroupPass::getAnalysisUsage(AU);
  AU.addRequired<GenXGroupBaling>();
  AU.addRequired<GenXLiveness>();
  AU.addRequired<GenXNumbering>();
  AU.addRequired<FunctionGroupAnalysis>();
  AU.setPreservesAll();
}

/***********************************************************************
 * runOnFunctionGroup : run the liveness analysis for this FunctionGroup
 */
bool GenXLiveRanges::runOnFunctionGroup(FunctionGroup &ArgFG)
{
  FG = &ArgFG;
  Baling = &getAnalysis<GenXGroupBaling>();
  Liveness = &getAnalysis<GenXLiveness>();
  Liveness->setBaling(Baling);
  Liveness->setNumbering(&getAnalysis<GenXNumbering>());
  // Build the live ranges.
  Liveness->buildSubroutineLRs();
  buildLiveRanges();
  IGC_ASSERT(testDuplicates(*Liveness));
  return false;
}

/***********************************************************************
 * isPredefinedVariable : check if it's tranlated into predefined
 * variables in vISA.
 */
bool GenXLiveRanges::isPredefinedVariable(Value *V) const {
  switch (GenXIntrinsic::getGenXIntrinsicID(V)) {
  case GenXIntrinsic::genx_predefined_surface:
    return true;
  default:
    break;
  }
  return false;
}

/***********************************************************************
 * buildLiveRanges : build live ranges for all args and instructions
 */
void GenXLiveRanges::buildLiveRanges()
{
  // Build live ranges for global variables;
  for (auto &G : FG->getModule()->globals())
    Liveness->buildLiveRange(&G);
  for (auto i = FG->begin(), e = FG->end(); i != e; ++i) {
    Function *Func = *i;
    // Build live ranges for args.
    for (auto fi = Func->arg_begin(), fe = Func->arg_end(); fi != fe; ++fi)
      Liveness->buildLiveRange(&*fi);
    if (i != FG->begin() && !Func->getReturnType()->isVoidTy()) {
      // Build live range(s) for unified return value.
      Liveness->buildLiveRange(Liveness->getUnifiedRet(Func));
    }
    // Build live ranges for code.
    for (Function::iterator fi = Func->begin(), fe = Func->end(); fi != fe; ++fi) {
      BasicBlock *BB = &*fi;
      for (BasicBlock::iterator bi = BB->begin(), be = BB->end(); bi != be; ++bi) {
        Instruction *Inst = &*bi;
        // Skip building live range for instructions
        // - has no destination
        // - is already baled, or
        // - is predefined variable in vISA.
        if (!Inst->getType()->isVoidTy() && !Baling->isBaled(Inst) &&
            !isPredefinedVariable(Inst)) {
          // Instruction is not baled in to anything.
          // First check if the result is unused and it is an intrinsic whose
          // result is marked RAW_NULLALLOWED. If so, don't create a live range,
          // so no register gets allocated.
          if (Inst->use_empty()) {
            unsigned IID = GenXIntrinsic::getAnyIntrinsicID(Inst);
            switch (IID) {
              case GenXIntrinsic::not_any_intrinsic:
              case GenXIntrinsic::genx_rdregioni:
              case GenXIntrinsic::genx_rdregionf:
              case GenXIntrinsic::genx_wrregioni:
              case GenXIntrinsic::genx_wrregionf:
              case GenXIntrinsic::genx_wrconstregion:
                break;
              default: {
                  GenXIntrinsicInfo::ArgInfo AI
                      = GenXIntrinsicInfo(IID).getRetInfo();
                  if (AI.isRaw() && AI.rawNullAllowed()) {
                    // Unused RAW_NULLALLOWED result.
                    Liveness->eraseLiveRange(Inst);
                    continue;
                  }
                  break;
                }
            }
          }
          // Build its live range.
          Liveness->buildLiveRange(Inst);
        } else {
          // Instruction is baled in to something. Erase its live range so the
          // register allocator does not try and allocate it something.
          Liveness->eraseLiveRange(Inst);
        }
      }
    }
  }
}


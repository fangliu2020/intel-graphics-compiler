/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2022 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/
#ifndef IGA_MODELS_XE_HPC_HPP
#define IGA_MODELS_XE_HPC_HPP

// ******************** DO NOT MODIFY DIRECTLY ********************
// Auto-generated by IGA project tools

#include "../Models.hpp"

namespace iga {
    static const iga::OpSpec MODEL_XE_HPC_OPSPECS[unsigned(Op::TOTAL_OPS) + 1] {
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::ADD /* Op::1 */, Platform::XE_HPC, 0x40,
            "add",
            "Addition",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF,F <- BF,F
                {TYPE(Type::BF)|TYPE(Type::F),TYPE(Type::BF)|TYPE(Type::F)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::ADD3 /* Op::2 */, Platform::XE_HPC, 0x52,
            "add3",
            "Addition Ternary",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UW,W,UD,D <- UW,W,UD,D
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::ADDC /* Op::3 */, Platform::XE_HPC, 0x4E,
            "addc",
            "Addition with Carry",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::AND /* Op::4 */, Platform::XE_HPC, 0x65,
            "and",
            "Logic And",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::ASR /* Op::5 */, Platform::XE_HPC, 0x6C,
            "asr",
            "Arithmetic Shift Right",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::AVG /* Op::6 */, Platform::XE_HPC, 0x42,
            "avg",
            "Average",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::BFE /* Op::7 */, Platform::XE_HPC, 0x78,
            "bfe",
            "Bit Field Extract",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BFI1 /* Op::8 */, Platform::XE_HPC, 0x79,
            "bfi1",
            "Bit Field Insert 1",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BFI2 /* Op::9 */, Platform::XE_HPC, 0x7A,
            "bfi2",
            "Bit Field Insert 2",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BFN /* Op::10 */, Platform::XE_HPC, 0x6B,
            "bfn",
            "Boolean Function",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD,UW <- UD,UW
                {TYPE(Type::UD)|TYPE(Type::UW),TYPE(Type::UD)|TYPE(Type::UW)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::BFREV /* Op::11 */, Platform::XE_HPC, 0x77,
            "bfrev",
            "Bit Field Reverse",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BRC /* Op::12 */, Platform::XE_HPC, 0x23,
            "brc",
            "Branch Converging",
            OpSpec::Format::JUMP_BINARY_BRC,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BRD /* Op::13 */, Platform::XE_HPC, 0x21,
            "brd",
            "Branch Diverging",
            OpSpec::Format::JUMP_UNARY_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BREAK /* Op::14 */, Platform::XE_HPC, 0x28,
            "break",
            "Break",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CALL /* Op::15 */, Platform::XE_HPC, 0x2C,
            "call",
            "Call",
            OpSpec::Format::JUMP_UNARY_CALL_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CALLA /* Op::16 */, Platform::XE_HPC, 0x2B,
            "calla",
            "Call Absolute",
            OpSpec::Format::JUMP_UNARY_CALL_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CBIT /* Op::17 */, Platform::XE_HPC, 0x4D,
            "cbit",
            "Count Bits Set",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UB,UW,UD
                {TYPE(Type::UD),TYPE(Type::UB)|TYPE(Type::UW)|TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CMP /* Op::18 */, Platform::XE_HPC, 0x70,
            "cmp",
            "Compare",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF,F <- BF,F
                {TYPE(Type::BF)|TYPE(Type::F),TYPE(Type::BF)|TYPE(Type::F)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::CMPN /* Op::19 */, Platform::XE_HPC, 0x71,
            "cmpn",
            "Compare NaN",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::CONT /* Op::20 */, Platform::XE_HPC, 0x29,
            "cont",
            "Continue",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CSEL /* Op::21 */, Platform::XE_HPC, 0x72,
            "csel",
            "Conditional Select",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // UD,D <- UD,D
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UD)|TYPE(Type::D)},
                // UW,W <- UW,W
                {TYPE(Type::UW)|TYPE(Type::W),TYPE(Type::UW)|TYPE(Type::W)}
            },
            OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::DP4A /* Op::26 */, Platform::XE_HPC, 0x58,
            "dp4a",
            "Dot Product 4 Accumulate",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD,D <- UD,D
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION
        },
        {Op::DPAS /* Op::27 */, Platform::XE_HPC, 0x59,
            "dpas",
            "Dot Product Accumulate Systolic",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD,D <- UD,D,UB,B,U4,S4,U2,S2
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::U4)|TYPE(Type::S4)|TYPE(Type::U2)|TYPE(Type::S2)},
                // F <- F,BF8,HF8
                {TYPE(Type::F),TYPE(Type::F)|TYPE(Type::BF8)|TYPE(Type::HF8)},
                // F <- F,BF
                {TYPE(Type::F),TYPE(Type::F)|TYPE(Type::BF)},
                // BF <- F,BF
                {TYPE(Type::BF),TYPE(Type::F)|TYPE(Type::BF)},
                // F <- F,HF
                {TYPE(Type::F),TYPE(Type::F)|TYPE(Type::HF)},
                // HF <- F,HF
                {TYPE(Type::HF),TYPE(Type::F)|TYPE(Type::HF)},
                // F <- F,TF32
                {TYPE(Type::F),TYPE(Type::F)|TYPE(Type::TF32)}
            },
            OpSpec::Attr::NONE
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::ELSE /* Op::30 */, Platform::XE_HPC, 0x24,
            "else",
            "Else",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_BRCTL
        },
        {Op::ENDIF /* Op::31 */, Platform::XE_HPC, 0x25,
            "endif",
            "End If",
            OpSpec::Format::JUMP_UNARY_IMM,
            { }, // no type mappings
            OpSpec::Attr::NONE
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::FBH /* Op::34 */, Platform::XE_HPC, 0x4B,
            "fbh",
            "Find First Bit from MSB Side",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UD,D
                {TYPE(Type::UD),TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::FBL /* Op::35 */, Platform::XE_HPC, 0x4C,
            "fbl",
            "Find First Bit from LSB Side",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::FRC /* Op::36 */, Platform::XE_HPC, 0x43,
            "frc",
            "Fraction",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::GOTO /* Op::39 */, Platform::XE_HPC, 0x2E,
            "goto",
            "Goto",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_BRCTL|OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::HALT /* Op::40 */, Platform::XE_HPC, 0x2A,
            "halt",
            "Halt",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::IF /* Op::41 */, Platform::XE_HPC, 0x22,
            "if",
            "If",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_BRCTL|OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::ILLEGAL /* Op::42 */, Platform::XE_HPC, 0x00,
            "illegal",
            "Illegal",
            OpSpec::Format::NULLARY,
            { }, // no type mappings
            OpSpec::Attr::NONE
        },
        {Op::JMPI /* Op::43 */, Platform::XE_HPC, 0x20,
            "jmpi",
            "Jump Indexed",
            OpSpec::Format::JUMP_UNARY_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::JOIN /* Op::44 */, Platform::XE_HPC, 0x2F,
            "join",
            "Join",
            OpSpec::Format::JUMP_UNARY_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::LZD /* Op::47 */, Platform::XE_HPC, 0x4A,
            "lzd",
            "Leading Zero Detection",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UB,B,UW,W,UD,D
                {TYPE(Type::UD),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MAC /* Op::48 */, Platform::XE_HPC, 0x48,
            "mac",
            "Multiply Accumulate",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UW,W,UD,D <- UB,B,UW,W
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF,F <- BF,F
                {TYPE(Type::BF)|TYPE(Type::F),TYPE(Type::BF)|TYPE(Type::F)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MACH /* Op::49 */, Platform::XE_HPC, 0x49,
            "mach",
            "Multiply Accumulate High",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MACL /* Op::50 */, Platform::XE_HPC, 0x53,
            "macl",
            "Multiply Accumulate Low",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MAD /* Op::51 */, Platform::XE_HPC, 0x5B,
            "mad",
            "Multiply Add",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF,F <- BF,F
                {TYPE(Type::BF)|TYPE(Type::F),TYPE(Type::BF)|TYPE(Type::F)},
                // UW,W <- UB,B
                {TYPE(Type::UW)|TYPE(Type::W),TYPE(Type::UB)|TYPE(Type::B)},
                // UW,W,UD,D <- UW,W,UD,D
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MADM /* Op::52 */, Platform::XE_HPC, 0x5D,
            "madm",
            "Multiply Add for Macro",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::MATH /* Op::55 */, Platform::XE_HPC, 0x38,
            "math",
            "Extended Math Function",
            OpSpec::Format::MATH_BINARY_REG_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MOV /* Op::56 */, Platform::XE_HPC, 0x61,
            "mov",
            "Move",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- UB,B,UW,W,UD,D
                {TYPE(Type::F),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UB,B,UW,W,UD,D <- F
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::F)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- UB,B,UW,W,UD,D
                {TYPE(Type::HF),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // HF <- F
                {TYPE(Type::HF),TYPE(Type::F)},
                // UB,B,UW,W,UD,D <- HF
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::HF)},
                // F <- HF
                {TYPE(Type::F),TYPE(Type::HF)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF <- F
                {TYPE(Type::BF),TYPE(Type::F)},
                // BF8 <- HF
                {TYPE(Type::BF8),TYPE(Type::HF)},
                // HF8 <- HF
                {TYPE(Type::HF8),TYPE(Type::HF)},
                // HF <- BF8
                {TYPE(Type::HF),TYPE(Type::BF8)},
                // HF <- HF8
                {TYPE(Type::HF),TYPE(Type::HF8)},
                // TF32 <- F
                {TYPE(Type::TF32),TYPE(Type::F)},
                // DF,F,UQ,Q,UW,W,UD,D <- DF
                {TYPE(Type::DF)|TYPE(Type::F)|TYPE(Type::UQ)|TYPE(Type::Q)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::DF)},
                // DF <- F,UQ,Q,UW,W,UD,D
                {TYPE(Type::DF),TYPE(Type::F)|TYPE(Type::UQ)|TYPE(Type::Q)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q,F,UW,W,UD,D <- UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q)|TYPE(Type::F)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)},
                // UQ,Q <- F,UW,W,UD,D
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::F)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // DF,F,UW,W,UD,D <- DF
                {TYPE(Type::DF)|TYPE(Type::F)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::DF)},
                // DF <- F,UW,W,UD,D
                {TYPE(Type::DF),TYPE(Type::F)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MOVI /* Op::57 */, Platform::XE_HPC, 0x63,
            "movi",
            "Move Indexed",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MUL /* Op::58 */, Platform::XE_HPC, 0x41,
            "mul",
            "Multiply",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UW,W <- UW,W
                {TYPE(Type::UW)|TYPE(Type::W),TYPE(Type::UW)|TYPE(Type::W)},
                // UD,D <- UW,W
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UW)|TYPE(Type::W)},
                // UD,D <- UW,W,UD,D
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF,F <- BF,F
                {TYPE(Type::BF)|TYPE(Type::F),TYPE(Type::BF)|TYPE(Type::F)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // UQ,Q <- UD,D
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UD)|TYPE(Type::D)},
                // UD,D <- UD,D
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::NOP /* Op::59 */, Platform::XE_HPC, 0x60,
            "nop",
            "No Operation",
            OpSpec::Format::NULLARY,
            { }, // no type mappings
            OpSpec::Attr::NONE
        },
        {Op::NOT /* Op::60 */, Platform::XE_HPC, 0x64,
            "not",
            "Logic Not",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::OR /* Op::61 */, Platform::XE_HPC, 0x66,
            "or",
            "Logic Or",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::RET /* Op::63 */, Platform::XE_HPC, 0x2D,
            "ret",
            "Return",
            OpSpec::Format::JUMP_UNARY_REG,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::RNDD /* Op::64 */, Platform::XE_HPC, 0x45,
            "rndd",
            "Round Down",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::RNDE /* Op::65 */, Platform::XE_HPC, 0x46,
            "rnde",
            "Round to Nearest or Even",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::RNDU /* Op::66 */, Platform::XE_HPC, 0x44,
            "rndu",
            "Round Up",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::RNDZ /* Op::67 */, Platform::XE_HPC, 0x47,
            "rndz",
            "Round to Zero",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::ROL /* Op::68 */, Platform::XE_HPC, 0x6F,
            "rol",
            "Rotate Left",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UW,UD <- UW,UD
                {TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UW)|TYPE(Type::UD)},
                // UQ <- UQ
                {TYPE(Type::UQ),TYPE(Type::UQ)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::ROR /* Op::69 */, Platform::XE_HPC, 0x6E,
            "ror",
            "Rotate Right",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UW,UD <- UW,UD
                {TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UW)|TYPE(Type::UD)},
                // UQ <- UQ
                {TYPE(Type::UQ),TYPE(Type::UQ)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::SEL /* Op::74 */, Platform::XE_HPC, 0x62,
            "sel",
            "Select",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // BF,F <- BF,F
                {TYPE(Type::BF)|TYPE(Type::F),TYPE(Type::BF)|TYPE(Type::F)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // DF <- DF
                {TYPE(Type::DF),TYPE(Type::DF)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_SELECT|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::SEND /* Op::75 */, Platform::XE_HPC, 0x31,
            "send",
            "Send Message",
            OpSpec::Format::SEND_BINARY,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::SENDC /* Op::76 */, Platform::XE_HPC, 0x32,
            "sendc",
            "Send Message Conditional",
            OpSpec::Format::SEND_BINARY,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::SHL /* Op::82 */, Platform::XE_HPC, 0x69,
            "shl",
            "Shift Left",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::SHR /* Op::83 */, Platform::XE_HPC, 0x68,
            "shr",
            "Shift Right",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,UW,UD <- UB,UW,UD
                {TYPE(Type::UB)|TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UB)|TYPE(Type::UW)|TYPE(Type::UD)},
                // UQ <- UW,UD,UQ
                {TYPE(Type::UQ),TYPE(Type::UW)|TYPE(Type::UD)|TYPE(Type::UQ)},
                // UW,UD <- UQ
                {TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UQ)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::SRND /* Op::85 */, Platform::XE_HPC, 0x54,
            "srnd",
            "StochasticRounding",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // HF <- F
                {TYPE(Type::HF),TYPE(Type::F)},
                // BF8 <- HF
                {TYPE(Type::BF8),TYPE(Type::HF)}
            },
            OpSpec::Attr::SUPPORTS_SATURATION
        },
        {Op::SUBB /* Op::86 */, Platform::XE_HPC, 0x4F,
            "subb",
            "Subtraction with Borrow",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION
        },
        {Op::SYNC /* Op::87 */, Platform::XE_HPC, 0x01,
            "sync",
            "Synchronize",
            OpSpec::Format::SYNC_UNARY,
            {
                //  <- UB,B,UW,W,UD,D,UQ,Q,HF,F,DF
                {ENUM_BITSET_EMPTY_VALUE,TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)|TYPE(Type::HF)|TYPE(Type::F)|TYPE(Type::DF)}
            },
            OpSpec::Attr::NONE
        },
        {Op::INVALID, Platform::XE_HPC, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::WHILE /* Op::89 */, Platform::XE_HPC, 0x27,
            "while",
            "While",
            OpSpec::Format::JUMP_UNARY_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::XOR /* Op::90 */, Platform::XE_HPC, 0x67,
            "xor",
            "Logic Xor",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UQ,Q <- UW,W,UD,D,UQ,Q
                {TYPE(Type::UQ)|TYPE(Type::Q),TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)},
                // UW,W,UD,D <- UQ,Q
                {TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UQ)|TYPE(Type::Q)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        }
    }; // end MODEL_XE_HPC_OPSPECS
} // namespace iga
#endif // IGA_MODELS_XE_HPC_HPP

/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#include "../include/BiF_Definitions.cl"
#include "../../Headers/spirv.h"

INLINE float SPIRV_OVERLOADABLE SPIRV_OCL_BUILTIN(half_log, _f32, )(float x ){
    return __builtin_spirv_OpenCL_native_log_f32(x);
}

INLINE float2 SPIRV_OVERLOADABLE SPIRV_OCL_BUILTIN(half_log, _v2f32, )(float2 x ){
    return __builtin_spirv_OpenCL_native_log_v2f32(x);
}

INLINE float3 SPIRV_OVERLOADABLE SPIRV_OCL_BUILTIN(half_log, _v3f32, )(float3 x ){
    return __builtin_spirv_OpenCL_native_log_v3f32(x);
}

INLINE float4 SPIRV_OVERLOADABLE SPIRV_OCL_BUILTIN(half_log, _v4f32, )(float4 x ){
    return __builtin_spirv_OpenCL_native_log_v4f32(x);
}

INLINE float8 SPIRV_OVERLOADABLE SPIRV_OCL_BUILTIN(half_log, _v8f32, )(float8 x ){
    return __builtin_spirv_OpenCL_native_log_v8f32(x);
}

INLINE float16 SPIRV_OVERLOADABLE SPIRV_OCL_BUILTIN(half_log, _v16f32, )(float16 x ){
    return __builtin_spirv_OpenCL_native_log_v16f32(x);
}

#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0018a5b0
// Address: 0x18a5b0 - 0x18a5c0
void entry_0018a5b0_0x18a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a5b0_0x18a5b0");
#endif

    ctx->pc = 0x18a5b0u;

    // 0x18a5b0: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18a5b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18a5b4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a5b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a5b8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a5b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x18a5c0u;
}

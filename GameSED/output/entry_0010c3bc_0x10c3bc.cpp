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

// Function: entry_0010c3bc
// Address: 0x10c3bc - 0x10c3d0
void entry_0010c3bc_0x10c3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c3bc_0x10c3bc");
#endif

    ctx->pc = 0x10c3bcu;

    // 0x10c3bc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x10c3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10c3c0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x10c3c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10c3c4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x10c3c4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10c3c8: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x10c3c8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10c3cc: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x10c3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    ctx->pc = 0x10c3d0u;
}

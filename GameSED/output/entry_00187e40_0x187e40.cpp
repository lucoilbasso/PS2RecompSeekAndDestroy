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

// Function: entry_00187e40
// Address: 0x187e40 - 0x187e80
void entry_00187e40_0x187e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e40_0x187e40");
#endif

    ctx->pc = 0x187e40u;

    // 0x187e40: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x187e44: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x187e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x187e48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x187e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187e4c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x187e4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187e50: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x187e50u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x187e54: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x187e54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x187e58: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x187e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x187e5c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x187e5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x187e60: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x187e60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x187e64: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x187e64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x187e68: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x187e68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x187e6c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x187e70: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x187e74: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x187e74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x187e78: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x187e78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x187e7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x187e80u;
}

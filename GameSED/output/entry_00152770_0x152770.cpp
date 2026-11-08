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

// Function: entry_00152770
// Address: 0x152770 - 0x1527b0
void entry_00152770_0x152770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152770_0x152770");
#endif

    ctx->pc = 0x152770u;

    // 0x152770: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x152770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x152774: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x152778: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152778u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15277c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15277cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152780: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x152780u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152784: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x152784u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x152788: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x152788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15278c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x15278cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152790: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x152790u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x152794: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152794u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152798: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x152798u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x15279c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15279cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1527a0: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1527a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1527a4: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1527a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1527a8: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1527a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1527ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1527acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1527b0u;
}

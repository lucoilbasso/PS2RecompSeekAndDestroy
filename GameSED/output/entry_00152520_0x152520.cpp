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

// Function: entry_00152520
// Address: 0x152520 - 0x152560
void entry_00152520_0x152520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152520_0x152520");
#endif

    ctx->pc = 0x152520u;

    // 0x152520: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x152524: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x152524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x152528: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15252c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15252cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152530: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x152530u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152534: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x152534u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x152538: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x152538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15253c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x15253cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152540: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x152540u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x152544: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152544u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152548: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x152548u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x15254c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15254cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152550: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x152550u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152554: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152558: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x152558u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15255c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x152560u;
}

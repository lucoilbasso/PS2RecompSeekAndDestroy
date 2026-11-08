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

// Function: entry_001de088
// Address: 0x1de088 - 0x1de0c8
void entry_001de088_0x1de088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de088_0x1de088");
#endif

    ctx->pc = 0x1de088u;

    // 0x1de088: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1de08c: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1de08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1de090: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de094: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1de094u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1de098: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1de098u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de09c: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x1de09cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1de0a0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1de0a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de0a4: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1de0a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de0a8: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x1de0a8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x1de0ac: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1de0acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de0b0: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x1de0b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x1de0b4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1de0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de0b8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1de0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de0bc: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1de0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1de0c0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1de0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1de0c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1de0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1de0c8u;
}

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

// Function: entry_00189160
// Address: 0x189160 - 0x1891a0
void entry_00189160_0x189160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189160_0x189160");
#endif

    ctx->pc = 0x189160u;

    // 0x189160: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x189164: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x189164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x189168: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18916c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x18916cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189170: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x189170u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189174: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x189174u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x189178: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x189178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18917c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x18917cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189180: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x189180u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x189184: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x189184u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189188: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x189188u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x18918c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x18918cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x189190: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x189190u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x189194: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x189194u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x189198: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x189198u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18919c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1891a0u;
}

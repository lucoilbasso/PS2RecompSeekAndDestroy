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

// Function: entry_00188f60
// Address: 0x188f60 - 0x188fa0
void entry_00188f60_0x188f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188f60_0x188f60");
#endif

    ctx->pc = 0x188f60u;

    // 0x188f60: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188f64: 0x262300d0  addiu       $v1, $s1, 0xD0
    ctx->pc = 0x188f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x188f68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188f68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x188f6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188f70: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x188f70u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188f74: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x188f74u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x188f78: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x188f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x188f7c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x188f7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f80: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x188f80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x188f84: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x188f84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f88: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x188f88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x188f8c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x188f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188f90: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x188f90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188f94: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x188f94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188f98: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x188f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188f9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x188f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x188fa0u;
}

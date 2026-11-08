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

// Function: entry_00192590
// Address: 0x192590 - 0x1925ac
void entry_00192590_0x192590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192590_0x192590");
#endif

    ctx->pc = 0x192590u;

    // 0x192590: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x192590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192594: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x192594u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192598: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x192598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19259c: 0x262301e0  addiu       $v1, $s1, 0x1E0
    ctx->pc = 0x19259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1925a0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1925a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1925a4: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1925a4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1925a8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1925a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1925acu;
}

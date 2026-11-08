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

// Function: entry_00180230
// Address: 0x180230 - 0x180254
void entry_00180230_0x180230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180230_0x180230");
#endif

    ctx->pc = 0x180230u;

    // 0x180230: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x180230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x180234: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x180234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180238: 0x4bc2086f  vmini.xyz   $vf1, $vf1, $vf2
    ctx->pc = 0x180238u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18023c: 0xfb010000  sqc2        $vf1, 0x0($t8)
    ctx->pc = 0x18023cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x180240: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x180240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x180244: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x180244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x180248: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x180248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18024c: 0x4bc2086b  vmax.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18024cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180250: 0xf9e10000  sqc2        $vf1, 0x0($t7)
    ctx->pc = 0x180250u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x180254u;
}

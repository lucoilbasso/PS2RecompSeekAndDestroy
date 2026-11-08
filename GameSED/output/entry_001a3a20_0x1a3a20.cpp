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

// Function: entry_001a3a20
// Address: 0x1a3a20 - 0x1a3a34
void entry_001a3a20_0x1a3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3a20_0x1a3a20");
#endif

    ctx->pc = 0x1a3a20u;

    // 0x1a3a20: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a3a24: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3a28: 0x4bc2113f  vitof15.xyz $vf2, $vf2
    ctx->pc = 0x1a3a28u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a3a2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a3a2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3a30: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a3a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1a3a34u;
}

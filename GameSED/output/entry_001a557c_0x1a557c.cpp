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

// Function: entry_001a557c
// Address: 0x1a557c - 0x1a5588
void entry_001a557c_0x1a557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a557c_0x1a557c");
#endif

    ctx->pc = 0x1a557cu;

    // 0x1a557c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a557cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5580: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a5580u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a5584: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a5584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x1a5588u;
}

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

// Function: caseD_4
// Address: 0x1a1e20 - 0x1a1e30
void caseD_4_0x1a1e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a1e20");
#endif

    ctx->pc = 0x1a1e20u;

    // 0x1a1e20: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a1e20u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1e24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1E24u;
    {
        const bool branch_taken_0x1a1e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e24) {
            ctx->pc = 0x1A1E44u;
            return;
        }
    }
    ctx->pc = 0x1A1E2Cu;
    // 0x1a1e2c: 0x0  nop
    ctx->pc = 0x1a1e2cu;
    // NOP
    ctx->pc = 0x1a1e30u;
}

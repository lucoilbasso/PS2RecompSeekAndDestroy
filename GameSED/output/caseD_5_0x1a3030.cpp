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

// Function: caseD_5
// Address: 0x1a3030 - 0x1a3040
void caseD_5_0x1a3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a3030");
#endif

    ctx->pc = 0x1a3030u;

    // 0x1a3030: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a3030u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3034u;
    {
        const bool branch_taken_0x1a3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3034) {
            ctx->pc = 0x1A3054u;
            return;
        }
    }
    ctx->pc = 0x1A303Cu;
    // 0x1a303c: 0x0  nop
    ctx->pc = 0x1a303cu;
    // NOP
    ctx->pc = 0x1a3040u;
}

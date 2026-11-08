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
// Address: 0x1a3de0 - 0x1a3df0
void caseD_5_0x1a3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a3de0");
#endif

    ctx->pc = 0x1a3de0u;

    // 0x1a3de0: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a3de0u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3de4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3DE4u;
    {
        const bool branch_taken_0x1a3de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3de4) {
            ctx->pc = 0x1A3E04u;
            return;
        }
    }
    ctx->pc = 0x1A3DECu;
    // 0x1a3dec: 0x0  nop
    ctx->pc = 0x1a3decu;
    // NOP
    ctx->pc = 0x1a3df0u;
}

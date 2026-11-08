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
// Address: 0x1a2048 - 0x1a2058
void caseD_5_0x1a2048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a2048");
#endif

    ctx->pc = 0x1a2048u;

    // 0x1a2048: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a2048u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a204c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A204Cu;
    {
        const bool branch_taken_0x1a204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a204c) {
            ctx->pc = 0x1A206Cu;
            return;
        }
    }
    ctx->pc = 0x1A2054u;
    // 0x1a2054: 0x0  nop
    ctx->pc = 0x1a2054u;
    // NOP
    ctx->pc = 0x1a2058u;
}

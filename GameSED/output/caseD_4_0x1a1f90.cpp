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
// Address: 0x1a1f90 - 0x1a1fa0
void caseD_4_0x1a1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a1f90");
#endif

    ctx->pc = 0x1a1f90u;

    // 0x1a1f90: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a1f90u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1F94u;
    {
        const bool branch_taken_0x1a1f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f94) {
            ctx->pc = 0x1A1FB4u;
            return;
        }
    }
    ctx->pc = 0x1A1F9Cu;
    // 0x1a1f9c: 0x0  nop
    ctx->pc = 0x1a1f9cu;
    // NOP
    ctx->pc = 0x1a1fa0u;
}

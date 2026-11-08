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

// Function: caseD_2
// Address: 0x1a1d38 - 0x1a1d48
void caseD_2_0x1a1d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a1d38");
#endif

    ctx->pc = 0x1a1d38u;

    // 0x1a1d38: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a1d38u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1D3Cu;
    {
        const bool branch_taken_0x1a1d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d3c) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D44u;
    // 0x1a1d44: 0x0  nop
    ctx->pc = 0x1a1d44u;
    // NOP
    ctx->pc = 0x1a1d48u;
}

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

// Function: caseD_1
// Address: 0x1a1d28 - 0x1a1d38
void caseD_1_0x1a1d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a1d28");
#endif

    ctx->pc = 0x1a1d28u;

    // 0x1a1d28: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a1d28u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d2c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1D2Cu;
    {
        const bool branch_taken_0x1a1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d2c) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D34u;
    // 0x1a1d34: 0x0  nop
    ctx->pc = 0x1a1d34u;
    // NOP
    ctx->pc = 0x1a1d38u;
}

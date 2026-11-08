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
// Address: 0x1a6138 - 0x1a6140
void caseD_2_0x1a6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a6138");
#endif

    ctx->pc = 0x1a6138u;

    // 0x1a6138: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A6138u;
    {
        const bool branch_taken_0x1a6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6138u;
        // 0x1a613c: 0x2051018  mult        $v0, $s0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6138) {
            ctx->pc = 0x1A61DCu;
            return;
        }
    }
    ctx->pc = 0x1A6140u;
}

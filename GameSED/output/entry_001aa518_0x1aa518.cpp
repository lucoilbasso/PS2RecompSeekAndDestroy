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

// Function: entry_001aa518
// Address: 0x1aa518 - 0x1aa520
void entry_001aa518_0x1aa518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa518_0x1aa518");
#endif

    ctx->pc = 0x1aa518u;

    // 0x1aa518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA518u;
    {
        const bool branch_taken_0x1aa518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA518u;
        // 0x1aa51c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa518) {
            ctx->pc = 0x1AA524u;
            return;
        }
    }
    ctx->pc = 0x1AA520u;
}

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

// Function: entry_001a6168
// Address: 0x1a6168 - 0x1a6170
void entry_001a6168_0x1a6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6168_0x1a6168");
#endif

    ctx->pc = 0x1a6168u;

    // 0x1a6168: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6168u;
    {
        const bool branch_taken_0x1a6168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6168) {
            ctx->pc = 0x1A616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6168u;
            // 0x1a616c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6170u;
            return;
        }
    }
    ctx->pc = 0x1A6170u;
}

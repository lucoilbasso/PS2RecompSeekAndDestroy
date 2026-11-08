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

// Function: entry_00171348
// Address: 0x171348 - 0x171350
void entry_00171348_0x171348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171348_0x171348");
#endif

    ctx->pc = 0x171348u;

    // 0x171348: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171348u;
    {
        const bool branch_taken_0x171348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171348) {
            ctx->pc = 0x17134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171348u;
            // 0x17134c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171350u;
            return;
        }
    }
    ctx->pc = 0x171350u;
}

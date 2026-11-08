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

// Function: entry_001a505c
// Address: 0x1a505c - 0x1a5064
void entry_001a505c_0x1a505c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a505c_0x1a505c");
#endif

    ctx->pc = 0x1a505cu;

    // 0x1a505c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A505Cu;
    {
        const bool branch_taken_0x1a505c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a505c) {
            ctx->pc = 0x1A5060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A505Cu;
            // 0x1a5060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5064u;
            return;
        }
    }
    ctx->pc = 0x1A5064u;
}

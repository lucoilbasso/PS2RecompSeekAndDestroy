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

// Function: entry_001aa714
// Address: 0x1aa714 - 0x1aa71c
void entry_001aa714_0x1aa714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa714_0x1aa714");
#endif

    ctx->pc = 0x1aa714u;

    // 0x1aa714: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA714u;
    {
        const bool branch_taken_0x1aa714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa714) {
            ctx->pc = 0x1AA718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA714u;
            // 0x1aa718: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA71Cu;
            return;
        }
    }
    ctx->pc = 0x1AA71Cu;
}

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

// Function: entry_001c8454
// Address: 0x1c8454 - 0x1c8460
void entry_001c8454_0x1c8454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8454_0x1c8454");
#endif

    ctx->pc = 0x1c8454u;

    // 0x1c8454: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1C8454u;
    {
        const bool branch_taken_0x1c8454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8454u;
        // 0x1c8458: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8454) {
            ctx->pc = 0x1C8848u;
            return;
        }
    }
    ctx->pc = 0x1C845Cu;
    // 0x1c845c: 0x0  nop
    ctx->pc = 0x1c845cu;
    // NOP
    ctx->pc = 0x1c8460u;
}

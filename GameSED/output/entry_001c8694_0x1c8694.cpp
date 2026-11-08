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

// Function: entry_001c8694
// Address: 0x1c8694 - 0x1c86a0
void entry_001c8694_0x1c8694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8694_0x1c8694");
#endif

    ctx->pc = 0x1c8694u;

    // 0x1c8694: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1C8694u;
    {
        const bool branch_taken_0x1c8694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8694u;
        // 0x1c8698: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8694) {
            ctx->pc = 0x1C884Cu;
            return;
        }
    }
    ctx->pc = 0x1C869Cu;
    // 0x1c869c: 0x0  nop
    ctx->pc = 0x1c869cu;
    // NOP
    ctx->pc = 0x1c86a0u;
}

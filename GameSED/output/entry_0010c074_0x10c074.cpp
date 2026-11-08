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

// Function: entry_0010c074
// Address: 0x10c074 - 0x10c07c
void entry_0010c074_0x10c074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c074_0x10c074");
#endif

    ctx->pc = 0x10c074u;

    // 0x10c074: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C074u;
    {
        const bool branch_taken_0x10c074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C074u;
        // 0x10c078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c074) {
            ctx->pc = 0x10C084u;
            return;
        }
    }
    ctx->pc = 0x10C07Cu;
}

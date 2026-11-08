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

// Function: entry_001a88d0
// Address: 0x1a88d0 - 0x1a88d8
void entry_001a88d0_0x1a88d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a88d0_0x1a88d0");
#endif

    ctx->pc = 0x1a88d0u;

    // 0x1a88d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A88D0u;
    {
        const bool branch_taken_0x1a88d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88D0u;
        // 0x1a88d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88d0) {
            ctx->pc = 0x1A88E4u;
            return;
        }
    }
    ctx->pc = 0x1A88D8u;
}

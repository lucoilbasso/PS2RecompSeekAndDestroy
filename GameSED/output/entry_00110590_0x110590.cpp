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

// Function: entry_00110590
// Address: 0x110590 - 0x110598
void entry_00110590_0x110590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110590_0x110590");
#endif

    ctx->pc = 0x110590u;

    // 0x110590: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110590u;
    {
        const bool branch_taken_0x110590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x110594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110590u;
        // 0x110594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110590) {
            ctx->pc = 0x1105A8u;
            return;
        }
    }
    ctx->pc = 0x110598u;
}

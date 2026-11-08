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

// Function: entry_001c2480
// Address: 0x1c2480 - 0x1c2488
void entry_001c2480_0x1c2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2480_0x1c2480");
#endif

    ctx->pc = 0x1c2480u;

    // 0x1c2480: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2480u;
    {
        const bool branch_taken_0x1c2480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c2480) {
            ctx->pc = 0x1C2484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2480u;
            // 0x1c2484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C24C8u;
            return;
        }
    }
    ctx->pc = 0x1C2488u;
}

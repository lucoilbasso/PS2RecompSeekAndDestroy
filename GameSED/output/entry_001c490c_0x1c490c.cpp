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

// Function: entry_001c490c
// Address: 0x1c490c - 0x1c4918
void entry_001c490c_0x1c490c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c490c_0x1c490c");
#endif

    ctx->pc = 0x1c490cu;

    // 0x1c490c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C490Cu;
    {
        const bool branch_taken_0x1c490c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C490Cu;
        // 0x1c4910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c490c) {
            ctx->pc = 0x1C4928u;
            return;
        }
    }
    ctx->pc = 0x1C4914u;
    // 0x1c4914: 0x0  nop
    ctx->pc = 0x1c4914u;
    // NOP
    ctx->pc = 0x1c4918u;
}

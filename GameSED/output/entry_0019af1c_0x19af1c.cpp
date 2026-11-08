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

// Function: entry_0019af1c
// Address: 0x19af1c - 0x19af28
void entry_0019af1c_0x19af1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af1c_0x19af1c");
#endif

    ctx->pc = 0x19af1cu;

    // 0x19af1c: 0x1109000a  beq         $t0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x19AF1Cu;
    {
        const bool branch_taken_0x19af1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF1Cu;
        // 0x19af20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af1c) {
            ctx->pc = 0x19AF48u;
            return;
        }
    }
    ctx->pc = 0x19AF24u;
    // 0x19af24: 0x0  nop
    ctx->pc = 0x19af24u;
    // NOP
    ctx->pc = 0x19af28u;
}

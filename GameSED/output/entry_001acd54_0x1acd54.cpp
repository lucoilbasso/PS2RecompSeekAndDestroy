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

// Function: entry_001acd54
// Address: 0x1acd54 - 0x1acd5c
void entry_001acd54_0x1acd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acd54_0x1acd54");
#endif

    ctx->pc = 0x1acd54u;

    // 0x1acd54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ACD54u;
    {
        const bool branch_taken_0x1acd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD54u;
        // 0x1acd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd54) {
            ctx->pc = 0x1ACD88u;
            return;
        }
    }
    ctx->pc = 0x1ACD5Cu;
}

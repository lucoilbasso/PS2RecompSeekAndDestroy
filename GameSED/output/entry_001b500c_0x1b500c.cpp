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

// Function: entry_001b500c
// Address: 0x1b500c - 0x1b5024
void entry_001b500c_0x1b500c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b500c_0x1b500c");
#endif

    switch (ctx->pc) {
        case 0x1b501cu: goto label_1b501c;
        default: break;
    }

    ctx->pc = 0x1b500cu;

    // 0x1b500c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B500Cu;
    {
        const bool branch_taken_0x1b500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b500c) {
            ctx->pc = 0x1B5024u;
            return;
        }
    }
    ctx->pc = 0x1B5014u;
    // 0x1b5014: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5014u;
    SET_GPR_U32(ctx, 31, 0x1B501Cu);
    ctx->pc = 0x1B5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5014u;
    // 0x1b5018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5014u, 0x1B501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B501Cu;
label_1b501c:
    // 0x1b501c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B501Cu;
        // 0x1b5020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5038u;
            return;
        }
    }
    ctx->pc = 0x1B5024u;
}

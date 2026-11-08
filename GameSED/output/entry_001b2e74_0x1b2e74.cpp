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

// Function: entry_001b2e74
// Address: 0x1b2e74 - 0x1b2e8c
void entry_001b2e74_0x1b2e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2e74_0x1b2e74");
#endif

    switch (ctx->pc) {
        case 0x1b2e84u: goto label_1b2e84;
        default: break;
    }

    ctx->pc = 0x1b2e74u;

    // 0x1b2e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2E74u;
    {
        const bool branch_taken_0x1b2e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e74) {
            ctx->pc = 0x1B2E8Cu;
            return;
        }
    }
    ctx->pc = 0x1B2E7Cu;
    // 0x1b2e7c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E84u);
    ctx->pc = 0x1B2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E7Cu;
    // 0x1b2e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2E7Cu, 0x1B2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E84u;
label_1b2e84:
    // 0x1b2e84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2E84u;
    {
        const bool branch_taken_0x1b2e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E84u;
        // 0x1b2e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e84) {
            ctx->pc = 0x1B2EA0u;
            return;
        }
    }
    ctx->pc = 0x1B2E8Cu;
}

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

// Function: entry_001b3578
// Address: 0x1b3578 - 0x1b3588
void entry_001b3578_0x1b3578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3578_0x1b3578");
#endif

    switch (ctx->pc) {
        case 0x1b3580u: goto label_1b3580;
        default: break;
    }

    ctx->pc = 0x1b3578u;

    // 0x1b3578: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3578u;
    SET_GPR_U32(ctx, 31, 0x1B3580u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3578u, 0x1B3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3580u;
label_1b3580:
    // 0x1b3580: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1B3580u;
    {
        const bool branch_taken_0x1b3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3580u;
        // 0x1b3584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3580) {
            ctx->pc = 0x1B3734u;
            return;
        }
    }
    ctx->pc = 0x1B3588u;
}

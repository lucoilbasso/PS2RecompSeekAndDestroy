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

// Function: entry_001b3464
// Address: 0x1b3464 - 0x1b3474
void entry_001b3464_0x1b3464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3464_0x1b3464");
#endif

    switch (ctx->pc) {
        case 0x1b346cu: goto label_1b346c;
        default: break;
    }

    ctx->pc = 0x1b3464u;

    // 0x1b3464: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3464u;
    SET_GPR_U32(ctx, 31, 0x1B346Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3464u, 0x1B346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B346Cu;
label_1b346c:
    // 0x1b346c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1B346Cu;
    {
        const bool branch_taken_0x1b346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B346Cu;
        // 0x1b3470: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b346c) {
            ctx->pc = 0x1B3734u;
            return;
        }
    }
    ctx->pc = 0x1B3474u;
}

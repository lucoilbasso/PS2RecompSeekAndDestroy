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

// Function: entry_001b7460
// Address: 0x1b7460 - 0x1b7470
void entry_001b7460_0x1b7460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7460_0x1b7460");
#endif

    switch (ctx->pc) {
        case 0x1b7468u: goto label_1b7468;
        default: break;
    }

    ctx->pc = 0x1b7460u;

    // 0x1b7460: 0xc06bce4  jal         func_1AF390
    ctx->pc = 0x1B7460u;
    SET_GPR_U32(ctx, 31, 0x1B7468u);
    ctx->pc = 0x1B7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7460u;
    // 0x1b7464: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF390u, 0x1B7460u, 0x1B7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7468u;
label_1b7468:
    // 0x1b7468: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B7468u;
    {
        const bool branch_taken_0x1b7468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7468) {
            ctx->pc = 0x1B7408u;
            return;
        }
    }
    ctx->pc = 0x1B7470u;
}

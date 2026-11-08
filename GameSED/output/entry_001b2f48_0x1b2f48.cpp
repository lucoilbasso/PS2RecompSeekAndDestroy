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

// Function: entry_001b2f48
// Address: 0x1b2f48 - 0x1b2f58
void entry_001b2f48_0x1b2f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2f48_0x1b2f48");
#endif

    switch (ctx->pc) {
        case 0x1b2f50u: goto label_1b2f50;
        default: break;
    }

    ctx->pc = 0x1b2f48u;

    // 0x1b2f48: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2F48u;
    SET_GPR_U32(ctx, 31, 0x1B2F50u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2F48u, 0x1B2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F50u;
label_1b2f50:
    // 0x1b2f50: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1B2F50u;
    {
        const bool branch_taken_0x1b2f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F50u;
        // 0x1b2f54: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f50) {
            ctx->pc = 0x1B30F8u;
            return;
        }
    }
    ctx->pc = 0x1B2F58u;
}

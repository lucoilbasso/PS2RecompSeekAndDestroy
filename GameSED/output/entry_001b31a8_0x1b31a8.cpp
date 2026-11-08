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

// Function: entry_001b31a8
// Address: 0x1b31a8 - 0x1b31b8
void entry_001b31a8_0x1b31a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b31a8_0x1b31a8");
#endif

    switch (ctx->pc) {
        case 0x1b31b0u: goto label_1b31b0;
        default: break;
    }

    ctx->pc = 0x1b31a8u;

    // 0x1b31a8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B31A8u;
    SET_GPR_U32(ctx, 31, 0x1B31B0u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B31A8u, 0x1B31B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31B0u;
label_1b31b0:
    // 0x1b31b0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1B31B0u;
    {
        const bool branch_taken_0x1b31b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31B0u;
        // 0x1b31b4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31b0) {
            ctx->pc = 0x1B33B8u;
            return;
        }
    }
    ctx->pc = 0x1B31B8u;
}

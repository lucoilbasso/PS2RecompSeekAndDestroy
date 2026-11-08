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

// Function: entry_001b4ea0
// Address: 0x1b4ea0 - 0x1b4eb0
void entry_001b4ea0_0x1b4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4ea0_0x1b4ea0");
#endif

    switch (ctx->pc) {
        case 0x1b4ea8u: goto label_1b4ea8;
        default: break;
    }

    ctx->pc = 0x1b4ea0u;

    // 0x1b4ea0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4EA0u;
    SET_GPR_U32(ctx, 31, 0x1B4EA8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4EA0u, 0x1B4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EA8u;
label_1b4ea8:
    // 0x1b4ea8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1B4EA8u;
    {
        const bool branch_taken_0x1b4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EA8u;
        // 0x1b4eac: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ea8) {
            ctx->pc = 0x1B5038u;
            return;
        }
    }
    ctx->pc = 0x1B4EB0u;
}

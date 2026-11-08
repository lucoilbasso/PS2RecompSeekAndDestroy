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

// Function: entry_001b2d08
// Address: 0x1b2d08 - 0x1b2d18
void entry_001b2d08_0x1b2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2d08_0x1b2d08");
#endif

    switch (ctx->pc) {
        case 0x1b2d10u: goto label_1b2d10;
        default: break;
    }

    ctx->pc = 0x1b2d08u;

    // 0x1b2d08: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2D08u;
    SET_GPR_U32(ctx, 31, 0x1B2D10u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2D08u, 0x1B2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D10u;
label_1b2d10:
    // 0x1b2d10: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1B2D10u;
    {
        const bool branch_taken_0x1b2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D10u;
        // 0x1b2d14: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d10) {
            ctx->pc = 0x1B2EA0u;
            return;
        }
    }
    ctx->pc = 0x1B2D18u;
}

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

// Function: entry_001b4320
// Address: 0x1b4320 - 0x1b4330
void entry_001b4320_0x1b4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4320_0x1b4320");
#endif

    switch (ctx->pc) {
        case 0x1b4328u: goto label_1b4328;
        default: break;
    }

    ctx->pc = 0x1b4320u;

    // 0x1b4320: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4320u;
    SET_GPR_U32(ctx, 31, 0x1B4328u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4320u, 0x1B4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4328u;
label_1b4328:
    // 0x1b4328: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1B4328u;
    {
        const bool branch_taken_0x1b4328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4328u;
        // 0x1b432c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4328) {
            ctx->pc = 0x1B43F4u;
            return;
        }
    }
    ctx->pc = 0x1B4330u;
}

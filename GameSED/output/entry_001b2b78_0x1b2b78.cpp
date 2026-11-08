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

// Function: entry_001b2b78
// Address: 0x1b2b78 - 0x1b2b88
void entry_001b2b78_0x1b2b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b78_0x1b2b78");
#endif

    switch (ctx->pc) {
        case 0x1b2b80u: goto label_1b2b80;
        default: break;
    }

    ctx->pc = 0x1b2b78u;

    // 0x1b2b78: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2B78u;
    SET_GPR_U32(ctx, 31, 0x1B2B80u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2B78u, 0x1B2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B80u;
label_1b2b80:
    // 0x1b2b80: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1B2B80u;
    {
        const bool branch_taken_0x1b2b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B80u;
        // 0x1b2b84: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b80) {
            ctx->pc = 0x1B2C6Cu;
            return;
        }
    }
    ctx->pc = 0x1B2B88u;
}

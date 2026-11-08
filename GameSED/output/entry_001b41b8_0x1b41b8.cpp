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

// Function: entry_001b41b8
// Address: 0x1b41b8 - 0x1b41c8
void entry_001b41b8_0x1b41b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b41b8_0x1b41b8");
#endif

    switch (ctx->pc) {
        case 0x1b41c0u: goto label_1b41c0;
        default: break;
    }

    ctx->pc = 0x1b41b8u;

    // 0x1b41b8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B41B8u;
    SET_GPR_U32(ctx, 31, 0x1B41C0u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B41B8u, 0x1B41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41C0u;
label_1b41c0:
    // 0x1b41c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B41C0u;
    {
        const bool branch_taken_0x1b41c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41C0u;
        // 0x1b41c4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c0) {
            ctx->pc = 0x1B4298u;
            return;
        }
    }
    ctx->pc = 0x1B41C8u;
}

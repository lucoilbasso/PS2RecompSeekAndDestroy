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

// Function: entry_001b3800
// Address: 0x1b3800 - 0x1b3810
void entry_001b3800_0x1b3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3800_0x1b3800");
#endif

    switch (ctx->pc) {
        case 0x1b3808u: goto label_1b3808;
        default: break;
    }

    ctx->pc = 0x1b3800u;

    // 0x1b3800: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3800u;
    SET_GPR_U32(ctx, 31, 0x1B3808u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3800u, 0x1B3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3808u;
label_1b3808:
    // 0x1b3808: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1B3808u;
    {
        const bool branch_taken_0x1b3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3808u;
        // 0x1b380c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3808) {
            ctx->pc = 0x1B3910u;
            return;
        }
    }
    ctx->pc = 0x1B3810u;
}

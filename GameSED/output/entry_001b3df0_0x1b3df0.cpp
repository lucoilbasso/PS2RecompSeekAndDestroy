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

// Function: entry_001b3df0
// Address: 0x1b3df0 - 0x1b3e08
void entry_001b3df0_0x1b3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3df0_0x1b3df0");
#endif

    switch (ctx->pc) {
        case 0x1b3e00u: goto label_1b3e00;
        default: break;
    }

    ctx->pc = 0x1b3df0u;

    // 0x1b3df0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3DF0u;
    {
        const bool branch_taken_0x1b3df0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3df0) {
            ctx->pc = 0x1B3E08u;
            return;
        }
    }
    ctx->pc = 0x1B3DF8u;
    // 0x1b3df8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3DF8u;
    SET_GPR_U32(ctx, 31, 0x1B3E00u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3DF8u, 0x1B3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E00u;
label_1b3e00:
    // 0x1b3e00: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B3E00u;
    {
        const bool branch_taken_0x1b3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E00u;
        // 0x1b3e04: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e00) {
            ctx->pc = 0x1B3F18u;
            return;
        }
    }
    ctx->pc = 0x1B3E08u;
}

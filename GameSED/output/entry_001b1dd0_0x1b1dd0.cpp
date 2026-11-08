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

// Function: entry_001b1dd0
// Address: 0x1b1dd0 - 0x1b1de0
void entry_001b1dd0_0x1b1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1dd0_0x1b1dd0");
#endif

    ctx->pc = 0x1b1dd0u;

    // 0x1b1dd0: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1DD0u;
    {
        const bool branch_taken_0x1b1dd0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1B1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DD0u;
        // 0x1b1dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dd0) {
            ctx->pc = 0x1B1DE0u;
            return;
        }
    }
    ctx->pc = 0x1B1DD8u;
    // 0x1b1dd8: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B1DD8u;
    SET_GPR_U32(ctx, 31, 0x1B1DE0u);
    ctx->pc = 0x1B1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DD8u;
    // 0x1b1ddc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B1DD8u, 0x1B1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE0u;
}

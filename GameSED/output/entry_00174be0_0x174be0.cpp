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

// Function: entry_00174be0
// Address: 0x174be0 - 0x174bf0
void entry_00174be0_0x174be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174be0_0x174be0");
#endif

    switch (ctx->pc) {
        case 0x174be8u: goto label_174be8;
        default: break;
    }

    ctx->pc = 0x174be0u;

label_174be0:
    // 0x174be0: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x174BE0u;
    SET_GPR_U32(ctx, 31, 0x174BE8u);
    ctx->pc = 0x174BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BE0u;
    // 0x174be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x174BE0u, 0x174BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BE8u;
label_174be8:
    // 0x174be8: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x174BE8u;
    {
        const bool branch_taken_0x174be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x174BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BE8u;
        // 0x174bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174be8) {
            ctx->pc = 0x174BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174be0;
        }
    }
    ctx->pc = 0x174BF0u;
}

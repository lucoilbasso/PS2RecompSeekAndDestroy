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

// Function: entry_00110598
// Address: 0x110598 - 0x1105a8
void entry_00110598_0x110598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110598_0x110598");
#endif

    switch (ctx->pc) {
        case 0x1105a0u: goto label_1105a0;
        default: break;
    }

    ctx->pc = 0x110598u;

label_110598:
    // 0x110598: 0xc044156  jal         func_110558
    ctx->pc = 0x110598u;
    SET_GPR_U32(ctx, 31, 0x1105A0u);
    ctx->pc = 0x11059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110598u;
    // 0x11059c: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110558u, 0x110598u, 0x1105A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105A0u;
label_1105a0:
    // 0x1105a0: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1105A0u;
    {
        const bool branch_taken_0x1105a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1105A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105A0u;
        // 0x1105a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105a0) {
            ctx->pc = 0x110598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110598;
        }
    }
    ctx->pc = 0x1105A8u;
}

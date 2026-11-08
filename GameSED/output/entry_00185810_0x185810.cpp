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

// Function: entry_00185810
// Address: 0x185810 - 0x185824
void entry_00185810_0x185810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185810_0x185810");
#endif

    switch (ctx->pc) {
        case 0x18581cu: goto label_18581c;
        default: break;
    }

    ctx->pc = 0x185810u;

label_185810:
    // 0x185810: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x185810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x185814: 0xc061906  jal         func_186418
    ctx->pc = 0x185814u;
    SET_GPR_U32(ctx, 31, 0x18581Cu);
    ctx->pc = 0x185818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185814u;
    // 0x185818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186418u, 0x185814u, 0x18581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18581Cu;
label_18581c:
    // 0x18581c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18581Cu;
    {
        const bool branch_taken_0x18581c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18581Cu;
        // 0x185820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18581c) {
            ctx->pc = 0x185810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185810;
        }
    }
    ctx->pc = 0x185824u;
}

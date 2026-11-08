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

// Function: entry_0018c5d0
// Address: 0x18c5d0 - 0x18c5e4
void entry_0018c5d0_0x18c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c5d0_0x18c5d0");
#endif

    switch (ctx->pc) {
        case 0x18c5e0u: goto label_18c5e0;
        default: break;
    }

    ctx->pc = 0x18c5d0u;

    // 0x18c5d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5D0u;
    {
        const bool branch_taken_0x18c5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5d0) {
            ctx->pc = 0x18C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5D0u;
            // 0x18c5d4: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5E4u;
            return;
        }
    }
    ctx->pc = 0x18C5D8u;
    // 0x18c5d8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C5D8u;
    SET_GPR_U32(ctx, 31, 0x18C5E0u);
    ctx->pc = 0x18C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5D8u;
    // 0x18c5dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C5D8u, 0x18C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5E0u;
label_18c5e0:
    // 0x18c5e0: 0x8e040218  lw          $a0, 0x218($s0)
    ctx->pc = 0x18c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    ctx->pc = 0x18c5e4u;
}

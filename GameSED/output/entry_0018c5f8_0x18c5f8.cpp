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

// Function: entry_0018c5f8
// Address: 0x18c5f8 - 0x18c60c
void entry_0018c5f8_0x18c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c5f8_0x18c5f8");
#endif

    switch (ctx->pc) {
        case 0x18c608u: goto label_18c608;
        default: break;
    }

    ctx->pc = 0x18c5f8u;

    // 0x18c5f8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5F8u;
    {
        const bool branch_taken_0x18c5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5f8) {
            ctx->pc = 0x18C5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5F8u;
            // 0x18c5fc: 0x8e04021c  lw          $a0, 0x21C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C60Cu;
            return;
        }
    }
    ctx->pc = 0x18C600u;
    // 0x18c600: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C600u;
    SET_GPR_U32(ctx, 31, 0x18C608u);
    ctx->pc = 0x18C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C600u;
    // 0x18c604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C600u, 0x18C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C608u;
label_18c608:
    // 0x18c608: 0x8e04021c  lw          $a0, 0x21C($s0)
    ctx->pc = 0x18c608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    ctx->pc = 0x18c60cu;
}

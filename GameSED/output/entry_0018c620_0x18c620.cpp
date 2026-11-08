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

// Function: entry_0018c620
// Address: 0x18c620 - 0x18c634
void entry_0018c620_0x18c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c620_0x18c620");
#endif

    switch (ctx->pc) {
        case 0x18c630u: goto label_18c630;
        default: break;
    }

    ctx->pc = 0x18c620u;

    // 0x18c620: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C620u;
    {
        const bool branch_taken_0x18c620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c620) {
            ctx->pc = 0x18C624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C620u;
            // 0x18c624: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C634u;
            return;
        }
    }
    ctx->pc = 0x18C628u;
    // 0x18c628: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C628u;
    SET_GPR_U32(ctx, 31, 0x18C630u);
    ctx->pc = 0x18C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C628u;
    // 0x18c62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C628u, 0x18C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C630u;
label_18c630:
    // 0x18c630: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->pc = 0x18c634u;
}

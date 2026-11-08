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

// Function: entry_0018c5e4
// Address: 0x18c5e4 - 0x18c5f8
void entry_0018c5e4_0x18c5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c5e4_0x18c5e4");
#endif

    switch (ctx->pc) {
        case 0x18c5f4u: goto label_18c5f4;
        default: break;
    }

    ctx->pc = 0x18c5e4u;

    // 0x18c5e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5E4u;
    {
        const bool branch_taken_0x18c5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5e4) {
            ctx->pc = 0x18C5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5E4u;
            // 0x18c5e8: 0x8e040254  lw          $a0, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5F8u;
            return;
        }
    }
    ctx->pc = 0x18C5ECu;
    // 0x18c5ec: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C5ECu;
    SET_GPR_U32(ctx, 31, 0x18C5F4u);
    ctx->pc = 0x18C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5ECu;
    // 0x18c5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C5ECu, 0x18C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5F4u;
label_18c5f4:
    // 0x18c5f4: 0x8e040254  lw          $a0, 0x254($s0)
    ctx->pc = 0x18c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    ctx->pc = 0x18c5f8u;
}

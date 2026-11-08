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

// Function: entry_001da8d8
// Address: 0x1da8d8 - 0x1da8f0
void entry_001da8d8_0x1da8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da8d8_0x1da8d8");
#endif

    switch (ctx->pc) {
        case 0x1da8ecu: goto label_1da8ec;
        default: break;
    }

    ctx->pc = 0x1da8d8u;

    // 0x1da8d8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1da8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da8dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA8DCu;
    {
        const bool branch_taken_0x1da8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8dc) {
            ctx->pc = 0x1DA8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA8DCu;
            // 0x1da8e0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA8F0u;
            return;
        }
    }
    ctx->pc = 0x1DA8E4u;
    // 0x1da8e4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1DA8E4u;
    SET_GPR_U32(ctx, 31, 0x1DA8ECu);
    ctx->pc = 0x1DA8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8E4u;
    // 0x1da8e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1DA8E4u, 0x1DA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8ECu;
label_1da8ec:
    // 0x1da8ec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1da8f0u;
}

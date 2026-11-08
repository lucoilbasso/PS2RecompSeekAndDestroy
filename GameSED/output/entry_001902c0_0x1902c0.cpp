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

// Function: entry_001902c0
// Address: 0x1902c0 - 0x1902d4
void entry_001902c0_0x1902c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902c0_0x1902c0");
#endif

    switch (ctx->pc) {
        case 0x1902d0u: goto label_1902d0;
        default: break;
    }

    ctx->pc = 0x1902c0u;

    // 0x1902c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902C0u;
    {
        const bool branch_taken_0x1902c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902c0) {
            ctx->pc = 0x1902C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902C0u;
            // 0x1902c4: 0x8e0401d0  lw          $a0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902D4u;
            return;
        }
    }
    ctx->pc = 0x1902C8u;
    // 0x1902c8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902C8u;
    SET_GPR_U32(ctx, 31, 0x1902D0u);
    ctx->pc = 0x1902CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902C8u;
    // 0x1902cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902C8u, 0x1902D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902D0u;
label_1902d0:
    // 0x1902d0: 0x8e0401d0  lw          $a0, 0x1D0($s0)
    ctx->pc = 0x1902d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    ctx->pc = 0x1902d4u;
}

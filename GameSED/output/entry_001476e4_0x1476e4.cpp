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

// Function: entry_001476e4
// Address: 0x1476e4 - 0x1476f8
void entry_001476e4_0x1476e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001476e4_0x1476e4");
#endif

    ctx->pc = 0x1476e4u;

    // 0x1476e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1476e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1476e8: 0x4e1ffed  bgez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1476E8u;
    {
        const bool branch_taken_0x1476e8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1476ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476E8u;
        // 0x1476ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476e8) {
            ctx->pc = 0x1476A0u;
            return;
        }
    }
    ctx->pc = 0x1476F0u;
    // 0x1476f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1476F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476F0u;
        // 0x1476f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1476F8u;
}

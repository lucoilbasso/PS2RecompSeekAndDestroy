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

// Function: entry_00106ce4
// Address: 0x106ce4 - 0x106cf4
void entry_00106ce4_0x106ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ce4_0x106ce4");
#endif

    ctx->pc = 0x106ce4u;

    // 0x106ce4: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x106CE4u;
    {
        const bool branch_taken_0x106ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x106CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CE4u;
        // 0x106ce8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ce4) {
            ctx->pc = 0x106C80u;
            return;
        }
    }
    ctx->pc = 0x106CECu;
    // 0x106cec: 0x3e00008  jr          $ra
    ctx->pc = 0x106CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CF4u;
}

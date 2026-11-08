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

// Function: entry_0017bb40
// Address: 0x17bb40 - 0x17bb50
void entry_0017bb40_0x17bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb40_0x17bb40");
#endif

    ctx->pc = 0x17bb40u;

    // 0x17bb40: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BB40u;
    {
        const bool branch_taken_0x17bb40 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB40u;
        // 0x17bb44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb40) {
            ctx->pc = 0x17BB28u;
            return;
        }
    }
    ctx->pc = 0x17BB48u;
    // 0x17bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB50u;
}

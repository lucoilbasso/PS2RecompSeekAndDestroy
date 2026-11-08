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

// Function: entry_0017bad0
// Address: 0x17bad0 - 0x17bae0
void entry_0017bad0_0x17bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bad0_0x17bad0");
#endif

    ctx->pc = 0x17bad0u;

    // 0x17bad0: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BAD0u;
    {
        const bool branch_taken_0x17bad0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAD0u;
        // 0x17bad4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bad0) {
            ctx->pc = 0x17BAB8u;
            return;
        }
    }
    ctx->pc = 0x17BAD8u;
    // 0x17bad8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAE0u;
}

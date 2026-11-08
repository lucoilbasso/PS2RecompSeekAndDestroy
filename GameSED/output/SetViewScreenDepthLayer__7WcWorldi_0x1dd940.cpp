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

// Function: SetViewScreenDepthLayer__7WcWorldi
// Address: 0x1dd940 - 0x1dd94c
void SetViewScreenDepthLayer__7WcWorldi_0x1dd940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewScreenDepthLayer__7WcWorldi_0x1dd940");
#endif

    ctx->pc = 0x1dd940u;

    // 0x1dd940: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x1dd940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
    // 0x1dd944: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD944u;
        // 0x1dd948: 0xac800154  sw          $zero, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD94Cu;
}

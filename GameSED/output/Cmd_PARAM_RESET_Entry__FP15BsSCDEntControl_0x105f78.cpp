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

// Function: Cmd_PARAM_RESET_Entry__FP15BsSCDEntControl
// Address: 0x105f78 - 0x105f84
void Cmd_PARAM_RESET_Entry__FP15BsSCDEntControl_0x105f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARAM_RESET_Entry__FP15BsSCDEntControl_0x105f78");
#endif

    ctx->pc = 0x105f78u;

    // 0x105f78: 0xaf808898  sw          $zero, -0x7768($gp)
    ctx->pc = 0x105f78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), GPR_U32(ctx, 0));
    // 0x105f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x105F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F7Cu;
        // 0x105f80: 0xaf80889c  sw          $zero, -0x7764($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F84u;
}

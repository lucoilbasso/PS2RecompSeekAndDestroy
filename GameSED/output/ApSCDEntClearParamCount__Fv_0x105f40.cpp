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

// Function: ApSCDEntClearParamCount__Fv
// Address: 0x105f40 - 0x105f4c
void ApSCDEntClearParamCount__Fv_0x105f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntClearParamCount__Fv_0x105f40");
#endif

    ctx->pc = 0x105f40u;

    // 0x105f40: 0xaf808898  sw          $zero, -0x7768($gp)
    ctx->pc = 0x105f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), GPR_U32(ctx, 0));
    // 0x105f44: 0x3e00008  jr          $ra
    ctx->pc = 0x105F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F44u;
        // 0x105f48: 0xaf80889c  sw          $zero, -0x7764($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F4Cu;
}

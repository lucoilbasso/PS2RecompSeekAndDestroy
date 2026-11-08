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

// Function: Clear__9ApcSCDEnt
// Address: 0x1d79d8 - 0x1d79ec
void Clear__9ApcSCDEnt_0x1d79d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcSCDEnt_0x1d79d8");
#endif

    ctx->pc = 0x1d79d8u;

    // 0x1d79d8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1d79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1d79dc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1d79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1d79e0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1d79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1d79e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D79E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79E4u;
        // 0x1d79e8: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D79E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D79ECu;
}

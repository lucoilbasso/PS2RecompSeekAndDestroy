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

// Function: SRemoteCameraInit__Fv
// Address: 0x110818 - 0x11082c
void SRemoteCameraInit__Fv_0x110818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRemoteCameraInit__Fv_0x110818");
#endif

    ctx->pc = 0x110818u;

    // 0x110818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11081c: 0xaf80911c  sw          $zero, -0x6EE4($gp)
    ctx->pc = 0x11081cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
    // 0x110820: 0xaf829118  sw          $v0, -0x6EE8($gp)
    ctx->pc = 0x110820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 2));
    // 0x110824: 0x3e00008  jr          $ra
    ctx->pc = 0x110824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110824u;
        // 0x110828: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11082Cu;
}

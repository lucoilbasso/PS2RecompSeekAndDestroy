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

// Function: SetMotionProcedure__8WcDaemonPFP8WcDaemonP12ApMotionWorki_vP12ApMotionWork
// Address: 0x199f30 - 0x199f38
void SetMotionProcedure__8WcDaemonPFP8WcDaemonP12ApMotionWorki_vP12ApMotionWork_0x199f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionProcedure__8WcDaemonPFP8WcDaemonP12ApMotionWorki_vP12ApMotionWork_0x199f30");
#endif

    ctx->pc = 0x199f30u;

    // 0x199f30: 0x3e00008  jr          $ra
    ctx->pc = 0x199F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F38u;
}

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

// Function: ProbeTLBEntry
// Address: 0x1b82f8 - 0x1b8308
void ProbeTLBEntry_0x1b82f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ProbeTLBEntry_0x1b82f8");
#endif

    switch (ctx->pc) {
        case 0x1b8300u: goto label_1b8300;
        default: break;
    }

    ctx->pc = 0x1b82f8u;

    // 0x1b82f8: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1b82fc: 0xc  syscall     0
    ctx->pc = 0x1b82fcu;
    ctx->pc = 0x1B8300u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1b8300:
    // 0x1b8300: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8308u;
}

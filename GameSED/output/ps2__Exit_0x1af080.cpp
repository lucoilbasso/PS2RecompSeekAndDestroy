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

// Function: _Exit
// Address: 0x1af080 - 0x1af090
void ps2__Exit_0x1af080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Exit_0x1af080");
#endif

    switch (ctx->pc) {
        case 0x1af088u: goto label_1af088;
        default: break;
    }

    ctx->pc = 0x1af080u;

    // 0x1af080: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1af080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af084: 0xc  syscall     0
    ctx->pc = 0x1af084u;
    ctx->pc = 0x1AF088u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af088:
    // 0x1af088: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF090u;
}

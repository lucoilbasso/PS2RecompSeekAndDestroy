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

// Function: iGetCop0
// Address: 0x1af700 - 0x1af710
void iGetCop0_0x1af700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iGetCop0_0x1af700");
#endif

    switch (ctx->pc) {
        case 0x1af708u: goto label_1af708;
        default: break;
    }

    ctx->pc = 0x1af700u;

    // 0x1af700: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x1af700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x1af704: 0xc  syscall     0
    ctx->pc = 0x1af704u;
    ctx->pc = 0x1AF708u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af708:
    // 0x1af708: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF710u;
}

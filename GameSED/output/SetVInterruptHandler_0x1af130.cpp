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

// Function: SetVInterruptHandler
// Address: 0x1af130 - 0x1af140
void SetVInterruptHandler_0x1af130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVInterruptHandler_0x1af130");
#endif

    switch (ctx->pc) {
        case 0x1af138u: goto label_1af138;
        default: break;
    }

    ctx->pc = 0x1af130u;

    // 0x1af130: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1af134: 0xc  syscall     0
    ctx->pc = 0x1af134u;
    ctx->pc = 0x1AF138u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af138:
    // 0x1af138: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF140u;
}

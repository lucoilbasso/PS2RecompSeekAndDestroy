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

// Function: SetCPUTimer
// Address: 0x1af750 - 0x1af760
void SetCPUTimer_0x1af750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCPUTimer_0x1af750");
#endif

    switch (ctx->pc) {
        case 0x1af758u: goto label_1af758;
        default: break;
    }

    ctx->pc = 0x1af750u;

    // 0x1af750: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1af754: 0xc  syscall     0
    ctx->pc = 0x1af754u;
    ctx->pc = 0x1AF758u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af758:
    // 0x1af758: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF760u;
}

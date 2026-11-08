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

// Function: RemoveSbusIntcHandler
// Address: 0x1af0f0 - 0x1af100
void RemoveSbusIntcHandler_0x1af0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveSbusIntcHandler_0x1af0f0");
#endif

    switch (ctx->pc) {
        case 0x1af0f8u: goto label_1af0f8;
        default: break;
    }

    ctx->pc = 0x1af0f0u;

    // 0x1af0f0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1af0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1af0f4: 0xc  syscall     0
    ctx->pc = 0x1af0f4u;
    ctx->pc = 0x1AF0F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af0f8:
    // 0x1af0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF100u;
}

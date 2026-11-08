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

// Function: RFU063
// Address: 0x1af450 - 0x1af460
void RFU063_0x1af450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU063_0x1af450");
#endif

    switch (ctx->pc) {
        case 0x1af458u: goto label_1af458;
        default: break;
    }

    ctx->pc = 0x1af450u;

    // 0x1af450: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1af450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1af454: 0xc  syscall     0
    ctx->pc = 0x1af454u;
    ctx->pc = 0x1AF458u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af458:
    // 0x1af458: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF460u;
}

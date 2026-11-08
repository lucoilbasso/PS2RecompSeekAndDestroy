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

// Function: RFU060
// Address: 0x1af420 - 0x1af430
void RFU060_0x1af420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU060_0x1af420");
#endif

    switch (ctx->pc) {
        case 0x1af428u: goto label_1af428;
        default: break;
    }

    ctx->pc = 0x1af420u;

    // 0x1af420: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1af424: 0xc  syscall     0
    ctx->pc = 0x1af424u;
    ctx->pc = 0x1AF428u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af428:
    // 0x1af428: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF430u;
}

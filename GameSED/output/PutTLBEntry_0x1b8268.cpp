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

// Function: PutTLBEntry
// Address: 0x1b8268 - 0x1b8278
void PutTLBEntry_0x1b8268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutTLBEntry_0x1b8268");
#endif

    switch (ctx->pc) {
        case 0x1b8270u: goto label_1b8270;
        default: break;
    }

    ctx->pc = 0x1b8268u;

    // 0x1b8268: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x1b8268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1b826c: 0xc  syscall     0
    ctx->pc = 0x1b826cu;
    ctx->pc = 0x1B8270u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1b8270:
    // 0x1b8270: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8278u;
}

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

// Function: GetTLBEntry
// Address: 0x1b82d8 - 0x1b82e8
void GetTLBEntry_0x1b82d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTLBEntry_0x1b82d8");
#endif

    switch (ctx->pc) {
        case 0x1b82e0u: goto label_1b82e0;
        default: break;
    }

    ctx->pc = 0x1b82d8u;

    // 0x1b82d8: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1b82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1b82dc: 0xc  syscall     0
    ctx->pc = 0x1b82dcu;
    ctx->pc = 0x1B82E0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1b82e0:
    // 0x1b82e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82E8u;
}

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

// Function: iPutTLBEntry
// Address: 0x1b8278 - 0x1b8288
void iPutTLBEntry_0x1b8278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iPutTLBEntry_0x1b8278");
#endif

    switch (ctx->pc) {
        case 0x1b8280u: goto label_1b8280;
        default: break;
    }

    ctx->pc = 0x1b8278u;

    // 0x1b8278: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x1b827c: 0xc  syscall     0
    ctx->pc = 0x1b827cu;
    ctx->pc = 0x1B8280u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1b8280:
    // 0x1b8280: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8288u;
}

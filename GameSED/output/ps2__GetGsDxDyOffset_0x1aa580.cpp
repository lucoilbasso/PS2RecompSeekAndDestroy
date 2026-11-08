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

// Function: _GetGsDxDyOffset
// Address: 0x1aa580 - 0x1aa590
void ps2__GetGsDxDyOffset_0x1aa580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GetGsDxDyOffset_0x1aa580");
#endif

    switch (ctx->pc) {
        case 0x1aa588u: goto label_1aa588;
        default: break;
    }

    ctx->pc = 0x1aa580u;

    // 0x1aa580: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1aa580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa584: 0xc  syscall     0
    ctx->pc = 0x1aa584u;
    ctx->pc = 0x1AA588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1aa588:
    // 0x1aa588: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA590u;
}

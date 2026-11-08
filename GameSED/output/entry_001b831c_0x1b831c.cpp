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

// Function: entry_001b831c
// Address: 0x1b831c - 0x1b8328
void entry_001b831c_0x1b831c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b831c_0x1b831c");
#endif

    switch (ctx->pc) {
        case 0x1b8320u: goto label_1b8320;
        default: break;
    }

    ctx->pc = 0x1b831cu;

    // 0x1b831c: 0xc  syscall     0
    ctx->pc = 0x1b831cu;
    ctx->pc = 0x1B8320u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1b8320:
    // 0x1b8320: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8328u;
}

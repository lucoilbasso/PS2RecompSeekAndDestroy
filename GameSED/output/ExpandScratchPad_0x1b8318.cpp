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

// Function: ExpandScratchPad
// Address: 0x1b8318 - 0x1b8328
void ExpandScratchPad_0x1b8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExpandScratchPad_0x1b8318");
#endif

    switch (ctx->pc) {
        case 0x1b8320u: goto label_1b8320;
        default: break;
    }

    ctx->pc = 0x1b8318u;

    // 0x1b8318: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1b8318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
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

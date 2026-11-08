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

// Function: entry_0011c99c
// Address: 0x11c99c - 0x11c9ac
void entry_0011c99c_0x11c99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c99c_0x11c99c");
#endif

    ctx->pc = 0x11c99cu;

    // 0x11c99c: 0xac80404c  sw          $zero, 0x404C($a0)
    ctx->pc = 0x11c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16460), GPR_U32(ctx, 0));
    // 0x11c9a0: 0x8c82404c  lw          $v0, 0x404C($a0)
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16460)));
    // 0x11c9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11C9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C9ACu;
}

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

// Function: CommandClearNewCardStatus__8ApcMCard
// Address: 0x11c990 - 0x11c9ac
void CommandClearNewCardStatus__8ApcMCard_0x11c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandClearNewCardStatus__8ApcMCard_0x11c990");
#endif

    ctx->pc = 0x11c990u;

    // 0x11c990: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c994: 0xac824040  sw          $v0, 0x4040($a0)
    ctx->pc = 0x11c994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16448), GPR_U32(ctx, 2));
    // 0x11c998: 0x8c834040  lw          $v1, 0x4040($a0)
    ctx->pc = 0x11c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16448)));
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

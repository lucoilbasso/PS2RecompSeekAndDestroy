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

// Function: ClearNewCardStatus__7WcMCard
// Address: 0x1dc318 - 0x1dc32c
void ClearNewCardStatus__7WcMCard_0x1dc318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearNewCardStatus__7WcMCard_0x1dc318");
#endif

    ctx->pc = 0x1dc318u;

    // 0x1dc318: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dc318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc31c: 0xac824040  sw          $v0, 0x4040($a0)
    ctx->pc = 0x1dc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16448), GPR_U32(ctx, 2));
    // 0x1dc320: 0xac80404c  sw          $zero, 0x404C($a0)
    ctx->pc = 0x1dc320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16460), GPR_U32(ctx, 0));
    // 0x1dc324: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC32Cu;
}

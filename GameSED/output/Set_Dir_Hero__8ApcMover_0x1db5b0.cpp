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

// Function: Set_Dir_Hero__8ApcMover
// Address: 0x1db5b0 - 0x1db5c8
void Set_Dir_Hero__8ApcMover_0x1db5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Dir_Hero__8ApcMover_0x1db5b0");
#endif

    ctx->pc = 0x1db5b0u;

    // 0x1db5b0: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1db5b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1db5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1db5b8: 0xac8201e0  sw          $v0, 0x1E0($a0)
    ctx->pc = 0x1db5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    // 0x1db5bc: 0x8ca33630  lw          $v1, 0x3630($a1)
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13872)));
    // 0x1db5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5C0u;
        // 0x1db5c4: 0xac8301e4  sw          $v1, 0x1E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB5C8u;
}

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

// Function: SequenceCtrlReset__10WcSequenceUi
// Address: 0x1e0a88 - 0x1e0aa0
void SequenceCtrlReset__10WcSequenceUi_0x1e0a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SequenceCtrlReset__10WcSequenceUi_0x1e0a88");
#endif

    ctx->pc = 0x1e0a88u;

    // 0x1e0a88: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1e0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e0a8c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1e0a8cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1e0a90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0a94: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e0a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e0a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A98u;
        // 0x1e0a9c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0AA0u;
}

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

// Function: DrawSort__7WcWorldP8WcEntity
// Address: 0x188a80 - 0x188aa4
void DrawSort__7WcWorldP8WcEntity_0x188a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__7WcWorldP8WcEntity_0x188a80");
#endif

    ctx->pc = 0x188a80u;

    // 0x188a80: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x188a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x188a84: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x188a88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x188a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x188a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188a90: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x188a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x188a94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188a98: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x188a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    // 0x188a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x188A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A9Cu;
        // 0x188aa0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188AA4u;
}

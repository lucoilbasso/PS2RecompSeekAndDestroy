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

// Function: InqCurrentAction__8WcDaemon
// Address: 0x1e0c90 - 0x1e0ca8
void InqCurrentAction__8WcDaemon_0x1e0c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqCurrentAction__8WcDaemon_0x1e0c90");
#endif

    ctx->pc = 0x1e0c90u;

    // 0x1e0c90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e0c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c94: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1e0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1e0c98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e0c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA0u;
        // 0x1e0ca4: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CA8u;
}

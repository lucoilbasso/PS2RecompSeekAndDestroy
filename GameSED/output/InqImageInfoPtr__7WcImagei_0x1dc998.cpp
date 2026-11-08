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

// Function: InqImageInfoPtr__7WcImagei
// Address: 0x1dc998 - 0x1dc9b4
void InqImageInfoPtr__7WcImagei_0x1dc998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqImageInfoPtr__7WcImagei_0x1dc998");
#endif

    ctx->pc = 0x1dc998u;

    // 0x1dc998: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1dc998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dc99c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1dc99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1dc9a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dc9a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1dc9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dc9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9ACu;
        // 0x1dc9b0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC9B4u;
}

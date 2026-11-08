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

// Function: _InqParentCtrl__8WcStrobjP11WStrobjCtrl
// Address: 0x1e0378 - 0x1e03a0
void ps2__InqParentCtrl__8WcStrobjP11WStrobjCtrl_0x1e0378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqParentCtrl__8WcStrobjP11WStrobjCtrl_0x1e0378");
#endif

    ctx->pc = 0x1e0378u;

    // 0x1e0378: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1e0378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1e037c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E037Cu;
    {
        const bool branch_taken_0x1e037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E037Cu;
        // 0x1e0380: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e037c) {
            ctx->pc = 0x1E0398u;
            goto label_1e0398;
        }
    }
    ctx->pc = 0x1E0384u;
    // 0x1e0384: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1e0384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1e0388: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1e0388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1e038c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E038Cu;
        // 0x1e0390: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E038Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0394u;
    // 0x1e0394: 0x0  nop
    ctx->pc = 0x1e0394u;
    // NOP
label_1e0398:
    // 0x1e0398: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0398u;
        // 0x1e039c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E03A0u;
}

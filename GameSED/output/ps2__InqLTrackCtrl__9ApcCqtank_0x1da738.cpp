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

// Function: _InqLTrackCtrl__9ApcCqtank
// Address: 0x1da738 - 0x1da758
void ps2__InqLTrackCtrl__9ApcCqtank_0x1da738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqLTrackCtrl__9ApcCqtank_0x1da738");
#endif

    ctx->pc = 0x1da738u;

    // 0x1da738: 0x8c820c18  lw          $v0, 0xC18($a0)
    ctx->pc = 0x1da738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3096)));
    // 0x1da73c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA73Cu;
    {
        const bool branch_taken_0x1da73c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA73Cu;
        // 0x1da740: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da73c) {
            ctx->pc = 0x1DA750u;
            goto label_1da750;
        }
    }
    ctx->pc = 0x1DA744u;
    // 0x1da744: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1da744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1da748: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA748u;
        // 0x1da74c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA750u;
label_1da750:
    // 0x1da750: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA750u;
        // 0x1da754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA758u;
}

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

// Function: _InqGunBodyCtrl__9ApcCqtank
// Address: 0x1da6f8 - 0x1da718
void ps2__InqGunBodyCtrl__9ApcCqtank_0x1da6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqGunBodyCtrl__9ApcCqtank_0x1da6f8");
#endif

    ctx->pc = 0x1da6f8u;

    // 0x1da6f8: 0x8c820c14  lw          $v0, 0xC14($a0)
    ctx->pc = 0x1da6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3092)));
    // 0x1da6fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA6FCu;
    {
        const bool branch_taken_0x1da6fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6FCu;
        // 0x1da700: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6fc) {
            ctx->pc = 0x1DA710u;
            goto label_1da710;
        }
    }
    ctx->pc = 0x1DA704u;
    // 0x1da704: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1da704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1da708: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA708u;
        // 0x1da70c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA710u;
label_1da710:
    // 0x1da710: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA710u;
        // 0x1da714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA718u;
}

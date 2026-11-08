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

// Function: _InqGunBaseCtrl__9ApcCqtank
// Address: 0x1da6d8 - 0x1da6f8
void ps2__InqGunBaseCtrl__9ApcCqtank_0x1da6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqGunBaseCtrl__9ApcCqtank_0x1da6d8");
#endif

    ctx->pc = 0x1da6d8u;

    // 0x1da6d8: 0x8c820c10  lw          $v0, 0xC10($a0)
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3088)));
    // 0x1da6dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA6DCu;
    {
        const bool branch_taken_0x1da6dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6DCu;
        // 0x1da6e0: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6dc) {
            ctx->pc = 0x1DA6F0u;
            goto label_1da6f0;
        }
    }
    ctx->pc = 0x1DA6E4u;
    // 0x1da6e4: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1da6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1da6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6E8u;
        // 0x1da6ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6F0u;
label_1da6f0:
    // 0x1da6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6F0u;
        // 0x1da6f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6F8u;
}

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

// Function: WCdManFileClosePC__Fi
// Address: 0x1787a0 - 0x1787dc
void WCdManFileClosePC__Fi_0x1787a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileClosePC__Fi_0x1787a0");
#endif

    switch (ctx->pc) {
        case 0x1787b0u: goto label_1787b0;
        case 0x1787d0u: goto label_1787d0;
        default: break;
    }

    ctx->pc = 0x1787a0u;

    // 0x1787a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1787a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1787a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1787a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1787a8: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x1787A8u;
    SET_GPR_U32(ctx, 31, 0x1787B0u);
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x1787A8u, 0x1787B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787B0u;
label_1787b0:
    // 0x1787b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1787b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1787b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1787b8: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x1787b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
    // 0x1787bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1787BCu;
    {
        const bool branch_taken_0x1787bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1787C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787BCu;
        // 0x1787c0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787bc) {
            ctx->pc = 0x1787D0u;
            goto label_1787d0;
        }
    }
    ctx->pc = 0x1787C4u;
    // 0x1787c4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1787c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1787C8u;
    SET_GPR_U32(ctx, 31, 0x1787D0u);
    ctx->pc = 0x1787CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787C8u;
    // 0x1787cc: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1787C8u, 0x1787D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787D0u;
label_1787d0:
    // 0x1787d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1787d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1787d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1787D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1787D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787D4u;
        // 0x1787d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1787D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1787DCu;
}

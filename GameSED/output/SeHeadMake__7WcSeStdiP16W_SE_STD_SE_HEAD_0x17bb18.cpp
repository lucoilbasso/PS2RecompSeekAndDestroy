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

// Function: SeHeadMake__7WcSeStdiP16W_SE_STD_SE_HEAD
// Address: 0x17bb18 - 0x17bb50
void SeHeadMake__7WcSeStdiP16W_SE_STD_SE_HEAD_0x17bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeHeadMake__7WcSeStdiP16W_SE_STD_SE_HEAD_0x17bb18");
#endif

    switch (ctx->pc) {
        case 0x17bb28u: goto label_17bb28;
        default: break;
    }

    ctx->pc = 0x17bb18u;

    // 0x17bb18: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x17bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x17bb1c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17bb20: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x17bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17bb24: 0x24a50804  addiu       $a1, $a1, 0x804
    ctx->pc = 0x17bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2052));
label_17bb28:
    // 0x17bb28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17bb2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17bb30: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x17bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
    // 0x17bb34: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x17bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17bb38: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x17bb3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x17bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x17bb40: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BB40u;
    {
        const bool branch_taken_0x17bb40 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB40u;
        // 0x17bb44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb40) {
            ctx->pc = 0x17BB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bb28;
        }
    }
    ctx->pc = 0x17BB48u;
    // 0x17bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB50u;
}

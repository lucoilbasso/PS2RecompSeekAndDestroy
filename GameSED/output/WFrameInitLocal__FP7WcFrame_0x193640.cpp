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

// Function: WFrameInitLocal__FP7WcFrame
// Address: 0x193640 - 0x1936ac
void WFrameInitLocal__FP7WcFrame_0x193640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFrameInitLocal__FP7WcFrame_0x193640");
#endif

    switch (ctx->pc) {
        case 0x193660u: goto label_193660;
        case 0x193688u: goto label_193688;
        default: break;
    }

    ctx->pc = 0x193640u;

    // 0x193640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193644: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x193648: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x193648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x19364c: 0x2463d640  addiu       $v1, $v1, -0x29C0
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    // 0x193650: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x193650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    // 0x193654: 0x24860220  addiu       $a2, $a0, 0x220
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x193658: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x193658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19365c: 0x0  nop
    ctx->pc = 0x19365cu;
    // NOP
label_193660:
    // 0x193660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193664: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x193664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x193668: 0x0  nop
    ctx->pc = 0x193668u;
    // NOP
    // 0x19366c: 0x0  nop
    ctx->pc = 0x19366cu;
    // NOP
    // 0x193670: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x193674: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x193674u;
    {
        const bool branch_taken_0x193674 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x193678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193674u;
        // 0x193678: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193674) {
            ctx->pc = 0x193660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193660;
        }
    }
    ctx->pc = 0x19367Cu;
    // 0x19367c: 0x24840244  addiu       $a0, $a0, 0x244
    ctx->pc = 0x19367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 580));
    // 0x193680: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193684: 0x0  nop
    ctx->pc = 0x193684u;
    // NOP
label_193688:
    // 0x193688: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19368c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19368cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x193690: 0x0  nop
    ctx->pc = 0x193690u;
    // NOP
    // 0x193694: 0x0  nop
    ctx->pc = 0x193694u;
    // NOP
    // 0x193698: 0x0  nop
    ctx->pc = 0x193698u;
    // NOP
    // 0x19369c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19369Cu;
    {
        const bool branch_taken_0x19369c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1936A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19369Cu;
        // 0x1936a0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19369c) {
            ctx->pc = 0x193688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193688;
        }
    }
    ctx->pc = 0x1936A4u;
    // 0x1936a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1936A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1936A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1936ACu;
}

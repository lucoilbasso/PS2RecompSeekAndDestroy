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

// Function: ApRscKeyPushStatus__FP5WcPad
// Address: 0x1145d0 - 0x11465c
void ApRscKeyPushStatus__FP5WcPad_0x1145d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyPushStatus__FP5WcPad_0x1145d0");
#endif

    switch (ctx->pc) {
        case 0x1145f8u: goto label_1145f8;
        case 0x11462cu: goto label_11462c;
        default: break;
    }

    ctx->pc = 0x1145d0u;

    // 0x1145d0: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x1145d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x1145d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1145d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1145d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1145d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1145dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1145dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1145e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1145e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1145e4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1145E4u;
    {
        const bool branch_taken_0x1145e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E4u;
        // 0x1145e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e4) {
            ctx->pc = 0x11462Cu;
            goto label_11462c;
        }
    }
    ctx->pc = 0x1145ECu;
    // 0x1145ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1145ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1145f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1145f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1145f4: 0x24430730  addiu       $v1, $v0, 0x730
    ctx->pc = 0x1145f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
label_1145f8:
    // 0x1145f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1145f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1145fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1145fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x114600: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x114600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x114604: 0x0  nop
    ctx->pc = 0x114604u;
    // NOP
    // 0x114608: 0x0  nop
    ctx->pc = 0x114608u;
    // NOP
    // 0x11460c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11460Cu;
    {
        const bool branch_taken_0x11460c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x114610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11460Cu;
        // 0x114610: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11460c) {
            ctx->pc = 0x1145F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1145f8;
        }
    }
    ctx->pc = 0x114614u;
    // 0x114614: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x114614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x114618: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11461c: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x11461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x114620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114624: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114624u;
    SET_GPR_U32(ctx, 31, 0x11462Cu);
    ctx->pc = 0x114628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114624u;
    // 0x114628: 0xaf829124  sw          $v0, -0x6EDC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114624u, 0x11462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11462Cu;
label_11462c:
    // 0x11462c: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x11462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x114630: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x114630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x114634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114638: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x114638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11463c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11463cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114644: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x114644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x114648: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x114648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11464c: 0xac230730  sw          $v1, 0x730($at)
    ctx->pc = 0x11464cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1840), GPR_U32(ctx, 3));
    // 0x114650: 0xaf849124  sw          $a0, -0x6EDC($gp)
    ctx->pc = 0x114650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 4));
    // 0x114654: 0x3e00008  jr          $ra
    ctx->pc = 0x114654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114654u;
        // 0x114658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11465Cu;
}

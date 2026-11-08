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

// Function: Cmd_PARAM_SET_Entry__FP15BsSCDEntControl
// Address: 0x105f88 - 0x106050
void Cmd_PARAM_SET_Entry__FP15BsSCDEntControl_0x105f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARAM_SET_Entry__FP15BsSCDEntControl_0x105f88");
#endif

    switch (ctx->pc) {
        case 0x105fe0u: goto label_105fe0;
        case 0x105fe8u: goto label_105fe8;
        case 0x10601cu: goto label_10601c;
        default: break;
    }

    ctx->pc = 0x105f88u;

    // 0x105f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105f8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x105f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105f9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105fa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x105fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x105fa4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x105fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x105fa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x105fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x105fac: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x105facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x105fb0: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FB0u;
    {
        const bool branch_taken_0x105fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x105fb0) {
            ctx->pc = 0x105FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105FB0u;
            // 0x105fb4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105FC4u;
            goto label_105fc4;
        }
    }
    ctx->pc = 0x105FB8u;
    // 0x105fb8: 0xaf808898  sw          $zero, -0x7768($gp)
    ctx->pc = 0x105fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), GPR_U32(ctx, 0));
    // 0x105fbc: 0xaf80889c  sw          $zero, -0x7764($gp)
    ctx->pc = 0x105fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 0));
    // 0x105fc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_105fc4:
    // 0x105fc4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x105FC4u;
    {
        const bool branch_taken_0x105fc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FC4u;
        // 0x105fc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fc4) {
            ctx->pc = 0x106030u;
            goto label_106030;
        }
    }
    ctx->pc = 0x105FCCu;
    // 0x105fcc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x105fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x105fd0: 0x27928898  addiu       $s2, $gp, -0x7768
    ctx->pc = 0x105fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936728));
    // 0x105fd4: 0x2454ec00  addiu       $s4, $v0, -0x1400
    ctx->pc = 0x105fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962176));
    // 0x105fd8: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x105fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x105fdc: 0x0  nop
    ctx->pc = 0x105fdcu;
    // NOP
label_105fe0:
    // 0x105fe0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x105FE0u;
    SET_GPR_U32(ctx, 31, 0x105FE8u);
    ctx->pc = 0x105FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FE0u;
    // 0x105fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x105FE0u, 0x105FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FE8u;
label_105fe8:
    // 0x105fe8: 0x26651fe0  addiu       $a1, $s3, 0x1FE0
    ctx->pc = 0x105fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8160));
    // 0x105fec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x105fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105ff0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x105ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x105ff4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x105ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x105ff8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x105ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x105ffc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x105ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x106000: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x106000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x106004: 0x8f828898  lw          $v0, -0x7768($gp)
    ctx->pc = 0x106004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x106008: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x106008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x10600c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10600Cu;
    {
        const bool branch_taken_0x10600c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10600Cu;
        // 0x106010: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10600c) {
            ctx->pc = 0x10601Cu;
            goto label_10601c;
        }
    }
    ctx->pc = 0x106014u;
    // 0x106014: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106014u;
    SET_GPR_U32(ctx, 31, 0x10601Cu);
    ctx->pc = 0x106018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106014u;
    // 0x106018: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106014u, 0x10601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10601Cu;
label_10601c:
    // 0x10601c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x106020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x106024: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x106024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106028: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x106028u;
    {
        const bool branch_taken_0x106028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106028) {
            ctx->pc = 0x105FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105fe0;
        }
    }
    ctx->pc = 0x106030u;
label_106030:
    // 0x106030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106038: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10603c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10603cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106040: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x106040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106044: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x106044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106048: 0x3e00008  jr          $ra
    ctx->pc = 0x106048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106048u;
        // 0x10604c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106050u;
}

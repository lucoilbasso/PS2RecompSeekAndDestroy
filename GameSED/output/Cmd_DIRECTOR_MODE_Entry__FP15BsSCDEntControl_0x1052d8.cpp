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

// Function: Cmd_DIRECTOR_MODE_Entry__FP15BsSCDEntControl
// Address: 0x1052d8 - 0x1053cc
void Cmd_DIRECTOR_MODE_Entry__FP15BsSCDEntControl_0x1052d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_MODE_Entry__FP15BsSCDEntControl_0x1052d8");
#endif

    switch (ctx->pc) {
        case 0x105308u: goto label_105308;
        case 0x105314u: goto label_105314;
        case 0x1053a0u: goto label_1053a0;
        default: break;
    }

    ctx->pc = 0x1052d8u;

    // 0x1052d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1052d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1052dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1052dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1052e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1052e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1052e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1052e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1052e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1052ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1052ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1052f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1052f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1052f4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1052f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1052f8: 0x16420027  bne         $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1052F8u;
    {
        const bool branch_taken_0x1052f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1052f8) {
            ctx->pc = 0x105398u;
            goto label_105398;
        }
    }
    ctx->pc = 0x105300u;
    // 0x105300: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105300u;
    SET_GPR_U32(ctx, 31, 0x105308u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105300u, 0x105308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105308u;
label_105308:
    // 0x105308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10530c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10530Cu;
    SET_GPR_U32(ctx, 31, 0x105314u);
    ctx->pc = 0x105310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10530Cu;
    // 0x105310: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10530Cu, 0x105314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105314u;
label_105314:
    // 0x105314: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105318: 0x1212000d  beq         $s0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x105318u;
    {
        const bool branch_taken_0x105318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x10531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105318u;
        // 0x10531c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105318) {
            ctx->pc = 0x105350u;
            goto label_105350;
        }
    }
    ctx->pc = 0x105320u;
    // 0x105320: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x105320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x105324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105324u;
    {
        const bool branch_taken_0x105324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105324u;
        // 0x105328: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105324) {
            ctx->pc = 0x105340u;
            goto label_105340;
        }
    }
    ctx->pc = 0x10532Cu;
    // 0x10532c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105330: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105330u;
    {
        const bool branch_taken_0x105330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x105330) {
            ctx->pc = 0x105334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105330u;
            // 0x105334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105338u;
    // 0x105338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x105338u;
    {
        const bool branch_taken_0x105338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105338) {
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105340u;
label_105340:
    // 0x105340: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105340u;
    {
        const bool branch_taken_0x105340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x105340) {
            ctx->pc = 0x105344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105340u;
            // 0x105344: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105348u;
    // 0x105348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105348u;
    {
        const bool branch_taken_0x105348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105348) {
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105350u;
label_105350:
    // 0x105350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x105350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105354:
    // 0x105354: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x105354u;
    {
        const bool branch_taken_0x105354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x105358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105354u;
        // 0x105358: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105354) {
            ctx->pc = 0x1053B4u;
            goto label_1053b4;
        }
    }
    ctx->pc = 0x10535Cu;
    // 0x10535c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10535Cu;
    {
        const bool branch_taken_0x10535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10535Cu;
        // 0x105360: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10535c) {
            ctx->pc = 0x105380u;
            goto label_105380;
        }
    }
    ctx->pc = 0x105364u;
    // 0x105364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10536c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10536cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105370: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105374: 0x8066682  j           func_199A08
    ctx->pc = 0x105374u;
    ctx->pc = 0x105378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105374u;
    // 0x105378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A08u;
    SequenceCtrlPush__10WcSequencei_0x199a08(rdram, ctx, runtime); return;
    ctx->pc = 0x10537Cu;
    // 0x10537c: 0x0  nop
    ctx->pc = 0x10537cu;
    // NOP
label_105380:
    // 0x105380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10538c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105390: 0x80666aa  j           func_199AA8
    ctx->pc = 0x105390u;
    ctx->pc = 0x105394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105390u;
    // 0x105394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199AA8u;
    SequenceCtrlPop__10WcSequence_0x199aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x105398u;
label_105398:
    // 0x105398: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x105398u;
    SET_GPR_U32(ctx, 31, 0x1053A0u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x105398u, 0x1053A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1053A0u;
label_1053a0:
    // 0x1053a0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1053a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1053a4: 0x8c640154  lw          $a0, 0x154($v1)
    ctx->pc = 0x1053a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1053a8: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x1053a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1053ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1053acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1053b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1053b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1053b4:
    // 0x1053b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1053b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1053b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1053b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1053bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1053bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1053c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1053c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1053C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1053C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053C4u;
        // 0x1053c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1053C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1053CCu;
}

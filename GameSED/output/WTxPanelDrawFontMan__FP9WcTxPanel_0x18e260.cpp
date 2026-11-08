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

// Function: WTxPanelDrawFontMan__FP9WcTxPanel
// Address: 0x18e260 - 0x18e374
void WTxPanelDrawFontMan__FP9WcTxPanel_0x18e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelDrawFontMan__FP9WcTxPanel_0x18e260");
#endif

    switch (ctx->pc) {
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e318u: goto label_18e318;
        case 0x18e344u: goto label_18e344;
        default: break;
    }

    ctx->pc = 0x18e260u;

    // 0x18e260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18e264: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18e268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e270: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x18e274: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18e274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18e27c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18e280: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18e284: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18e288: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18e28c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x18e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x18e290: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x18e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x18e294: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x18e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x18e298: 0x8e150238  lw          $s5, 0x238($s0)
    ctx->pc = 0x18e298u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18e29c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x18e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18e2a0: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18e2a4: 0x8e060250  lw          $a2, 0x250($s0)
    ctx->pc = 0x18e2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x18e2a8: 0x8e140220  lw          $s4, 0x220($s0)
    ctx->pc = 0x18e2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x18e2ac: 0x8e12021c  lw          $s2, 0x21C($s0)
    ctx->pc = 0x18e2acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x18e2b0: 0x8e110214  lw          $s1, 0x214($s0)
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18e2b4: 0xc05f24c  jal         func_17C930
    ctx->pc = 0x18E2B4u;
    SET_GPR_U32(ctx, 31, 0x18E2BCu);
    ctx->pc = 0x18E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2B4u;
    // 0x18e2b8: 0x8e130224  lw          $s3, 0x224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C930u, 0x18E2B4u, 0x18E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2BCu;
label_18e2bc:
    // 0x18e2bc: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x18e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18e2c0: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18E2C0u;
    {
        const bool branch_taken_0x18e2c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2C0u;
        // 0x18e2c4: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2c0) {
            ctx->pc = 0x18E33Cu;
            goto label_18e33c;
        }
    }
    ctx->pc = 0x18E2C8u;
    // 0x18e2c8: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x18e2c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18e2cc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x18e2ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e2d0:
    // 0x18e2d0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x18e2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18e2d4: 0x105e0010  beq         $v0, $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x18E2D4u;
    {
        const bool branch_taken_0x18e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x18E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2D4u;
        // 0x18e2d8: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2d4) {
            ctx->pc = 0x18E318u;
            goto label_18e318;
        }
    }
    ctx->pc = 0x18E2DCu;
    // 0x18e2dc: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x18e2dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18e2e0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18e2e4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18e2e8: 0xc05f2bc  jal         func_17CAF0
    ctx->pc = 0x18E2E8u;
    SET_GPR_U32(ctx, 31, 0x18E2F0u);
    ctx->pc = 0x18E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2E8u;
    // 0x18e2ec: 0x8ea50020  lw          $a1, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CAF0u, 0x18E2E8u, 0x18E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2F0u;
label_18e2f0:
    // 0x18e2f0: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x18e2f4: 0x14770008  bne         $v1, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E2F4u;
    {
        const bool branch_taken_0x18e2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x18E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F4u;
        // 0x18e2f8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2f4) {
            ctx->pc = 0x18E318u;
            goto label_18e318;
        }
    }
    ctx->pc = 0x18E2FCu;
    // 0x18e2fc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18e300: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E300u;
    {
        const bool branch_taken_0x18e300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E300u;
        // 0x18e304: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e300) {
            ctx->pc = 0x18E318u;
            goto label_18e318;
        }
    }
    ctx->pc = 0x18E308u;
    // 0x18e308: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x18e308u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e30c: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x18e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18e310: 0xc05f240  jal         func_17C900
    ctx->pc = 0x18E310u;
    SET_GPR_U32(ctx, 31, 0x18E318u);
    ctx->pc = 0x18E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E310u;
    // 0x18e314: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C900u, 0x18E310u, 0x18E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E318u;
label_18e318:
    // 0x18e318: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x18e318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18e31c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18e31cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x18e320: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x18e324: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18e324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x18e328: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x18e328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e32c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18e32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x18e330: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x18E330u;
    {
        const bool branch_taken_0x18e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E330u;
        // 0x18e334: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e330) {
            ctx->pc = 0x18E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e2d0;
        }
    }
    ctx->pc = 0x18E338u;
    // 0x18e338: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_18e33c:
    // 0x18e33c: 0xc05f122  jal         func_17C488
    ctx->pc = 0x18E33Cu;
    SET_GPR_U32(ctx, 31, 0x18E344u);
    ctx->pc = 0x18E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E33Cu;
    // 0x18e340: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C488u, 0x18E33Cu, 0x18E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E344u;
label_18e344:
    // 0x18e344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18e348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18e34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18e350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18e354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18e354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e358: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18e358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18e35c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18e35cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e360: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18e360u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18e364: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x18e364u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e368: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x18e368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18e36c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E36Cu;
        // 0x18e370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E374u;
}

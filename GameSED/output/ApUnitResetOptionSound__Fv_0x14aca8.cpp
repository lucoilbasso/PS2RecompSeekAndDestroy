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

// Function: ApUnitResetOptionSound__Fv
// Address: 0x14aca8 - 0x14adc0
void ApUnitResetOptionSound__Fv_0x14aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitResetOptionSound__Fv_0x14aca8");
#endif

    switch (ctx->pc) {
        case 0x14ace8u: goto label_14ace8;
        case 0x14ad28u: goto label_14ad28;
        case 0x14ad40u: goto label_14ad40;
        case 0x14ad68u: goto label_14ad68;
        default: break;
    }

    ctx->pc = 0x14aca8u;

    // 0x14aca8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14acac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x14acb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14acb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14acb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14acbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14acc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14acc4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14acc8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14accc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x14acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x14acd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14acd4: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x14acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x14acd8: 0x8c73007c  lw          $s3, 0x7C($v1)
    ctx->pc = 0x14acd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x14acdc: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x14ACDCu;
    {
        const bool branch_taken_0x14acdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACDCu;
        // 0x14ace0: 0x24170118  addiu       $s7, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acdc) {
            ctx->pc = 0x14AD94u;
            goto label_14ad94;
        }
    }
    ctx->pc = 0x14ACE4u;
    // 0x14ace4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14ace8:
    // 0x14ace8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14acec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14acf0: 0x14570026  bne         $v0, $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x14ACF0u;
    {
        const bool branch_taken_0x14acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x14ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACF0u;
        // 0x14acf4: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acf0) {
            ctx->pc = 0x14AD8Cu;
            goto label_14ad8c;
        }
    }
    ctx->pc = 0x14ACF8u;
    // 0x14acf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14acf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acfc: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14ad00: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14AD00u;
    {
        const bool branch_taken_0x14ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ad00) {
            ctx->pc = 0x14AD8Cu;
            goto label_14ad8c;
        }
    }
    ctx->pc = 0x14AD08u;
    // 0x14ad08: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ad08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ad0c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14AD0Cu;
    {
        const bool branch_taken_0x14ad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD0Cu;
        // 0x14ad10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad0c) {
            ctx->pc = 0x14AD8Cu;
            goto label_14ad8c;
        }
    }
    ctx->pc = 0x14AD14u;
    // 0x14ad14: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x14ad14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad18: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x14ad18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x14ad1c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x14ad1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ad20: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14ad24: 0x0  nop
    ctx->pc = 0x14ad24u;
    // NOP
label_14ad28:
    // 0x14ad28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AD28u;
    {
        const bool branch_taken_0x14ad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD28u;
        // 0x14ad2c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad28) {
            ctx->pc = 0x14AD48u;
            goto label_14ad48;
        }
    }
    ctx->pc = 0x14AD30u;
    // 0x14ad30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad34: 0x26856bd8  addiu       $a1, $s4, 0x6BD8
    ctx->pc = 0x14ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27608));
    // 0x14ad38: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AD38u;
    SET_GPR_U32(ctx, 31, 0x14AD40u);
    ctx->pc = 0x14AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD38u;
    // 0x14ad3c: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AD38u, 0x14AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD40u;
label_14ad40:
    // 0x14ad40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14AD40u;
    {
        const bool branch_taken_0x14ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD40u;
        // 0x14ad44: 0x8ea201c0  lw          $v0, 0x1C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad40) {
            ctx->pc = 0x14AD6Cu;
            goto label_14ad6c;
        }
    }
    ctx->pc = 0x14AD48u;
label_14ad48:
    // 0x14ad48: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ad48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ad4c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ad4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ad50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AD50u;
    {
        const bool branch_taken_0x14ad50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad50) {
            ctx->pc = 0x14AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD50u;
            // 0x14ad54: 0x8ea201c0  lw          $v0, 0x1C0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AD6Cu;
            goto label_14ad6c;
        }
    }
    ctx->pc = 0x14AD58u;
    // 0x14ad58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad5c: 0x26856bd8  addiu       $a1, $s4, 0x6BD8
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27608));
    // 0x14ad60: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AD60u;
    SET_GPR_U32(ctx, 31, 0x14AD68u);
    ctx->pc = 0x14AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD60u;
    // 0x14ad64: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AD60u, 0x14AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD68u;
label_14ad68:
    // 0x14ad68: 0x8ea201c0  lw          $v0, 0x1C0($s5)
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
label_14ad6c:
    // 0x14ad6c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x14ad70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ad70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ad74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ad78: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x14ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x14ad7c: 0x920301ab  lbu         $v1, 0x1AB($s0)
    ctx->pc = 0x14ad7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ad80: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x14ad80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ad84: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14AD84u;
    {
        const bool branch_taken_0x14ad84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad84) {
            ctx->pc = 0x14AD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD84u;
            // 0x14ad88: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ad28;
        }
    }
    ctx->pc = 0x14AD8Cu;
label_14ad8c:
    // 0x14ad8c: 0x5660ffd6  bnel        $s3, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x14AD8Cu;
    {
        const bool branch_taken_0x14ad8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad8c) {
            ctx->pc = 0x14AD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD8Cu;
            // 0x14ad90: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ace8;
        }
    }
    ctx->pc = 0x14AD94u;
label_14ad94:
    // 0x14ad94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ad94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ad98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ad9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ad9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ada0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14ada0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ada4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14ada4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ada8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14ada8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14adac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14adacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14adb0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x14adb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14adb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14adb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14adb8: 0x3e00008  jr          $ra
    ctx->pc = 0x14ADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADB8u;
        // 0x14adbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ADC0u;
}

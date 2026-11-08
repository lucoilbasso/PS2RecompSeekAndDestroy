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

// Function: sceDevConsMove
// Address: 0x1adbd0 - 0x1add38
void sceDevConsMove_0x1adbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsMove_0x1adbd0");
#endif

    switch (ctx->pc) {
        case 0x1adc40u: goto label_1adc40;
        case 0x1adc58u: goto label_1adc58;
        case 0x1adc70u: goto label_1adc70;
        case 0x1adc88u: goto label_1adc88;
        case 0x1adcd0u: goto label_1adcd0;
        case 0x1adce8u: goto label_1adce8;
        case 0x1add00u: goto label_1add00;
        default: break;
    }

    ctx->pc = 0x1adbd0u;

    // 0x1adbd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1adbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1adbd4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1adbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1adbd8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1adbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1adbdc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1adbdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbe0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1adbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1adbe4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1adbe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbe8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1adbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1adbec: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1adbecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbf0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1adbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1adbf4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1adbf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbf8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1adbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1adbfc: 0x3d7102a  slt         $v0, $fp, $s7
    ctx->pc = 0x1adbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1adc00: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1adc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1adc04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1adc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1adc08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1adc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1adc0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1adc10: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1adc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1adc14: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1adc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1adc18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADC18u;
    {
        const bool branch_taken_0x1adc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC18u;
        // 0x1adc1c: 0xafaa0008  sw          $t2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc18) {
            ctx->pc = 0x1ADC34u;
            goto label_1adc34;
        }
    }
    ctx->pc = 0x1ADC20u;
    // 0x1adc20: 0x17d70026  bne         $fp, $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1ADC20u;
    {
        const bool branch_taken_0x1adc20 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 23));
        ctx->pc = 0x1ADC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC20u;
        // 0x1adc24: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc20) {
            ctx->pc = 0x1ADCBCu;
            goto label_1adcbc;
        }
    }
    ctx->pc = 0x1ADC28u;
    // 0x1adc28: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1adc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1adc2c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1ADC2Cu;
    {
        const bool branch_taken_0x1adc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC2Cu;
        // 0x1adc30: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc2c) {
            ctx->pc = 0x1ADCBCu;
            goto label_1adcbc;
        }
    }
    ctx->pc = 0x1ADC34u;
label_1adc34:
    // 0x1adc34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1adc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adc38: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1ADC38u;
    {
        const bool branch_taken_0x1adc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC38u;
        // 0x1adc3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc38) {
            ctx->pc = 0x1ADD08u;
            goto label_1add08;
        }
    }
    ctx->pc = 0x1ADC40u;
label_1adc40:
    // 0x1adc40: 0x12c00016  beqz        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADC40u;
    {
        const bool branch_taken_0x1adc40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC40u;
        // 0x1adc44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc40) {
            ctx->pc = 0x1ADC9Cu;
            goto label_1adc9c;
        }
    }
    ctx->pc = 0x1ADC48u;
    // 0x1adc48: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adc4c: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x1adc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1adc50: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1adc54: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1adc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1adc58:
    // 0x1adc58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1adc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1adc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc64: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1adc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adc68: 0xc06b90c  jal         func_1AE430
    ctx->pc = 0x1ADC68u;
    SET_GPR_U32(ctx, 31, 0x1ADC70u);
    ctx->pc = 0x1ADC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC68u;
    // 0x1adc6c: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE430u, 0x1ADC68u, 0x1ADC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC70u;
label_1adc70:
    // 0x1adc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1adc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1adc74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1adc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc80: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1ADC80u;
    SET_GPR_U32(ctx, 31, 0x1ADC88u);
    ctx->pc = 0x1ADC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC80u;
    // 0x1adc84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1ADC80u, 0x1ADC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC88u;
label_1adc88:
    // 0x1adc88: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x1adc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1adc8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1ADC8Cu;
    {
        const bool branch_taken_0x1adc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC8Cu;
        // 0x1adc90: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc8c) {
            ctx->pc = 0x1ADC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc58;
        }
    }
    ctx->pc = 0x1ADC94u;
    // 0x1adc94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADC94u;
    {
        const bool branch_taken_0x1adc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC94u;
        // 0x1adc98: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc94) {
            ctx->pc = 0x1ADCA4u;
            goto label_1adca4;
        }
    }
    ctx->pc = 0x1ADC9Cu;
label_1adc9c:
    // 0x1adc9c: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adca0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1adca4:
    // 0x1adca4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1adca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adca8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1adca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1adcac: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1ADCACu;
    {
        const bool branch_taken_0x1adcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCACu;
        // 0x1adcb0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcac) {
            ctx->pc = 0x1ADC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc40;
        }
    }
    ctx->pc = 0x1ADCB4u;
    // 0x1adcb4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADCB4u;
    {
        const bool branch_taken_0x1adcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCB4u;
        // 0x1adcb8: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcb4) {
            ctx->pc = 0x1ADD10u;
            goto label_1add10;
        }
    }
    ctx->pc = 0x1ADCBCu;
label_1adcbc:
    // 0x1adcbc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1adcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1adcc0: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1adcc4: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1adcc8: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1adccc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1adcd0:
    // 0x1adcd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1adcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adcd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1adcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcdc: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adce0: 0xc06b90c  jal         func_1AE430
    ctx->pc = 0x1ADCE0u;
    SET_GPR_U32(ctx, 31, 0x1ADCE8u);
    ctx->pc = 0x1ADCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCE0u;
    // 0x1adce4: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE430u, 0x1ADCE0u, 0x1ADCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCE8u;
label_1adce8:
    // 0x1adce8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1adcec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1adcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcf8: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1ADCF8u;
    SET_GPR_U32(ctx, 31, 0x1ADD00u);
    ctx->pc = 0x1ADCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCF8u;
    // 0x1adcfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1ADCF8u, 0x1ADD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD00u;
label_1add00:
    // 0x1add00: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1ADD00u;
    {
        const bool branch_taken_0x1add00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD00u;
        // 0x1add04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add00) {
            ctx->pc = 0x1ADCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adcd0;
        }
    }
    ctx->pc = 0x1ADD08u;
label_1add08:
    // 0x1add08: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1add08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1add0c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1add0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1add10:
    // 0x1add10: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1add10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1add14: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1add14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1add18: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1add18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1add1c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1add1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1add20: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1add20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1add24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1add28: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1add28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1add2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1add2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD30u;
        // 0x1add34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADD38u;
}

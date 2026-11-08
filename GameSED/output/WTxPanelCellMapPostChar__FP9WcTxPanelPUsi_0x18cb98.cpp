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

// Function: WTxPanelCellMapPostChar__FP9WcTxPanelPUsi
// Address: 0x18cb98 - 0x18cd04
void WTxPanelCellMapPostChar__FP9WcTxPanelPUsi_0x18cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapPostChar__FP9WcTxPanelPUsi_0x18cb98");
#endif

    switch (ctx->pc) {
        case 0x18cb98u: goto label_18cb98;
        case 0x18cb9cu: goto label_18cb9c;
        case 0x18cba0u: goto label_18cba0;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cba8u: goto label_18cba8;
        case 0x18cbacu: goto label_18cbac;
        case 0x18cbb0u: goto label_18cbb0;
        case 0x18cbb4u: goto label_18cbb4;
        case 0x18cbb8u: goto label_18cbb8;
        case 0x18cbbcu: goto label_18cbbc;
        case 0x18cbc0u: goto label_18cbc0;
        case 0x18cbc4u: goto label_18cbc4;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbccu: goto label_18cbcc;
        case 0x18cbd0u: goto label_18cbd0;
        case 0x18cbd4u: goto label_18cbd4;
        case 0x18cbd8u: goto label_18cbd8;
        case 0x18cbdcu: goto label_18cbdc;
        case 0x18cbe0u: goto label_18cbe0;
        case 0x18cbe4u: goto label_18cbe4;
        case 0x18cbe8u: goto label_18cbe8;
        case 0x18cbecu: goto label_18cbec;
        case 0x18cbf0u: goto label_18cbf0;
        case 0x18cbf4u: goto label_18cbf4;
        case 0x18cbf8u: goto label_18cbf8;
        case 0x18cbfcu: goto label_18cbfc;
        case 0x18cc00u: goto label_18cc00;
        case 0x18cc04u: goto label_18cc04;
        case 0x18cc08u: goto label_18cc08;
        case 0x18cc0cu: goto label_18cc0c;
        case 0x18cc10u: goto label_18cc10;
        case 0x18cc14u: goto label_18cc14;
        case 0x18cc18u: goto label_18cc18;
        case 0x18cc1cu: goto label_18cc1c;
        case 0x18cc20u: goto label_18cc20;
        case 0x18cc24u: goto label_18cc24;
        case 0x18cc28u: goto label_18cc28;
        case 0x18cc2cu: goto label_18cc2c;
        case 0x18cc30u: goto label_18cc30;
        case 0x18cc34u: goto label_18cc34;
        case 0x18cc38u: goto label_18cc38;
        case 0x18cc3cu: goto label_18cc3c;
        case 0x18cc40u: goto label_18cc40;
        case 0x18cc44u: goto label_18cc44;
        case 0x18cc48u: goto label_18cc48;
        case 0x18cc4cu: goto label_18cc4c;
        case 0x18cc50u: goto label_18cc50;
        case 0x18cc54u: goto label_18cc54;
        case 0x18cc58u: goto label_18cc58;
        case 0x18cc5cu: goto label_18cc5c;
        case 0x18cc60u: goto label_18cc60;
        case 0x18cc64u: goto label_18cc64;
        case 0x18cc68u: goto label_18cc68;
        case 0x18cc6cu: goto label_18cc6c;
        case 0x18cc70u: goto label_18cc70;
        case 0x18cc74u: goto label_18cc74;
        case 0x18cc78u: goto label_18cc78;
        case 0x18cc7cu: goto label_18cc7c;
        case 0x18cc80u: goto label_18cc80;
        case 0x18cc84u: goto label_18cc84;
        case 0x18cc88u: goto label_18cc88;
        case 0x18cc8cu: goto label_18cc8c;
        case 0x18cc90u: goto label_18cc90;
        case 0x18cc94u: goto label_18cc94;
        case 0x18cc98u: goto label_18cc98;
        case 0x18cc9cu: goto label_18cc9c;
        case 0x18cca0u: goto label_18cca0;
        case 0x18cca4u: goto label_18cca4;
        case 0x18cca8u: goto label_18cca8;
        case 0x18ccacu: goto label_18ccac;
        case 0x18ccb0u: goto label_18ccb0;
        case 0x18ccb4u: goto label_18ccb4;
        case 0x18ccb8u: goto label_18ccb8;
        case 0x18ccbcu: goto label_18ccbc;
        case 0x18ccc0u: goto label_18ccc0;
        case 0x18ccc4u: goto label_18ccc4;
        case 0x18ccc8u: goto label_18ccc8;
        case 0x18ccccu: goto label_18cccc;
        case 0x18ccd0u: goto label_18ccd0;
        case 0x18ccd4u: goto label_18ccd4;
        case 0x18ccd8u: goto label_18ccd8;
        case 0x18ccdcu: goto label_18ccdc;
        case 0x18cce0u: goto label_18cce0;
        case 0x18cce4u: goto label_18cce4;
        case 0x18cce8u: goto label_18cce8;
        case 0x18ccecu: goto label_18ccec;
        case 0x18ccf0u: goto label_18ccf0;
        case 0x18ccf4u: goto label_18ccf4;
        case 0x18ccf8u: goto label_18ccf8;
        case 0x18ccfcu: goto label_18ccfc;
        case 0x18cd00u: goto label_18cd00;
        default: break;
    }

    ctx->pc = 0x18cb98u;

label_18cb98:
    // 0x18cb98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18cb9c:
    // 0x18cb9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18cba0:
    // 0x18cba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cba4:
    // 0x18cba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18cba8:
    // 0x18cba8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18cba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18cbac:
    // 0x18cbac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18cbb0:
    // 0x18cbb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18cbb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18cbb4:
    // 0x18cbb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_18cbb8:
    // 0x18cbb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_18cbbc:
    // 0x18cbbc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_18cbc0:
    // 0x18cbc0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_18cbc4:
    // 0x18cbc4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x18cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_18cbc8:
    // 0x18cbc8: 0x9202023e  lbu         $v0, 0x23E($s0)
    ctx->pc = 0x18cbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 574)));
label_18cbcc:
    // 0x18cbcc: 0x96030240  lhu         $v1, 0x240($s0)
    ctx->pc = 0x18cbccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 576)));
label_18cbd0:
    // 0x18cbd0: 0x9204023f  lbu         $a0, 0x23F($s0)
    ctx->pc = 0x18cbd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_18cbd4:
    // 0x18cbd4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_18cbd8:
    if (ctx->pc == 0x18CBD8u) {
        ctx->pc = 0x18CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBD4u;
        // 0x18cbd8: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBDCu;
        goto label_18cbdc;
    }
    ctx->pc = 0x18CBD4u;
    {
        const bool branch_taken_0x18cbd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBD4u;
        // 0x18cbd8: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cbd4) {
            ctx->pc = 0x18CC50u;
            goto label_18cc50;
        }
    }
    ctx->pc = 0x18CBDCu;
label_18cbdc:
    // 0x18cbdc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_18cbe0:
    // 0x18cbe0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18cbe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cbe4:
    // 0x18cbe4: 0x2444edb0  addiu       $a0, $v0, -0x1250
    ctx->pc = 0x18cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
label_18cbe8:
    // 0x18cbe8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18cbe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_18cbec:
    // 0x18cbec: 0x0  nop
    ctx->pc = 0x18cbecu;
    // NOP
label_18cbf0:
    // 0x18cbf0: 0x50520025  beql        $v0, $s2, . + 4 + (0x25 << 2)
label_18cbf4:
    if (ctx->pc == 0x18CBF4u) {
        ctx->pc = 0x18CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBF0u;
        // 0x18cbf4: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBF8u;
        goto label_18cbf8;
    }
    ctx->pc = 0x18CBF0u;
    {
        const bool branch_taken_0x18cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x18cbf0) {
            ctx->pc = 0x18CBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CBF0u;
            // 0x18cbf4: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CC88u;
            goto label_18cc88;
        }
    }
    ctx->pc = 0x18CBF8u;
label_18cbf8:
    // 0x18cbf8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_18cbfc:
    // 0x18cbfc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18cbfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_18cc00:
    // 0x18cc00: 0x0  nop
    ctx->pc = 0x18cc00u;
    // NOP
label_18cc04:
    // 0x18cc04: 0x0  nop
    ctx->pc = 0x18cc04u;
    // NOP
label_18cc08:
    // 0x18cc08: 0x0  nop
    ctx->pc = 0x18cc08u;
    // NOP
label_18cc0c:
    // 0x18cc0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_18cc10:
    if (ctx->pc == 0x18CC10u) {
        ctx->pc = 0x18CC14u;
        goto label_18cc14;
    }
    ctx->pc = 0x18CC0Cu;
    {
        const bool branch_taken_0x18cc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cc0c) {
            ctx->pc = 0x18CBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cbf0;
        }
    }
    ctx->pc = 0x18CC14u;
label_18cc14:
    // 0x18cc14: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_18cc18:
    // 0x18cc18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18cc1c:
    // 0x18cc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cc20:
    // 0x18cc20: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x18cc20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_18cc24:
    // 0x18cc24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_18cc28:
    // 0x18cc28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18cc2c:
    // 0x18cc2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18cc30:
    if (ctx->pc == 0x18CC30u) {
        ctx->pc = 0x18CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC2Cu;
        // 0x18cc30: 0xae04024c  sw          $a0, 0x24C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC34u;
        goto label_18cc34;
    }
    ctx->pc = 0x18CC2Cu;
    {
        const bool branch_taken_0x18cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC2Cu;
        // 0x18cc30: 0xae04024c  sw          $a0, 0x24C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc2c) {
            ctx->pc = 0x18CC50u;
            goto label_18cc50;
        }
    }
    ctx->pc = 0x18CC34u;
label_18cc34:
    // 0x18cc34: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_18cc38:
    // 0x18cc38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cc3c:
    // 0x18cc3c: 0xc068584  jal         func_1A1610
label_18cc40:
    if (ctx->pc == 0x18CC40u) {
        ctx->pc = 0x18CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC3Cu;
        // 0x18cc40: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC44u;
        goto label_18cc44;
    }
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC3Cu;
    // 0x18cc40: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x18CC3Cu, 0x18CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC44u;
label_18cc44:
    // 0x18cc44: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_18cc48:
    // 0x18cc48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18cc4c:
    // 0x18cc4c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x18cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_18cc50:
    // 0x18cc50: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x18cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_18cc54:
    // 0x18cc54: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x18cc54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18cc58:
    // 0x18cc58: 0x8e060238  lw          $a2, 0x238($s0)
    ctx->pc = 0x18cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18cc5c:
    // 0x18cc5c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x18cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_18cc60:
    // 0x18cc60: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x18cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_18cc64:
    // 0x18cc64: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x18cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_18cc68:
    // 0x18cc68: 0x8e03021c  lw          $v1, 0x21C($s0)
    ctx->pc = 0x18cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_18cc6c:
    // 0x18cc6c: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_18cc70:
    // 0x18cc70: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18cc74:
    // 0x18cc74: 0x16a40006  bne         $s5, $a0, . + 4 + (0x6 << 2)
label_18cc78:
    if (ctx->pc == 0x18CC78u) {
        ctx->pc = 0x18CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC74u;
        // 0x18cc78: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC7Cu;
        goto label_18cc7c;
    }
    ctx->pc = 0x18CC74u;
    {
        const bool branch_taken_0x18cc74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x18CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC74u;
        // 0x18cc78: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc74) {
            ctx->pc = 0x18CC90u;
            goto label_18cc90;
        }
    }
    ctx->pc = 0x18CC7Cu;
label_18cc7c:
    // 0x18cc7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18cc80:
    // 0x18cc80: 0x10000013  b           . + 4 + (0x13 << 2)
label_18cc84:
    if (ctx->pc == 0x18CC84u) {
        ctx->pc = 0x18CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC80u;
        // 0x18cc84: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC88u;
        goto label_18cc88;
    }
    ctx->pc = 0x18CC80u;
    {
        const bool branch_taken_0x18cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC80u;
        // 0x18cc84: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc80) {
            ctx->pc = 0x18CCD0u;
            goto label_18ccd0;
        }
    }
    ctx->pc = 0x18CC88u;
label_18cc88:
    // 0x18cc88: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_18cc8c:
    if (ctx->pc == 0x18CC8Cu) {
        ctx->pc = 0x18CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC88u;
        // 0x18cc8c: 0x431804  sllv        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC90u;
        goto label_18cc90;
    }
    ctx->pc = 0x18CC88u;
    {
        const bool branch_taken_0x18cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC88u;
        // 0x18cc8c: 0x431804  sllv        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc88) {
            ctx->pc = 0x18CC14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cc14;
        }
    }
    ctx->pc = 0x18CC90u;
label_18cc90:
    // 0x18cc90: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x18cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_18cc94:
    // 0x18cc94: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_18cc98:
    // 0x18cc98: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_18cc9c:
    // 0x18cc9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18cca0:
    // 0x18cca0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_18cca4:
    if (ctx->pc == 0x18CCA4u) {
        ctx->pc = 0x18CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCA0u;
        // 0x18cca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCA8u;
        goto label_18cca8;
    }
    ctx->pc = 0x18CCA0u;
    {
        const bool branch_taken_0x18cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCA0u;
        // 0x18cca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cca0) {
            ctx->pc = 0x18CCB4u;
            goto label_18ccb4;
        }
    }
    ctx->pc = 0x18CCA8u;
label_18cca8:
    // 0x18cca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ccac:
    // 0x18ccac: 0xc063b70  jal         func_18EDC0
label_18ccb0:
    if (ctx->pc == 0x18CCB0u) {
        ctx->pc = 0x18CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCACu;
        // 0x18ccb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCB4u;
        goto label_18ccb4;
    }
    ctx->pc = 0x18CCACu;
    SET_GPR_U32(ctx, 31, 0x18CCB4u);
    ctx->pc = 0x18CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCACu;
    // 0x18ccb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18CCACu, 0x18CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCB4u;
label_18ccb4:
    // 0x18ccb4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_18ccb8:
    if (ctx->pc == 0x18CCB8u) {
        ctx->pc = 0x18CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCB4u;
        // 0x18ccb8: 0xa6720000  sh          $s2, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCBCu;
        goto label_18ccbc;
    }
    ctx->pc = 0x18CCB4u;
    {
        const bool branch_taken_0x18ccb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCB4u;
        // 0x18ccb8: 0xa6720000  sh          $s2, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccb4) {
            ctx->pc = 0x18CCD0u;
            goto label_18ccd0;
        }
    }
    ctx->pc = 0x18CCBCu;
label_18ccbc:
    // 0x18ccbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ccc0:
    // 0x18ccc0: 0x280f809  jalr        $s4
label_18ccc4:
    if (ctx->pc == 0x18CCC4u) {
        ctx->pc = 0x18CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC0u;
        // 0x18ccc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCC8u;
        goto label_18ccc8;
    }
    ctx->pc = 0x18CCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x18CCC8u);
        ctx->pc = 0x18CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC0u;
        // 0x18ccc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCC0u, 0x18CCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CCC8u;
label_18ccc8:
    // 0x18ccc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_18cccc:
    if (ctx->pc == 0x18CCCCu) {
        ctx->pc = 0x18CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC8u;
        // 0x18cccc: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCD0u;
        goto label_18ccd0;
    }
    ctx->pc = 0x18CCC8u;
    {
        const bool branch_taken_0x18ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC8u;
        // 0x18cccc: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccc8) {
            ctx->pc = 0x18CCD4u;
            goto label_18ccd4;
        }
    }
    ctx->pc = 0x18CCD0u;
label_18ccd0:
    // 0x18ccd0: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x18ccd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
label_18ccd4:
    // 0x18ccd4: 0xa6d50000  sh          $s5, 0x0($s6)
    ctx->pc = 0x18ccd4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 21));
label_18ccd8:
    // 0x18ccd8: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x18ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_18ccdc:
    // 0x18ccdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ccdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18cce0:
    // 0x18cce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18cce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18cce4:
    // 0x18cce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18cce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18cce8:
    // 0x18cce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18cce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18ccec:
    // 0x18ccec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ccecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18ccf0:
    // 0x18ccf0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18ccf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18ccf4:
    // 0x18ccf4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18ccf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18ccf8:
    // 0x18ccf8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x18ccf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18ccfc:
    // 0x18ccfc: 0x3e00008  jr          $ra
label_18cd00:
    if (ctx->pc == 0x18CD00u) {
        ctx->pc = 0x18CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCFCu;
        // 0x18cd00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD04u;
        goto label_fallthrough_0x18ccfc;
    }
    ctx->pc = 0x18CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCFCu;
        // 0x18cd00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18ccfc:
    ctx->pc = 0x18CD04u;
}

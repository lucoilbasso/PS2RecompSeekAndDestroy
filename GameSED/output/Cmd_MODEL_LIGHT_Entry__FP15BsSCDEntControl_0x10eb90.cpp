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

// Function: Cmd_MODEL_LIGHT_Entry__FP15BsSCDEntControl
// Address: 0x10eb90 - 0x10ed20
void Cmd_MODEL_LIGHT_Entry__FP15BsSCDEntControl_0x10eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_LIGHT_Entry__FP15BsSCDEntControl_0x10eb90");
#endif

    switch (ctx->pc) {
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebe4u: goto label_10ebe4;
        case 0x10ebfcu: goto label_10ebfc;
        case 0x10ec08u: goto label_10ec08;
        case 0x10eca4u: goto label_10eca4;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecc8u: goto label_10ecc8;
        default: break;
    }

    ctx->pc = 0x10eb90u;

    // 0x10eb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eb94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eb98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10eb9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eba0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10eba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10eba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ebac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ebb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10ebb4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ebb8: 0x8e340024  lw          $s4, 0x24($s1)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10ebbc: 0x8e900044  lw          $s0, 0x44($s4)
    ctx->pc = 0x10ebbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x10ebc0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10EBC0u;
    SET_GPR_U32(ctx, 31, 0x10EBC8u);
    ctx->pc = 0x10EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBC0u;
    // 0x10ebc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10EBC0u, 0x10EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBC8u;
label_10ebc8:
    // 0x10ebc8: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x10ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10ebcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ebccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebd0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10ebd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ebd4: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10EBD4u;
    {
        const bool branch_taken_0x10ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10ebd4) {
            ctx->pc = 0x10EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EBD4u;
            // 0x10ebd8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC00u;
            goto label_10ec00;
        }
    }
    ctx->pc = 0x10EBDCu;
    // 0x10ebdc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10EBDCu;
    SET_GPR_U32(ctx, 31, 0x10EBE4u);
    ctx->pc = 0x10EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBDCu;
    // 0x10ebe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10EBDCu, 0x10EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBE4u;
label_10ebe4:
    // 0x10ebe4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10ebe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebec: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10ebf0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10ebf4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10EBF4u;
    SET_GPR_U32(ctx, 31, 0x10EBFCu);
    ctx->pc = 0x10EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBF4u;
    // 0x10ebf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10EBF4u, 0x10EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBFCu;
label_10ebfc:
    // 0x10ebfc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x10ebfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10ec00:
    // 0x10ec00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10EC00u;
    SET_GPR_U32(ctx, 31, 0x10EC08u);
    ctx->pc = 0x10EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC00u;
    // 0x10ec04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10EC00u, 0x10EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC08u;
label_10ec08:
    // 0x10ec08: 0x8e130124  lw          $s3, 0x124($s0)
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x10ec0c: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x10EC0Cu;
    {
        const bool branch_taken_0x10ec0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC0Cu;
        // 0x10ec10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec0c) {
            ctx->pc = 0x10EC48u;
            goto label_10ec48;
        }
    }
    ctx->pc = 0x10EC14u;
    // 0x10ec14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ec18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10ec20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ec20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ec24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ec24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec28: 0x24a53db8  addiu       $a1, $a1, 0x3DB8
    ctx->pc = 0x10ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15800));
    // 0x10ec2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ec2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ec30: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x10ec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10ec34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10ec34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ec38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ec38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ec3c: 0x8068186  j           func_1A0618
    ctx->pc = 0x10EC3Cu;
    ctx->pc = 0x10EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC3Cu;
    // 0x10ec40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x10EC44u;
    // 0x10ec44: 0x0  nop
    ctx->pc = 0x10ec44u;
    // NOP
label_10ec48:
    // 0x10ec48: 0x4a2000e  bltzl       $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x10EC48u;
    {
        const bool branch_taken_0x10ec48 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10ec48) {
            ctx->pc = 0x10EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC48u;
            // 0x10ec4c: 0x8e910048  lw          $s1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC84u;
            goto label_10ec84;
        }
    }
    ctx->pc = 0x10EC50u;
    // 0x10ec50: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x10ec54: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10ec54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ec58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EC58u;
    {
        const bool branch_taken_0x10ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC58u;
        // 0x10ec5c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec58) {
            ctx->pc = 0x10EC78u;
            goto label_10ec78;
        }
    }
    ctx->pc = 0x10EC60u;
    // 0x10ec60: 0x8e6201bc  lw          $v0, 0x1BC($s3)
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x10ec64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ec68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ec6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10EC6Cu;
    {
        const bool branch_taken_0x10ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC6Cu;
        // 0x10ec70: 0xae0401a8  sw          $a0, 0x1A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec6c) {
            ctx->pc = 0x10ED00u;
            goto label_10ed00;
        }
    }
    ctx->pc = 0x10EC74u;
    // 0x10ec74: 0x0  nop
    ctx->pc = 0x10ec74u;
    // NOP
label_10ec78:
    // 0x10ec78: 0x4a30022  bgezl       $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10EC78u;
    {
        const bool branch_taken_0x10ec78 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10ec78) {
            ctx->pc = 0x10EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC78u;
            // 0x10ec7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ED04u;
            goto label_10ed04;
        }
    }
    ctx->pc = 0x10EC80u;
    // 0x10ec80: 0x8e910048  lw          $s1, 0x48($s4)
    ctx->pc = 0x10ec80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_10ec84:
    // 0x10ec84: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x10EC84u;
    {
        const bool branch_taken_0x10ec84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC84u;
        // 0x10ec88: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec84) {
            ctx->pc = 0x10ED00u;
            goto label_10ed00;
        }
    }
    ctx->pc = 0x10EC8Cu;
    // 0x10ec8c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x10ec8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x10ec90: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x10ec90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x10ec94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EC94u;
    {
        const bool branch_taken_0x10ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec94) {
            ctx->pc = 0x10ECA4u;
            goto label_10eca4;
        }
    }
    ctx->pc = 0x10EC9Cu;
    // 0x10ec9c: 0xc061920  jal         func_186480
    ctx->pc = 0x10EC9Cu;
    SET_GPR_U32(ctx, 31, 0x10ECA4u);
    ctx->pc = 0x10ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC9Cu;
    // 0x10eca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x10EC9Cu, 0x10ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECA4u;
label_10eca4:
    // 0x10eca4: 0xc061422  jal         func_185088
    ctx->pc = 0x10ECA4u;
    SET_GPR_U32(ctx, 31, 0x10ECACu);
    ctx->pc = 0x10ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECA4u;
    // 0x10eca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x10ECA4u, 0x10ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECACu;
label_10ecac:
    // 0x10ecac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecb0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10ecb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ecb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ecb8: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x10ecbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecc0: 0xc05129a  jal         func_144A68
    ctx->pc = 0x10ECC0u;
    SET_GPR_U32(ctx, 31, 0x10ECC8u);
    ctx->pc = 0x10ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECC0u;
    // 0x10ecc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x10ECC0u, 0x10ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECC8u;
label_10ecc8:
    // 0x10ecc8: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x10ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x10eccc: 0x9082402c  lbu         $v0, 0x402C($a0)
    ctx->pc = 0x10ecccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16428)));
    // 0x10ecd0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x10ECD0u;
    {
        const bool branch_taken_0x10ecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ecd0) {
            ctx->pc = 0x10ECD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ECD0u;
            // 0x10ecd4: 0x8c82402c  lw          $v0, 0x402C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECDCu;
            goto label_10ecdc;
        }
    }
    ctx->pc = 0x10ECD8u;
    // 0x10ecd8: 0x8c824018  lw          $v0, 0x4018($a0)
    ctx->pc = 0x10ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16408)));
label_10ecdc:
    // 0x10ecdc: 0x8e6301b8  lw          $v1, 0x1B8($s3)
    ctx->pc = 0x10ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x10ece0: 0x22e02  srl         $a1, $v0, 24
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x10ece4: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x10ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x10ece8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x10ece8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10ecec: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x10ececu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x10ecf0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x10ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10ecf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10ecf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ecfc: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x10ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
label_10ed00:
    // 0x10ed00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ed00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ed04:
    // 0x10ed04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ed04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ed08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ed08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ed0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ed0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ed10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10ed10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ed14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ed18: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED18u;
        // 0x10ed1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED20u;
}

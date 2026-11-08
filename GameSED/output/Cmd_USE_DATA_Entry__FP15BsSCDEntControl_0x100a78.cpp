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

// Function: Cmd_USE_DATA_Entry__FP15BsSCDEntControl
// Address: 0x100a78 - 0x100c14
void Cmd_USE_DATA_Entry__FP15BsSCDEntControl_0x100a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_DATA_Entry__FP15BsSCDEntControl_0x100a78");
#endif

    switch (ctx->pc) {
        case 0x100a78u: goto label_100a78;
        case 0x100a7cu: goto label_100a7c;
        case 0x100a80u: goto label_100a80;
        case 0x100a84u: goto label_100a84;
        case 0x100a88u: goto label_100a88;
        case 0x100a8cu: goto label_100a8c;
        case 0x100a90u: goto label_100a90;
        case 0x100a94u: goto label_100a94;
        case 0x100a98u: goto label_100a98;
        case 0x100a9cu: goto label_100a9c;
        case 0x100aa0u: goto label_100aa0;
        case 0x100aa4u: goto label_100aa4;
        case 0x100aa8u: goto label_100aa8;
        case 0x100aacu: goto label_100aac;
        case 0x100ab0u: goto label_100ab0;
        case 0x100ab4u: goto label_100ab4;
        case 0x100ab8u: goto label_100ab8;
        case 0x100abcu: goto label_100abc;
        case 0x100ac0u: goto label_100ac0;
        case 0x100ac4u: goto label_100ac4;
        case 0x100ac8u: goto label_100ac8;
        case 0x100accu: goto label_100acc;
        case 0x100ad0u: goto label_100ad0;
        case 0x100ad4u: goto label_100ad4;
        case 0x100ad8u: goto label_100ad8;
        case 0x100adcu: goto label_100adc;
        case 0x100ae0u: goto label_100ae0;
        case 0x100ae4u: goto label_100ae4;
        case 0x100ae8u: goto label_100ae8;
        case 0x100aecu: goto label_100aec;
        case 0x100af0u: goto label_100af0;
        case 0x100af4u: goto label_100af4;
        case 0x100af8u: goto label_100af8;
        case 0x100afcu: goto label_100afc;
        case 0x100b00u: goto label_100b00;
        case 0x100b04u: goto label_100b04;
        case 0x100b08u: goto label_100b08;
        case 0x100b0cu: goto label_100b0c;
        case 0x100b10u: goto label_100b10;
        case 0x100b14u: goto label_100b14;
        case 0x100b18u: goto label_100b18;
        case 0x100b1cu: goto label_100b1c;
        case 0x100b20u: goto label_100b20;
        case 0x100b24u: goto label_100b24;
        case 0x100b28u: goto label_100b28;
        case 0x100b2cu: goto label_100b2c;
        case 0x100b30u: goto label_100b30;
        case 0x100b34u: goto label_100b34;
        case 0x100b38u: goto label_100b38;
        case 0x100b3cu: goto label_100b3c;
        case 0x100b40u: goto label_100b40;
        case 0x100b44u: goto label_100b44;
        case 0x100b48u: goto label_100b48;
        case 0x100b4cu: goto label_100b4c;
        case 0x100b50u: goto label_100b50;
        case 0x100b54u: goto label_100b54;
        case 0x100b58u: goto label_100b58;
        case 0x100b5cu: goto label_100b5c;
        case 0x100b60u: goto label_100b60;
        case 0x100b64u: goto label_100b64;
        case 0x100b68u: goto label_100b68;
        case 0x100b6cu: goto label_100b6c;
        case 0x100b70u: goto label_100b70;
        case 0x100b74u: goto label_100b74;
        case 0x100b78u: goto label_100b78;
        case 0x100b7cu: goto label_100b7c;
        case 0x100b80u: goto label_100b80;
        case 0x100b84u: goto label_100b84;
        case 0x100b88u: goto label_100b88;
        case 0x100b8cu: goto label_100b8c;
        case 0x100b90u: goto label_100b90;
        case 0x100b94u: goto label_100b94;
        case 0x100b98u: goto label_100b98;
        case 0x100b9cu: goto label_100b9c;
        case 0x100ba0u: goto label_100ba0;
        case 0x100ba4u: goto label_100ba4;
        case 0x100ba8u: goto label_100ba8;
        case 0x100bacu: goto label_100bac;
        case 0x100bb0u: goto label_100bb0;
        case 0x100bb4u: goto label_100bb4;
        case 0x100bb8u: goto label_100bb8;
        case 0x100bbcu: goto label_100bbc;
        case 0x100bc0u: goto label_100bc0;
        case 0x100bc4u: goto label_100bc4;
        case 0x100bc8u: goto label_100bc8;
        case 0x100bccu: goto label_100bcc;
        case 0x100bd0u: goto label_100bd0;
        case 0x100bd4u: goto label_100bd4;
        case 0x100bd8u: goto label_100bd8;
        case 0x100bdcu: goto label_100bdc;
        case 0x100be0u: goto label_100be0;
        case 0x100be4u: goto label_100be4;
        case 0x100be8u: goto label_100be8;
        case 0x100becu: goto label_100bec;
        case 0x100bf0u: goto label_100bf0;
        case 0x100bf4u: goto label_100bf4;
        case 0x100bf8u: goto label_100bf8;
        case 0x100bfcu: goto label_100bfc;
        case 0x100c00u: goto label_100c00;
        case 0x100c04u: goto label_100c04;
        case 0x100c08u: goto label_100c08;
        case 0x100c0cu: goto label_100c0c;
        case 0x100c10u: goto label_100c10;
        default: break;
    }

    ctx->pc = 0x100a78u;

label_100a78:
    // 0x100a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_100a7c:
    // 0x100a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100a80:
    // 0x100a80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_100a84:
    // 0x100a84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x100a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100a88:
    // 0x100a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_100a8c:
    // 0x100a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_100a90:
    // 0x100a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_100a94:
    // 0x100a94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_100a98:
    // 0x100a98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x100a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_100a9c:
    // 0x100a9c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x100a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_100aa0:
    // 0x100aa0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_100aa4:
    // 0x100aa4: 0x1482003e  bne         $a0, $v0, . + 4 + (0x3E << 2)
label_100aa8:
    if (ctx->pc == 0x100AA8u) {
        ctx->pc = 0x100AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA4u;
        // 0x100aa8: 0x8c730044  lw          $s3, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AACu;
        goto label_100aac;
    }
    ctx->pc = 0x100AA4u;
    {
        const bool branch_taken_0x100aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x100AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA4u;
        // 0x100aa8: 0x8c730044  lw          $s3, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aa4) {
            ctx->pc = 0x100BA0u;
            goto label_100ba0;
        }
    }
    ctx->pc = 0x100AACu;
label_100aac:
    // 0x100aac: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x100aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_100ab0:
    // 0x100ab0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_100ab4:
    if (ctx->pc == 0x100AB4u) {
        ctx->pc = 0x100AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AB0u;
        // 0x100ab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AB8u;
        goto label_100ab8;
    }
    ctx->pc = 0x100AB0u;
    {
        const bool branch_taken_0x100ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ab0) {
            ctx->pc = 0x100AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100AB0u;
            // 0x100ab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100B20u;
            goto label_100b20;
        }
    }
    ctx->pc = 0x100AB8u;
label_100ab8:
    // 0x100ab8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x100ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_100abc:
    // 0x100abc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x100abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_100ac0:
    // 0x100ac0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_100ac4:
    if (ctx->pc == 0x100AC4u) {
        ctx->pc = 0x100AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AC0u;
        // 0x100ac4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AC8u;
        goto label_100ac8;
    }
    ctx->pc = 0x100AC0u;
    {
        const bool branch_taken_0x100ac0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AC0u;
        // 0x100ac4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ac0) {
            ctx->pc = 0x100B10u;
            goto label_100b10;
        }
    }
    ctx->pc = 0x100AC8u;
label_100ac8:
    // 0x100ac8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_100acc:
    // 0x100acc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_100ad0:
    // 0x100ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100ad4:
    // 0x100ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100ad8:
    // 0x100ad8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100adc:
    // 0x100adc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100ae0:
    if (ctx->pc == 0x100AE0u) {
        ctx->pc = 0x100AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ADCu;
        // 0x100ae0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AE4u;
        goto label_100ae4;
    }
    ctx->pc = 0x100ADCu;
    {
        const bool branch_taken_0x100adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ADCu;
        // 0x100ae0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100adc) {
            ctx->pc = 0x100B00u;
            goto label_100b00;
        }
    }
    ctx->pc = 0x100AE4u;
label_100ae4:
    // 0x100ae4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100ae8:
    // 0x100ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100aec:
    // 0x100aec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100af0:
    // 0x100af0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100af4:
    // 0x100af4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100af8:
    // 0x100af8: 0x60f809  jalr        $v1
label_100afc:
    if (ctx->pc == 0x100AFCu) {
        ctx->pc = 0x100AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AF8u;
        // 0x100afc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B00u;
        goto label_100b00;
    }
    ctx->pc = 0x100AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100B00u);
        ctx->pc = 0x100AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AF8u;
        // 0x100afc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AF8u, 0x100B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B00u;
label_100b00:
    // 0x100b00: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x100b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_100b04:
    // 0x100b04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x100b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_100b08:
    // 0x100b08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_100b0c:
    if (ctx->pc == 0x100B0Cu) {
        ctx->pc = 0x100B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B08u;
        // 0x100b0c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B10u;
        goto label_100b10;
    }
    ctx->pc = 0x100B08u;
    {
        const bool branch_taken_0x100b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B08u;
        // 0x100b0c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b08) {
            ctx->pc = 0x100AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100ac8;
        }
    }
    ctx->pc = 0x100B10u;
label_100b10:
    // 0x100b10: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x100b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_100b14:
    // 0x100b14: 0xc067f04  jal         func_19FC10
label_100b18:
    if (ctx->pc == 0x100B18u) {
        ctx->pc = 0x100B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B14u;
        // 0x100b18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B1Cu;
        goto label_100b1c;
    }
    ctx->pc = 0x100B14u;
    SET_GPR_U32(ctx, 31, 0x100B1Cu);
    ctx->pc = 0x100B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B14u;
    // 0x100b18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100B14u, 0x100B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B1Cu;
label_100b1c:
    // 0x100b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b20:
    // 0x100b20: 0xc06a26e  jal         func_1A89B8
label_100b24:
    if (ctx->pc == 0x100B24u) {
        ctx->pc = 0x100B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B20u;
        // 0x100b24: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B28u;
        goto label_100b28;
    }
    ctx->pc = 0x100B20u;
    SET_GPR_U32(ctx, 31, 0x100B28u);
    ctx->pc = 0x100B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B20u;
    // 0x100b24: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100B20u, 0x100B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B28u;
label_100b28:
    // 0x100b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100b2c:
    // 0x100b2c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x100b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_100b30:
    // 0x100b30: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_100b34:
    if (ctx->pc == 0x100B34u) {
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B38u;
        goto label_100b38;
    }
    ctx->pc = 0x100B30u;
    {
        const bool branch_taken_0x100b30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b30) {
            ctx->pc = 0x100B3Cu;
            goto label_100b3c;
        }
    }
    ctx->pc = 0x100B38u;
label_100b38:
    // 0x100b38: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x100b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100b3c:
    // 0x100b3c: 0xc068086  jal         func_1A0218
label_100b40:
    if (ctx->pc == 0x100B40u) {
        ctx->pc = 0x100B44u;
        goto label_100b44;
    }
    ctx->pc = 0x100B3Cu;
    SET_GPR_U32(ctx, 31, 0x100B44u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100B3Cu, 0x100B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B44u;
label_100b44:
    // 0x100b44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_100b48:
    if (ctx->pc == 0x100B48u) {
        ctx->pc = 0x100B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B44u;
        // 0x100b48: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B4Cu;
        goto label_100b4c;
    }
    ctx->pc = 0x100B44u;
    {
        const bool branch_taken_0x100b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B44u;
        // 0x100b48: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b44) {
            ctx->pc = 0x100B60u;
            goto label_100b60;
        }
    }
    ctx->pc = 0x100B4Cu;
label_100b4c:
    // 0x100b4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_100b50:
    // 0x100b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100b54:
    // 0x100b54: 0x24a51950  addiu       $a1, $a1, 0x1950
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6480));
label_100b58:
    // 0x100b58: 0xc068186  jal         func_1A0618
label_100b5c:
    if (ctx->pc == 0x100B5Cu) {
        ctx->pc = 0x100B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B58u;
        // 0x100b5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B60u;
        goto label_100b60;
    }
    ctx->pc = 0x100B58u;
    SET_GPR_U32(ctx, 31, 0x100B60u);
    ctx->pc = 0x100B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B58u;
    // 0x100b5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100B58u, 0x100B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B60u;
label_100b60:
    // 0x100b60: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_100b64:
    // 0x100b64: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_100b68:
    if (ctx->pc == 0x100B68u) {
        ctx->pc = 0x100B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B64u;
        // 0x100b68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B6Cu;
        goto label_100b6c;
    }
    ctx->pc = 0x100B64u;
    {
        const bool branch_taken_0x100b64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B64u;
        // 0x100b68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b64) {
            ctx->pc = 0x100BF4u;
            goto label_100bf4;
        }
    }
    ctx->pc = 0x100B6Cu;
label_100b6c:
    // 0x100b6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_100b70:
    // 0x100b70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x100b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100b74:
    // 0x100b74: 0x0  nop
    ctx->pc = 0x100b74u;
    // NOP
label_100b78:
    // 0x100b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_100b7c:
    // 0x100b7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x100b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_100b80:
    // 0x100b80: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x100b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_100b84:
    // 0x100b84: 0x0  nop
    ctx->pc = 0x100b84u;
    // NOP
label_100b88:
    // 0x100b88: 0x0  nop
    ctx->pc = 0x100b88u;
    // NOP
label_100b8c:
    // 0x100b8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_100b90:
    if (ctx->pc == 0x100B90u) {
        ctx->pc = 0x100B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B8Cu;
        // 0x100b90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B94u;
        goto label_100b94;
    }
    ctx->pc = 0x100B8Cu;
    {
        const bool branch_taken_0x100b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B8Cu;
        // 0x100b90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b8c) {
            ctx->pc = 0x100B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100b78;
        }
    }
    ctx->pc = 0x100B94u;
label_100b94:
    // 0x100b94: 0x10000018  b           . + 4 + (0x18 << 2)
label_100b98:
    if (ctx->pc == 0x100B98u) {
        ctx->pc = 0x100B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B94u;
        // 0x100b98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B9Cu;
        goto label_100b9c;
    }
    ctx->pc = 0x100B94u;
    {
        const bool branch_taken_0x100b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B94u;
        // 0x100b98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b94) {
            ctx->pc = 0x100BF8u;
            goto label_100bf8;
        }
    }
    ctx->pc = 0x100B9Cu;
label_100b9c:
    // 0x100b9c: 0x0  nop
    ctx->pc = 0x100b9cu;
    // NOP
label_100ba0:
    // 0x100ba0: 0xc06a26e  jal         func_1A89B8
label_100ba4:
    if (ctx->pc == 0x100BA4u) {
        ctx->pc = 0x100BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA0u;
        // 0x100ba4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BA8u;
        goto label_100ba8;
    }
    ctx->pc = 0x100BA0u;
    SET_GPR_U32(ctx, 31, 0x100BA8u);
    ctx->pc = 0x100BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BA0u;
    // 0x100ba4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100BA0u, 0x100BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BA8u;
label_100ba8:
    // 0x100ba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100bac:
    // 0x100bac: 0xc06a26e  jal         func_1A89B8
label_100bb0:
    if (ctx->pc == 0x100BB0u) {
        ctx->pc = 0x100BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BACu;
        // 0x100bb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BB4u;
        goto label_100bb4;
    }
    ctx->pc = 0x100BACu;
    SET_GPR_U32(ctx, 31, 0x100BB4u);
    ctx->pc = 0x100BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BACu;
    // 0x100bb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100BACu, 0x100BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BB4u;
label_100bb4:
    // 0x100bb4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_100bb8:
    if (ctx->pc == 0x100BB8u) {
        ctx->pc = 0x100BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BB4u;
        // 0x100bb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BBCu;
        goto label_100bbc;
    }
    ctx->pc = 0x100BB4u;
    {
        const bool branch_taken_0x100bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100bb4) {
            ctx->pc = 0x100BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100BB4u;
            // 0x100bb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100BF8u;
            goto label_100bf8;
        }
    }
    ctx->pc = 0x100BBCu;
label_100bbc:
    // 0x100bbc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_100bc0:
    // 0x100bc0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x100bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_100bc4:
    // 0x100bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100bc8:
    // 0x100bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100bcc:
    // 0x100bcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100bd0:
    // 0x100bd0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100bd4:
    if (ctx->pc == 0x100BD4u) {
        ctx->pc = 0x100BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD0u;
        // 0x100bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BD8u;
        goto label_100bd8;
    }
    ctx->pc = 0x100BD0u;
    {
        const bool branch_taken_0x100bd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD0u;
        // 0x100bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bd0) {
            ctx->pc = 0x100BF0u;
            goto label_100bf0;
        }
    }
    ctx->pc = 0x100BD8u;
label_100bd8:
    // 0x100bd8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100bdc:
    // 0x100bdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100be0:
    // 0x100be0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100be4:
    // 0x100be4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100be8:
    // 0x100be8: 0x60f809  jalr        $v1
label_100bec:
    if (ctx->pc == 0x100BECu) {
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BF0u;
        goto label_100bf0;
    }
    ctx->pc = 0x100BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100BF0u);
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BE8u, 0x100BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100BF0u;
label_100bf0:
    // 0x100bf0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x100bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_100bf4:
    // 0x100bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100bf8:
    // 0x100bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_100bfc:
    // 0x100bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100c00:
    // 0x100c00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_100c04:
    // 0x100c04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x100c04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_100c08:
    // 0x100c08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x100c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_100c0c:
    // 0x100c0c: 0x3e00008  jr          $ra
label_100c10:
    if (ctx->pc == 0x100C10u) {
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C0Cu;
        // 0x100c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C14u;
        goto label_fallthrough_0x100c0c;
    }
    ctx->pc = 0x100C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C0Cu;
        // 0x100c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100c0c:
    ctx->pc = 0x100C14u;
}

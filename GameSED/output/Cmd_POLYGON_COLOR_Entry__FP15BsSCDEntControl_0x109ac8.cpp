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

// Function: Cmd_POLYGON_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x109ac8 - 0x109bf8
void Cmd_POLYGON_COLOR_Entry__FP15BsSCDEntControl_0x109ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_COLOR_Entry__FP15BsSCDEntControl_0x109ac8");
#endif

    switch (ctx->pc) {
        case 0x109b00u: goto label_109b00;
        case 0x109b1cu: goto label_109b1c;
        case 0x109b34u: goto label_109b34;
        case 0x109b54u: goto label_109b54;
        case 0x109b88u: goto label_109b88;
        case 0x109b9cu: goto label_109b9c;
        case 0x109bb4u: goto label_109bb4;
        case 0x109bc8u: goto label_109bc8;
        default: break;
    }

    ctx->pc = 0x109ac8u;

    // 0x109ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109acc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109ad0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x109ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x109ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ad8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x109ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x109adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x109adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ae8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x109aec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x109aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x109af0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x109af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x109af4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109af8: 0xc04110c  jal         func_104430
    ctx->pc = 0x109AF8u;
    SET_GPR_U32(ctx, 31, 0x109B00u);
    ctx->pc = 0x109AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AF8u;
    // 0x109afc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109AF8u, 0x109B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B00u;
label_109b00:
    // 0x109b00: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x109b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109b04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109b0c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109B0Cu;
    {
        const bool branch_taken_0x109b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109b0c) {
            ctx->pc = 0x109B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B0Cu;
            // 0x109b10: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B40u;
            goto label_109b40;
        }
    }
    ctx->pc = 0x109B14u;
    // 0x109b14: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109B14u;
    SET_GPR_U32(ctx, 31, 0x109B1Cu);
    ctx->pc = 0x109B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B14u;
    // 0x109b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109B14u, 0x109B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B1Cu;
label_109b1c:
    // 0x109b1c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x109b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x109b20: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x109b20u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x109b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b2c: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109B2Cu;
    SET_GPR_U32(ctx, 31, 0x109B34u);
    ctx->pc = 0x109B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B2Cu;
    // 0x109b30: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109B2Cu, 0x109B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B34u;
label_109b34:
    // 0x109b34: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x109B34u;
    {
        const bool branch_taken_0x109b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B34u;
        // 0x109b38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b34) {
            ctx->pc = 0x109BDCu;
            goto label_109bdc;
        }
    }
    ctx->pc = 0x109B3Cu;
    // 0x109b3c: 0x0  nop
    ctx->pc = 0x109b3cu;
    // NOP
label_109b40:
    // 0x109b40: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x109b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x109b44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x109B44u;
    {
        const bool branch_taken_0x109b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109b44) {
            ctx->pc = 0x109B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B44u;
            // 0x109b48: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B5Cu;
            goto label_109b5c;
        }
    }
    ctx->pc = 0x109B4Cu;
    // 0x109b4c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109B4Cu;
    SET_GPR_U32(ctx, 31, 0x109B54u);
    ctx->pc = 0x109B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B4Cu;
    // 0x109b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109B4Cu, 0x109B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B54u;
label_109b54:
    // 0x109b54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b58: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x109b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_109b5c:
    // 0x109b5c: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x109b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956592)));
    // 0x109b60: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x109b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x109b64: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109b68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x109b6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109b70: 0x5044001a  beql        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x109B70u;
    {
        const bool branch_taken_0x109b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x109b70) {
            ctx->pc = 0x109B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B70u;
            // 0x109b74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109BDCu;
            goto label_109bdc;
        }
    }
    ctx->pc = 0x109B78u;
    // 0x109b78: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x109b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x109b7c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x109b80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109b84: 0x0  nop
    ctx->pc = 0x109b84u;
    // NOP
label_109b88:
    // 0x109b88: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x109B88u;
    {
        const bool branch_taken_0x109b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x109B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B88u;
        // 0x109b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b88) {
            ctx->pc = 0x109BA8u;
            goto label_109ba8;
        }
    }
    ctx->pc = 0x109B90u;
    // 0x109b90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b94: 0xc0416fe  jal         func_105BF8
    ctx->pc = 0x109B94u;
    SET_GPR_U32(ctx, 31, 0x109B9Cu);
    ctx->pc = 0x109B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B94u;
    // 0x109b98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BF8u, 0x109B94u, 0x109B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B9Cu;
label_109b9c:
    // 0x109b9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x109B9Cu;
    {
        const bool branch_taken_0x109b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B9Cu;
        // 0x109ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b9c) {
            ctx->pc = 0x109BB8u;
            goto label_109bb8;
        }
    }
    ctx->pc = 0x109BA4u;
    // 0x109ba4: 0x0  nop
    ctx->pc = 0x109ba4u;
    // NOP
label_109ba8:
    // 0x109ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bac: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x109BACu;
    SET_GPR_U32(ctx, 31, 0x109BB4u);
    ctx->pc = 0x109BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BACu;
    // 0x109bb0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x109BACu, 0x109BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BB4u;
label_109bb4:
    // 0x109bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109bb8:
    // 0x109bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bc0: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109BC0u;
    SET_GPR_U32(ctx, 31, 0x109BC8u);
    ctx->pc = 0x109BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BC0u;
    // 0x109bc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109BC0u, 0x109BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BC8u;
label_109bc8:
    // 0x109bc8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109bd0: 0x5473ffed  bnel        $v1, $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x109BD0u;
    {
        const bool branch_taken_0x109bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x109bd0) {
            ctx->pc = 0x109BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109BD0u;
            // 0x109bd4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b88;
        }
    }
    ctx->pc = 0x109BD8u;
    // 0x109bd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109bdc:
    // 0x109bdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109be0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109be4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109be8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x109be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109bec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x109becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x109bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x109BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF0u;
        // 0x109bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109BF8u;
}

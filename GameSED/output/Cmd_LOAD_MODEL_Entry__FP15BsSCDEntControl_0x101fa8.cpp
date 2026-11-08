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

// Function: Cmd_LOAD_MODEL_Entry__FP15BsSCDEntControl
// Address: 0x101fa8 - 0x1021a4
void Cmd_LOAD_MODEL_Entry__FP15BsSCDEntControl_0x101fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_MODEL_Entry__FP15BsSCDEntControl_0x101fa8");
#endif

    switch (ctx->pc) {
        case 0x101fd8u: goto label_101fd8;
        case 0x102000u: goto label_102000;
        case 0x102018u: goto label_102018;
        case 0x102024u: goto label_102024;
        case 0x102060u: goto label_102060;
        case 0x102078u: goto label_102078;
        case 0x10209cu: goto label_10209c;
        case 0x1020a4u: goto label_1020a4;
        case 0x1020bcu: goto label_1020bc;
        case 0x1020d0u: goto label_1020d0;
        case 0x1020e0u: goto label_1020e0;
        case 0x1020e8u: goto label_1020e8;
        case 0x102118u: goto label_102118;
        case 0x102150u: goto label_102150;
        case 0x10217cu: goto label_10217c;
        default: break;
    }

    ctx->pc = 0x101fa8u;

    // 0x101fa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x101fac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x101facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x101fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fb4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x101fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x101fb8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x101fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x101fbc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x101fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x101fc0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x101fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x101fc4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x101fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x101fc8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101fcc: 0x8611000e  lh          $s1, 0xE($s0)
    ctx->pc = 0x101fccu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x101fd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101FD0u;
    SET_GPR_U32(ctx, 31, 0x101FD8u);
    ctx->pc = 0x101FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FD0u;
    // 0x101fd4: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101FD0u, 0x101FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FD8u;
label_101fd8:
    // 0x101fd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fdc: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x101fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x101fe0: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x101fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x101fe4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101fe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101fec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101FECu;
    {
        const bool branch_taken_0x101fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FECu;
        // 0x101ff0: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fec) {
            ctx->pc = 0x102008u;
            goto label_102008;
        }
    }
    ctx->pc = 0x101FF4u;
    // 0x101ff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x101ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ff8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x101FF8u;
    SET_GPR_U32(ctx, 31, 0x102000u);
    ctx->pc = 0x101FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FF8u;
    // 0x101ffc: 0x24841b28  addiu       $a0, $a0, 0x1B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x101FF8u, 0x102000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102000u;
label_102000:
    // 0x102000: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x102000u;
    {
        const bool branch_taken_0x102000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102000u;
        // 0x102004: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102000) {
            ctx->pc = 0x102188u;
            goto label_102188;
        }
    }
    ctx->pc = 0x102008u;
label_102008:
    // 0x102008: 0x1620002f  bnez        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x102008u;
    {
        const bool branch_taken_0x102008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102008u;
        // 0x10200c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102008) {
            ctx->pc = 0x1020C8u;
            goto label_1020c8;
        }
    }
    ctx->pc = 0x102010u;
    // 0x102010: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102010u;
    SET_GPR_U32(ctx, 31, 0x102018u);
    ctx->pc = 0x102014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102010u;
    // 0x102014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102010u, 0x102018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102018u;
label_102018:
    // 0x102018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10201c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10201Cu;
    SET_GPR_U32(ctx, 31, 0x102024u);
    ctx->pc = 0x102020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10201Cu;
    // 0x102020: 0x28203  sra         $s0, $v0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10201Cu, 0x102024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102024u;
label_102024:
    // 0x102024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10202c: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10202Cu;
    {
        const bool branch_taken_0x10202c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x102030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10202Cu;
        // 0x102030: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10202c) {
            ctx->pc = 0x102080u;
            goto label_102080;
        }
    }
    ctx->pc = 0x102034u;
    // 0x102034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102038: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10203c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102040: 0x24050305  addiu       $a1, $zero, 0x305
    ctx->pc = 0x102040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x102044: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x102044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x102048: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x10204c: 0x10650013  beq         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10204Cu;
    {
        const bool branch_taken_0x10204c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x102050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10204Cu;
        // 0x102050: 0x8c920170  lw          $s2, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10204c) {
            ctx->pc = 0x10209Cu;
            goto label_10209c;
        }
    }
    ctx->pc = 0x102054u;
    // 0x102054: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x102054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x102058: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x102058u;
    SET_GPR_U32(ctx, 31, 0x102060u);
    ctx->pc = 0x10205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102058u;
    // 0x10205c: 0x24841a58  addiu       $a0, $a0, 0x1A58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x102058u, 0x102060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102060u;
label_102060:
    // 0x102060: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102064: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x102068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10206c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10206cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x102070: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102070u;
    SET_GPR_U32(ctx, 31, 0x102078u);
    ctx->pc = 0x102074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102070u;
    // 0x102074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102070u, 0x102078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102078u;
label_102078:
    // 0x102078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x102078u;
    {
        const bool branch_taken_0x102078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102078) {
            ctx->pc = 0x10209Cu;
            goto label_10209c;
        }
    }
    ctx->pc = 0x102080u;
label_102080:
    // 0x102080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102084: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x102088: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10208c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10208cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102090: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x102090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102094: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102094u;
    SET_GPR_U32(ctx, 31, 0x10209Cu);
    ctx->pc = 0x102098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102094u;
    // 0x102098: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102094u, 0x10209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10209Cu;
label_10209c:
    // 0x10209c: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x10209Cu;
    SET_GPR_U32(ctx, 31, 0x1020A4u);
    ctx->pc = 0x1020A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10209Cu;
    // 0x1020a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x10209Cu, 0x1020A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020A4u;
label_1020a4:
    // 0x1020a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1020a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1020a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1020acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1020b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020b4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1020B4u;
    SET_GPR_U32(ctx, 31, 0x1020BCu);
    ctx->pc = 0x1020B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020B4u;
    // 0x1020b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1020B4u, 0x1020BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020BCu;
label_1020bc:
    // 0x1020bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1020BCu;
    {
        const bool branch_taken_0x1020bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020BCu;
        // 0x1020c0: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020bc) {
            ctx->pc = 0x1020F0u;
            goto label_1020f0;
        }
    }
    ctx->pc = 0x1020C4u;
    // 0x1020c4: 0x0  nop
    ctx->pc = 0x1020c4u;
    // NOP
label_1020c8:
    // 0x1020c8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1020C8u;
    SET_GPR_U32(ctx, 31, 0x1020D0u);
    ctx->pc = 0x1020CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020C8u;
    // 0x1020cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1020C8u, 0x1020D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020D0u;
label_1020d0:
    // 0x1020d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1020d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1020d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1020d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020d8: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1020D8u;
    SET_GPR_U32(ctx, 31, 0x1020E0u);
    ctx->pc = 0x1020DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020D8u;
    // 0x1020dc: 0x24a5cf38  addiu       $a1, $a1, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1020D8u, 0x1020E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020E0u;
label_1020e0:
    // 0x1020e0: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x1020E0u;
    SET_GPR_U32(ctx, 31, 0x1020E8u);
    ctx->pc = 0x1020E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020E0u;
    // 0x1020e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x1020E0u, 0x1020E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020E8u;
label_1020e8:
    // 0x1020e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1020e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020ec: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1020ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1020f0:
    // 0x1020f0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1020f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020f4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1020f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1020f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1020F8u;
    {
        const bool branch_taken_0x1020f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1020FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020F8u;
        // 0x1020fc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020f8) {
            ctx->pc = 0x102118u;
            goto label_102118;
        }
    }
    ctx->pc = 0x102100u;
    // 0x102100: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102108: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8
    ctx->pc = 0x102108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    // 0x10210c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x10210cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102110: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102110u;
    SET_GPR_U32(ctx, 31, 0x102118u);
    ctx->pc = 0x102114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102110u;
    // 0x102114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102110u, 0x102118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102118u;
label_102118:
    // 0x102118: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102118u;
    {
        const bool branch_taken_0x102118 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102118u;
        // 0x10211c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102118) {
            ctx->pc = 0x102130u;
            goto label_102130;
        }
    }
    ctx->pc = 0x102120u;
    // 0x102120: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x102120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x102124: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x102124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102128: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102128u;
    {
        const bool branch_taken_0x102128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102128) {
            ctx->pc = 0x102134u;
            goto label_102134;
        }
    }
    ctx->pc = 0x102130u;
label_102130:
    // 0x102130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102134:
    // 0x102134: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102134u;
    {
        const bool branch_taken_0x102134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102134u;
        // 0x102138: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102134) {
            ctx->pc = 0x102150u;
            goto label_102150;
        }
    }
    ctx->pc = 0x10213Cu;
    // 0x10213c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102140: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8
    ctx->pc = 0x102140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    // 0x102144: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102148: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102148u;
    SET_GPR_U32(ctx, 31, 0x102150u);
    ctx->pc = 0x10214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102148u;
    // 0x10214c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102148u, 0x102150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102150u;
label_102150:
    // 0x102150: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x102150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x102154: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x102154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x102158: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x102158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10215c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102160: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102160u;
    {
        const bool branch_taken_0x102160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102160u;
        // 0x102164: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102160) {
            ctx->pc = 0x10217Cu;
            goto label_10217c;
        }
    }
    ctx->pc = 0x102168u;
    // 0x102168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10216c: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0
    ctx->pc = 0x10216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
    // 0x102170: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x102170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x102174: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102174u;
    SET_GPR_U32(ctx, 31, 0x10217Cu);
    ctx->pc = 0x102178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102174u;
    // 0x102178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102174u, 0x10217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10217Cu;
label_10217c:
    // 0x10217c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x102180: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x102180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x102184: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x102184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_102188:
    // 0x102188: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x102188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10218c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10218cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102190: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x102190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x102194: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x102194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102198: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x102198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10219c: 0x3e00008  jr          $ra
    ctx->pc = 0x10219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1021A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10219Cu;
        // 0x1021a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1021A4u;
}

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

// Function: __check_eh_spec
// Address: 0x1ccdd0 - 0x1ccf78
void ps2___check_eh_spec_0x1ccdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___check_eh_spec_0x1ccdd0");
#endif

    switch (ctx->pc) {
        case 0x1cce00u: goto label_1cce00;
        case 0x1cce10u: goto label_1cce10;
        case 0x1cce24u: goto label_1cce24;
        case 0x1cce34u: goto label_1cce34;
        case 0x1cce3cu: goto label_1cce3c;
        case 0x1cce50u: goto label_1cce50;
        case 0x1cce68u: goto label_1cce68;
        case 0x1cce70u: goto label_1cce70;
        case 0x1cce7cu: goto label_1cce7c;
        case 0x1cce88u: goto label_1cce88;
        case 0x1cce90u: goto label_1cce90;
        case 0x1cceb0u: goto label_1cceb0;
        case 0x1ccec4u: goto label_1ccec4;
        case 0x1cced4u: goto label_1cced4;
        case 0x1ccedcu: goto label_1ccedc;
        case 0x1ccef0u: goto label_1ccef0;
        case 0x1ccf10u: goto label_1ccf10;
        case 0x1ccf24u: goto label_1ccf24;
        case 0x1ccf3cu: goto label_1ccf3c;
        case 0x1ccf48u: goto label_1ccf48;
        case 0x1ccf58u: goto label_1ccf58;
        case 0x1ccf60u: goto label_1ccf60;
        case 0x1ccf70u: goto label_1ccf70;
        default: break;
    }

    ctx->pc = 0x1ccdd0u;

    // 0x1ccdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ccdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ccdd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ccdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ccdd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ccdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ccddc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ccddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccde0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1ccde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1ccde4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ccde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ccde8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ccde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ccdec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ccdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ccdf0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1ccdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1ccdf4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ccdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ccdf8: 0xc0734a6  jal         func_1CD298
    ctx->pc = 0x1CCDF8u;
    SET_GPR_U32(ctx, 31, 0x1CCE00u);
    ctx->pc = 0x1CCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDF8u;
    // 0x1ccdfc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CCDF8u, 0x1CCE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE00u;
label_1cce00:
    // 0x1cce00: 0x1a800011  blez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCE00u;
    {
        const bool branch_taken_0x1cce00 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1CCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE00u;
        // 0x1cce04: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce00) {
            ctx->pc = 0x1CCE48u;
            goto label_1cce48;
        }
    }
    ctx->pc = 0x1CCE08u;
    // 0x1cce08: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1cce08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce0c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1cce0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cce10:
    // 0x1cce10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cce14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce18: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cce1c: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CCE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE24u);
    ctx->pc = 0x1CCE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1Cu;
    // 0x1cce20: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCE1Cu, 0x1CCE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE24u;
label_1cce24:
    // 0x1cce24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCE24u;
    {
        const bool branch_taken_0x1cce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce24) {
            ctx->pc = 0x1CCE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCE24u;
            // 0x1cce28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCE2Cu;
    // 0x1cce2c: 0xc07335c  jal         func_1CCD70
    ctx->pc = 0x1CCE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE34u);
    ctx->pc = 0x1CCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD70u, 0x1CCE2Cu, 0x1CCE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE34u;
label_1cce34:
    // 0x1cce34: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCE34u;
    SET_GPR_U32(ctx, 31, 0x1CCE3Cu);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCE34u, 0x1CCE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE3Cu;
label_1cce3c:
    // 0x1cce3c: 0x0  nop
    ctx->pc = 0x1cce3cu;
    // NOP
label_1cce40:
    // 0x1cce40: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CCE40u;
    {
        const bool branch_taken_0x1cce40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE40u;
        // 0x1cce44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce40) {
            ctx->pc = 0x1CCE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce10;
        }
    }
    ctx->pc = 0x1CCE48u;
label_1cce48:
    // 0x1cce48: 0xc0732b0  jal         func_1CCAC0
    ctx->pc = 0x1CCE48u;
    SET_GPR_U32(ctx, 31, 0x1CCE50u);
    ctx->pc = 0x1CCAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCAC0u, 0x1CCE48u, 0x1CCE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE50u;
label_1cce50:
    // 0x1cce50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cce54: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cce58: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1cce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1cce5c: 0x2484c818  addiu       $a0, $a0, -0x37E8
    ctx->pc = 0x1cce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952984));
    // 0x1cce60: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCE60u;
    SET_GPR_U32(ctx, 31, 0x1CCE68u);
    ctx->pc = 0x1CCE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE60u;
    // 0x1cce64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCE60u, 0x1CCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE68u;
label_1cce68:
    // 0x1cce68: 0xc073312  jal         func_1CCC48
    ctx->pc = 0x1CCE68u;
    SET_GPR_U32(ctx, 31, 0x1CCE70u);
    ctx->pc = 0x1CCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE68u;
    // 0x1cce6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC48u, 0x1CCE68u, 0x1CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE70u;
label_1cce70:
    // 0x1cce70: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cce70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cce74: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCE74u;
    SET_GPR_U32(ctx, 31, 0x1CCE7Cu);
    ctx->pc = 0x1CCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE74u;
    // 0x1cce78: 0x2484c828  addiu       $a0, $a0, -0x37D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCE74u, 0x1CCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE7Cu;
label_1cce7c:
    // 0x1cce7c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cce80: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCE80u;
    SET_GPR_U32(ctx, 31, 0x1CCE88u);
    ctx->pc = 0x1CCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE80u;
    // 0x1cce84: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCE80u, 0x1CCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE88u;
label_1cce88:
    // 0x1cce88: 0xc0732c8  jal         func_1CCB20
    ctx->pc = 0x1CCE88u;
    SET_GPR_U32(ctx, 31, 0x1CCE90u);
    ctx->pc = 0x1CCB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCB20u, 0x1CCE88u, 0x1CCE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE90u;
label_1cce90:
    // 0x1cce90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cce90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce94: 0x12530014  beq         $s2, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CCE94u;
    {
        const bool branch_taken_0x1cce94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x1cce94) {
            ctx->pc = 0x1CCEE8u;
            goto label_1ccee8;
        }
    }
    ctx->pc = 0x1CCE9Cu;
    // 0x1cce9c: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCE9Cu;
    {
        const bool branch_taken_0x1cce9c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1CCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE9Cu;
        // 0x1ccea0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce9c) {
            ctx->pc = 0x1CCEE8u;
            goto label_1ccee8;
        }
    }
    ctx->pc = 0x1CCEA4u;
    // 0x1ccea4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ccea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccea8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1ccea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceac: 0x0  nop
    ctx->pc = 0x1cceacu;
    // NOP
label_1cceb0:
    // 0x1cceb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cceb4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1cceb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceb8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ccebc: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CCEBCu;
    SET_GPR_U32(ctx, 31, 0x1CCEC4u);
    ctx->pc = 0x1CCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEBCu;
    // 0x1ccec0: 0x8e660008  lw          $a2, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCEBCu, 0x1CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEC4u;
label_1ccec4:
    // 0x1ccec4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCEC4u;
    {
        const bool branch_taken_0x1ccec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccec4) {
            ctx->pc = 0x1CCEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCEC4u;
            // 0x1ccec8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCEE0u;
            goto label_1ccee0;
        }
    }
    ctx->pc = 0x1CCECCu;
    // 0x1ccecc: 0xc07335c  jal         func_1CCD70
    ctx->pc = 0x1CCECCu;
    SET_GPR_U32(ctx, 31, 0x1CCED4u);
    ctx->pc = 0x1CCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD70u, 0x1CCECCu, 0x1CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCED4u;
    SET_GPR_U32(ctx, 31, 0x1CCEDCu);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCED4u, 0x1CCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0x0  nop
    ctx->pc = 0x1ccedcu;
    // NOP
label_1ccee0:
    // 0x1ccee0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CCEE0u;
    {
        const bool branch_taken_0x1ccee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEE0u;
        // 0x1ccee4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccee0) {
            ctx->pc = 0x1CCEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cceb0;
        }
    }
    ctx->pc = 0x1CCEE8u;
label_1ccee8:
    // 0x1ccee8: 0xc07873a  jal         func_1E1CE8
    ctx->pc = 0x1CCEE8u;
    SET_GPR_U32(ctx, 31, 0x1CCEF0u);
    ctx->pc = 0x1E1CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1CE8u, 0x1CCEE8u, 0x1CCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF0u;
label_1ccef0:
    // 0x1ccef0: 0x1a80001d  blez        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CCEF0u;
    {
        const bool branch_taken_0x1ccef0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1CCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF0u;
        // 0x1ccef4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccef0) {
            ctx->pc = 0x1CCF68u;
            goto label_1ccf68;
        }
    }
    ctx->pc = 0x1CCEF8u;
    // 0x1ccef8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ccefc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ccefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf00: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1ccf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf04: 0x3c14001e  lui         $s4, 0x1E
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)30 << 16));
    // 0x1ccf08: 0x24550cd0  addiu       $s5, $v0, 0xCD0
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3280));
    // 0x1ccf0c: 0x0  nop
    ctx->pc = 0x1ccf0cu;
    // NOP
label_1ccf10:
    // 0x1ccf10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ccf14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ccf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf18: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1ccf18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ccf1c: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CCF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF24u);
    ctx->pc = 0x1CCF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF1Cu;
    // 0x1ccf20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCF1Cu, 0x1CCF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF24u;
label_1ccf24:
    // 0x1ccf24: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCF24u;
    {
        const bool branch_taken_0x1ccf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf24) {
            ctx->pc = 0x1CCF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCF24u;
            // 0x1ccf28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCF60u;
            goto label_1ccf60;
        }
    }
    ctx->pc = 0x1CCF2Cu;
    // 0x1ccf2c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ccf30: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x1ccf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x1ccf34: 0xc07358e  jal         func_1CD638
    ctx->pc = 0x1CCF34u;
    SET_GPR_U32(ctx, 31, 0x1CCF3Cu);
    ctx->pc = 0x1CCF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF34u;
    // 0x1ccf38: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD638u, 0x1CCF34u, 0x1CCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF3Cu;
label_1ccf3c:
    // 0x1ccf3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ccf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf40: 0xc07873a  jal         func_1E1CE8
    ctx->pc = 0x1CCF40u;
    SET_GPR_U32(ctx, 31, 0x1CCF48u);
    ctx->pc = 0x1CCF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF40u;
    // 0x1ccf44: 0xae150000  sw          $s5, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1CE8u, 0x1CCF40u, 0x1CCF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF48u;
label_1ccf48:
    // 0x1ccf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf50: 0xc0732ee  jal         func_1CCBB8
    ctx->pc = 0x1CCF50u;
    SET_GPR_U32(ctx, 31, 0x1CCF58u);
    ctx->pc = 0x1CCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF50u;
    // 0x1ccf54: 0x26861d48  addiu       $a2, $s4, 0x1D48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 7496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCBB8u, 0x1CCF50u, 0x1CCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF58u;
label_1ccf58:
    // 0x1ccf58: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCF58u;
    SET_GPR_U32(ctx, 31, 0x1CCF60u);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCF58u, 0x1CCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF60u;
label_1ccf60:
    // 0x1ccf60: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CCF60u;
    {
        const bool branch_taken_0x1ccf60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF60u;
        // 0x1ccf64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf60) {
            ctx->pc = 0x1CCF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf10;
        }
    }
    ctx->pc = 0x1CCF68u;
label_1ccf68:
    // 0x1ccf68: 0xc07329a  jal         func_1CCA68
    ctx->pc = 0x1CCF68u;
    SET_GPR_U32(ctx, 31, 0x1CCF70u);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCF68u, 0x1CCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF70u;
label_1ccf70:
    // 0x1ccf70: 0xc07329a  jal         func_1CCA68
    ctx->pc = 0x1CCF70u;
    SET_GPR_U32(ctx, 31, 0x1CCF78u);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCF70u, 0x1CCF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF78u;
}

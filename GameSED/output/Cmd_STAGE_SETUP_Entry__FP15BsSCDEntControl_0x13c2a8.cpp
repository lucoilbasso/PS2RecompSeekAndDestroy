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

// Function: Cmd_STAGE_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x13c2a8 - 0x13c55c
void Cmd_STAGE_SETUP_Entry__FP15BsSCDEntControl_0x13c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_SETUP_Entry__FP15BsSCDEntControl_0x13c2a8");
#endif

    switch (ctx->pc) {
        case 0x13c2e8u: goto label_13c2e8;
        case 0x13c310u: goto label_13c310;
        case 0x13c318u: goto label_13c318;
        case 0x13c328u: goto label_13c328;
        case 0x13c354u: goto label_13c354;
        case 0x13c378u: goto label_13c378;
        case 0x13c388u: goto label_13c388;
        case 0x13c3a8u: goto label_13c3a8;
        case 0x13c3d0u: goto label_13c3d0;
        case 0x13c3f8u: goto label_13c3f8;
        case 0x13c410u: goto label_13c410;
        case 0x13c438u: goto label_13c438;
        case 0x13c4acu: goto label_13c4ac;
        case 0x13c4c0u: goto label_13c4c0;
        case 0x13c4c8u: goto label_13c4c8;
        case 0x13c4d0u: goto label_13c4d0;
        case 0x13c4d8u: goto label_13c4d8;
        case 0x13c4f0u: goto label_13c4f0;
        case 0x13c510u: goto label_13c510;
        case 0x13c52cu: goto label_13c52c;
        default: break;
    }

    ctx->pc = 0x13c2a8u;

    // 0x13c2a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13c2ac: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x13c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x13c2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2b4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x13c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x13c2b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13c2b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2bc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x13c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x13c2c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x13c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x13c2c4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x13c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x13c2c8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x13c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x13c2cc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x13c2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x13c2d0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x13c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x13c2d4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x13c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x13c2d8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x13c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x13c2dc: 0x8e340024  lw          $s4, 0x24($s1)
    ctx->pc = 0x13c2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13c2e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C2E0u;
    SET_GPR_U32(ctx, 31, 0x13C2E8u);
    ctx->pc = 0x13C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2E0u;
    // 0x13c2e4: 0x8e960044  lw          $s6, 0x44($s4) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C2E0u, 0x13C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2E8u;
label_13c2e8:
    // 0x13c2e8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x13c2ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13c2f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13c2f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c2f8: 0x5064001d  beql        $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13C2F8u;
    {
        const bool branch_taken_0x13c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13c2f8) {
            ctx->pc = 0x13C2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C2F8u;
            // 0x13c2fc: 0x24041116  addiu       $a0, $zero, 0x1116 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C370u;
            goto label_13c370;
        }
    }
    ctx->pc = 0x13C300u;
    // 0x13c300: 0x241e0026  addiu       $fp, $zero, 0x26
    ctx->pc = 0x13c300u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13c304: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x13c304u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x13c308: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x13c308u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x13c30c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x13c30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c310:
    // 0x13c310: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C310u;
    SET_GPR_U32(ctx, 31, 0x13C318u);
    ctx->pc = 0x13C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C310u;
    // 0x13c314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C310u, 0x13C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C318u;
label_13c318:
    // 0x13c318: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c31c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c320: 0xc0410e4  jal         func_104390
    ctx->pc = 0x13C320u;
    SET_GPR_U32(ctx, 31, 0x13C328u);
    ctx->pc = 0x13C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C320u;
    // 0x13c324: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x13C320u, 0x13C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C328u;
label_13c328:
    // 0x13c328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c32c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13c32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c330: 0x26e56890  addiu       $a1, $s7, 0x6890
    ctx->pc = 0x13c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 26768));
    // 0x13c334: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x13c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13c338: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C338u;
    {
        const bool branch_taken_0x13c338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C338u;
        // 0x13c33c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c338) {
            ctx->pc = 0x13C34Cu;
            goto label_13c34c;
        }
    }
    ctx->pc = 0x13C340u;
    // 0x13c340: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13c340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c344: 0x505e0004  beql        $v0, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C344u;
    {
        const bool branch_taken_0x13c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x13c344) {
            ctx->pc = 0x13C348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C344u;
            // 0x13c348: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C358u;
            goto label_13c358;
        }
    }
    ctx->pc = 0x13C34Cu;
label_13c34c:
    // 0x13c34c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x13C34Cu;
    SET_GPR_U32(ctx, 31, 0x13C354u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x13C34Cu, 0x13C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C354u;
label_13c354:
    // 0x13c354: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x13c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13c358:
    // 0x13c358: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13c35c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x13c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x13c360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c364: 0x1455ffea  bne         $v0, $s5, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13C364u;
    {
        const bool branch_taken_0x13c364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x13C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C364u;
        // 0x13c368: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c364) {
            ctx->pc = 0x13C310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c310;
        }
    }
    ctx->pc = 0x13C36Cu;
    // 0x13c36c: 0x24041116  addiu       $a0, $zero, 0x1116
    ctx->pc = 0x13c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
label_13c370:
    // 0x13c370: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13C370u;
    SET_GPR_U32(ctx, 31, 0x13C378u);
    ctx->pc = 0x13C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C370u;
    // 0x13c374: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13C370u, 0x13C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C378u;
label_13c378:
    // 0x13c378: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x13c378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x13c37c: 0x34840220  ori         $a0, $a0, 0x220
    ctx->pc = 0x13c37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)544);
    // 0x13c380: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13C380u;
    SET_GPR_U32(ctx, 31, 0x13C388u);
    ctx->pc = 0x13C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C380u;
    // 0x13c384: 0x13880a  movz        $s1, $zero, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13C380u, 0x13C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C388u;
label_13c388:
    // 0x13c388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c38c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c390: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13c394: 0x2442ecf0  addiu       $v0, $v0, -0x1310
    ctx->pc = 0x13c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
    // 0x13c398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c39c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13c3a0: 0xc043fc4  jal         func_10FF10
    ctx->pc = 0x13C3A0u;
    SET_GPR_U32(ctx, 31, 0x13C3A8u);
    ctx->pc = 0x13C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3A0u;
    // 0x13c3a4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF10u, 0x13C3A0u, 0x13C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3A8u;
label_13c3a8:
    // 0x13c3a8: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x13c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x13c3ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13c3b0: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x13c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x13c3b4: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x13c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x13c3b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x13c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x13c3bc: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x13c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x13c3c0: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x13c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x13c3c4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x13c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x13c3c8: 0xc06727a  jal         func_19C9E8
    ctx->pc = 0x13C3C8u;
    SET_GPR_U32(ctx, 31, 0x13C3D0u);
    ctx->pc = 0x13C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3C8u;
    // 0x13c3cc: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9E8u, 0x13C3C8u, 0x13C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3D0u;
label_13c3d0:
    // 0x13c3d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13c3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13c3d4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13c3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13c3d8: 0xac200208  sw          $zero, 0x208($at)
    ctx->pc = 0x13c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 520), GPR_U32(ctx, 0));
    // 0x13c3dc: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x13c3e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13c3e4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13c3e8: 0xac20020c  sw          $zero, 0x20C($at)
    ctx->pc = 0x13c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 0));
    // 0x13c3ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c3f0: 0xc05237a  jal         func_148DE8
    ctx->pc = 0x13C3F0u;
    SET_GPR_U32(ctx, 31, 0x13C3F8u);
    ctx->pc = 0x13C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3F0u;
    // 0x13c3f4: 0xae0201e0  sw          $v0, 0x1E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148DE8u, 0x13C3F0u, 0x13C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3F8u;
label_13c3f8:
    // 0x13c3f8: 0xaf80912c  sw          $zero, -0x6ED4($gp)
    ctx->pc = 0x13c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 0));
    // 0x13c3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c404: 0xaf809130  sw          $zero, -0x6ED0($gp)
    ctx->pc = 0x13c404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 0));
    // 0x13c408: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x13C408u;
    SET_GPR_U32(ctx, 31, 0x13C410u);
    ctx->pc = 0x13C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C408u;
    // 0x13c40c: 0xaf809134  sw          $zero, -0x6ECC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x13C408u, 0x13C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C410u;
label_13c410:
    // 0x13c410: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c414: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13c414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13c418: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x13C418u;
    {
        const bool branch_taken_0x13c418 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C418u;
        // 0x13c41c: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c418) {
            ctx->pc = 0x13C470u;
            goto label_13c470;
        }
    }
    ctx->pc = 0x13C420u;
    // 0x13c420: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C420u;
    {
        const bool branch_taken_0x13c420 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x13C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C420u;
        // 0x13c424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c420) {
            ctx->pc = 0x13C464u;
            goto label_13c464;
        }
    }
    ctx->pc = 0x13C428u;
    // 0x13c428: 0x24070126  addiu       $a3, $zero, 0x126
    ctx->pc = 0x13c428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13c42c: 0x262401ec  addiu       $a0, $s1, 0x1EC
    ctx->pc = 0x13c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
    // 0x13c430: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c434: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13c438:
    // 0x13c438: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13c43c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c440: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13c440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13c444: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13c448: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C448u;
    {
        const bool branch_taken_0x13c448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x13C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C448u;
        // 0x13c44c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c448) {
            ctx->pc = 0x13C454u;
            goto label_13c454;
        }
    }
    ctx->pc = 0x13C450u;
    // 0x13c450: 0xac7101d0  sw          $s1, 0x1D0($v1)
    ctx->pc = 0x13c450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 17));
label_13c454:
    // 0x13c454: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13c454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13c458: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x13c458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x13c45c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x13C45Cu;
    {
        const bool branch_taken_0x13c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c45c) {
            ctx->pc = 0x13C460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C45Cu;
            // 0x13c460: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c438;
        }
    }
    ctx->pc = 0x13C464u;
label_13c464:
    // 0x13c464: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C464u;
    {
        const bool branch_taken_0x13c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C464u;
        // 0x13c468: 0xae3301e8  sw          $s3, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c464) {
            ctx->pc = 0x13C48Cu;
            goto label_13c48c;
        }
    }
    ctx->pc = 0x13C46Cu;
    // 0x13c46c: 0x0  nop
    ctx->pc = 0x13c46cu;
    // NOP
label_13c470:
    // 0x13c470: 0x8e240164  lw          $a0, 0x164($s1)
    ctx->pc = 0x13c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x13c474: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x13c474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13c478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13c47c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13c480: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C480u;
    {
        const bool branch_taken_0x13c480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C480u;
        // 0x13c484: 0xae2401ec  sw          $a0, 0x1EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c480) {
            ctx->pc = 0x13C48Cu;
            goto label_13c48c;
        }
    }
    ctx->pc = 0x13C488u;
    // 0x13c488: 0xac9101d0  sw          $s1, 0x1D0($a0)
    ctx->pc = 0x13c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 17));
label_13c48c:
    // 0x13c48c: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x13c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x13c490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C490u;
    {
        const bool branch_taken_0x13c490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c490) {
            ctx->pc = 0x13C494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C490u;
            // 0x13c494: 0xae2201e4  sw          $v0, 0x1E4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C4B4u;
            goto label_13c4b4;
        }
    }
    ctx->pc = 0x13C498u;
    // 0x13c498: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x13c498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x13c49c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4a0: 0x24a568a0  addiu       $a1, $a1, 0x68A0
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26784));
    // 0x13c4a4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13C4A4u;
    SET_GPR_U32(ctx, 31, 0x13C4ACu);
    ctx->pc = 0x13C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4A4u;
    // 0x13c4a8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13C4A4u, 0x13C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4ACu;
label_13c4ac:
    // 0x13c4ac: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x13c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x13c4b0: 0xae2201e4  sw          $v0, 0x1E4($s1)
    ctx->pc = 0x13c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
label_13c4b4:
    // 0x13c4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4b8: 0xc050b74  jal         func_142DD0
    ctx->pc = 0x13C4B8u;
    SET_GPR_U32(ctx, 31, 0x13C4C0u);
    ctx->pc = 0x13C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4B8u;
    // 0x13c4bc: 0xac510018  sw          $s1, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142DD0u, 0x13C4B8u, 0x13C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4C0u;
label_13c4c0:
    // 0x13c4c0: 0xc0527cc  jal         func_149F30
    ctx->pc = 0x13C4C0u;
    SET_GPR_U32(ctx, 31, 0x13C4C8u);
    ctx->pc = 0x149F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F30u, 0x13C4C0u, 0x13C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4C8u;
label_13c4c8:
    // 0x13c4c8: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13C4C8u;
    SET_GPR_U32(ctx, 31, 0x13C4D0u);
    ctx->pc = 0x13C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4C8u;
    // 0x13c4cc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13C4C8u, 0x13C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4D0u;
label_13c4d0:
    // 0x13c4d0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13C4D0u;
    SET_GPR_U32(ctx, 31, 0x13C4D8u);
    ctx->pc = 0x13C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4D0u;
    // 0x13c4d4: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13C4D0u, 0x13C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4D8u;
label_13c4d8:
    // 0x13c4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13c4e0: 0x2442edc8  addiu       $v0, $v0, -0x1238
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962632));
    // 0x13c4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4e8: 0xc061258  jal         func_184960
    ctx->pc = 0x13C4E8u;
    SET_GPR_U32(ctx, 31, 0x13C4F0u);
    ctx->pc = 0x13C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4E8u;
    // 0x13c4ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x13C4E8u, 0x13C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4F0u;
label_13c4f0:
    // 0x13c4f0: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x13c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    // 0x13c4f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13c4f8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13c4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c500: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13c508: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x13C508u;
    SET_GPR_U32(ctx, 31, 0x13C510u);
    ctx->pc = 0x13C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C508u;
    // 0x13c50c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x13C508u, 0x13C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C510u;
label_13c510:
    // 0x13c510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13c514: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x13c514u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x13c518: 0xac300214  sw          $s0, 0x214($at)
    ctx->pc = 0x13c518u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 532), GPR_U32(ctx, 16));
    // 0x13c51c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13c520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c524: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x13C524u;
    SET_GPR_U32(ctx, 31, 0x13C52Cu);
    ctx->pc = 0x13C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C524u;
    // 0x13c528: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x13C524u, 0x13C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C52Cu;
label_13c52c:
    // 0x13c52c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x13c52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c530: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x13c530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c534: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x13c534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c538: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x13c538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13c53c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x13c53cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c540: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x13c540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13c544: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x13c544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c548: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x13c548u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13c54c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13c54cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c550: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x13c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13c554: 0x3e00008  jr          $ra
    ctx->pc = 0x13C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C554u;
        // 0x13c558: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C55Cu;
}

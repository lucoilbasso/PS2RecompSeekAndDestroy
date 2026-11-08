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

// Function: Cmd_LIGHT_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x10d2d0 - 0x10d414
void Cmd_LIGHT_COLOR_Entry__FP15BsSCDEntControl_0x10d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIGHT_COLOR_Entry__FP15BsSCDEntControl_0x10d2d0");
#endif

    switch (ctx->pc) {
        case 0x10d30cu: goto label_10d30c;
        case 0x10d338u: goto label_10d338;
        case 0x10d350u: goto label_10d350;
        case 0x10d374u: goto label_10d374;
        case 0x10d38cu: goto label_10d38c;
        case 0x10d3dcu: goto label_10d3dc;
        default: break;
    }

    ctx->pc = 0x10d2d0u;

    // 0x10d2d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d2d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d2d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10d2dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x10d2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10d2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10d2e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2ec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x10d2f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10d2f4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x10d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x10d2f8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10d2fc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d300: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x10d300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d304: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D304u;
    SET_GPR_U32(ctx, 31, 0x10D30Cu);
    ctx->pc = 0x10D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D304u;
    // 0x10d308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D304u, 0x10D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D30Cu;
label_10d30c:
    // 0x10d30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d310: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d314: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10d314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d318: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D318u;
    {
        const bool branch_taken_0x10d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D318u;
        // 0x10d31c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d318) {
            ctx->pc = 0x10D328u;
            goto label_10d328;
        }
    }
    ctx->pc = 0x10D320u;
    // 0x10d320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D320u;
    {
        const bool branch_taken_0x10d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D320u;
        // 0x10d324: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d320) {
            ctx->pc = 0x10D350u;
            goto label_10d350;
        }
    }
    ctx->pc = 0x10D328u;
label_10d328:
    // 0x10d328: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10D328u;
    {
        const bool branch_taken_0x10d328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d328) {
            ctx->pc = 0x10D32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D328u;
            // 0x10d32c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D354u;
            goto label_10d354;
        }
    }
    ctx->pc = 0x10D330u;
    // 0x10d330: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D330u;
    SET_GPR_U32(ctx, 31, 0x10D338u);
    ctx->pc = 0x10D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D330u;
    // 0x10d334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D330u, 0x10D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D338u;
label_10d338:
    // 0x10d338: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d340: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d344: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d348: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D348u;
    SET_GPR_U32(ctx, 31, 0x10D350u);
    ctx->pc = 0x10D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D348u;
    // 0x10d34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D348u, 0x10D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D350u;
label_10d350:
    // 0x10d350: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10d354:
    // 0x10d354: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10d358: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D358u;
    {
        const bool branch_taken_0x10d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D358u;
        // 0x10d35c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d358) {
            ctx->pc = 0x10D36Cu;
            goto label_10d36c;
        }
    }
    ctx->pc = 0x10D360u;
    // 0x10d360: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x10d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10d364: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D364u;
    {
        const bool branch_taken_0x10d364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d364) {
            ctx->pc = 0x10D378u;
            goto label_10d378;
        }
    }
    ctx->pc = 0x10D36Cu;
label_10d36c:
    // 0x10d36c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10D36Cu;
    SET_GPR_U32(ctx, 31, 0x10D374u);
    ctx->pc = 0x10D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D36Cu;
    // 0x10d370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10D36Cu, 0x10D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D374u;
label_10d374:
    // 0x10d374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10d374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d378:
    // 0x10d378: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d37c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d384: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D384u;
    SET_GPR_U32(ctx, 31, 0x10D38Cu);
    ctx->pc = 0x10D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D384u;
    // 0x10d388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D384u, 0x10D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D38Cu;
label_10d38c:
    // 0x10d38c: 0x26100150  addiu       $s0, $s0, 0x150
    ctx->pc = 0x10d38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10d390: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x10d390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x10d394: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x10d394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10d398: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x10d398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x10d39c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10d39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d3a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x10d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x10d3a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10d3a8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x10d3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x10d3ac: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x10d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10d3b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10d3b4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x10d3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x10d3b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x10d3bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d3c0: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x10D3C0u;
    {
        const bool branch_taken_0x10d3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C0u;
        // 0x10d3c4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c0) {
            ctx->pc = 0x10D3F4u;
            goto label_10d3f4;
        }
    }
    ctx->pc = 0x10D3C8u;
    // 0x10d3c8: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x10d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d3cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3d4: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D3D4u;
    SET_GPR_U32(ctx, 31, 0x10D3DCu);
    ctx->pc = 0x10D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3D4u;
    // 0x10d3d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D3D4u, 0x10D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3DCu;
label_10d3dc:
    // 0x10d3dc: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x10d3e0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x10d3e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10d3e4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10d3e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10d3ec: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x10d3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x10d3f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_10d3f4:
    // 0x10d3f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d3f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x10d3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d3fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10d3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d400: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x10d400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10d404: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10d404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d408: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x10d408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10d40c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D40Cu;
        // 0x10d410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D414u;
}

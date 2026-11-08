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

// Function: FBufferClear__9WcMonitorb
// Address: 0x1767b8 - 0x176c20
void FBufferClear__9WcMonitorb_0x1767b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FBufferClear__9WcMonitorb_0x1767b8");
#endif

    switch (ctx->pc) {
        case 0x1767e8u: goto label_1767e8;
        case 0x17680cu: goto label_17680c;
        case 0x176818u: goto label_176818;
        case 0x176838u: goto label_176838;
        case 0x176840u: goto label_176840;
        case 0x1768c0u: goto label_1768c0;
        case 0x1768e4u: goto label_1768e4;
        case 0x1768f0u: goto label_1768f0;
        case 0x176910u: goto label_176910;
        case 0x176918u: goto label_176918;
        case 0x176994u: goto label_176994;
        case 0x1769b8u: goto label_1769b8;
        case 0x1769c0u: goto label_1769c0;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769e8u: goto label_1769e8;
        case 0x176a68u: goto label_176a68;
        case 0x176a8cu: goto label_176a8c;
        case 0x176a98u: goto label_176a98;
        case 0x176ab8u: goto label_176ab8;
        case 0x176ac0u: goto label_176ac0;
        case 0x176b40u: goto label_176b40;
        case 0x176b64u: goto label_176b64;
        case 0x176b70u: goto label_176b70;
        case 0x176b90u: goto label_176b90;
        case 0x176b98u: goto label_176b98;
        default: break;
    }

    ctx->pc = 0x1767b8u;

    // 0x1767b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1767b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1767bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1767bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1767c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1767c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1767c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1767c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1767c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1767cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1767ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1767d0: 0x10a000d7  beqz        $a1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1767D0u;
    {
        const bool branch_taken_0x1767d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767D0u;
        // 0x1767d4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767d0) {
            ctx->pc = 0x176B30u;
            goto label_176b30;
        }
    }
    ctx->pc = 0x1767D8u;
    // 0x1767d8: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x1767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x1767dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1767dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767e0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1767E0u;
    SET_GPR_U32(ctx, 31, 0x1767E8u);
    ctx->pc = 0x1767E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767E0u;
    // 0x1767e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1767E0u, 0x1767E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767E8u;
label_1767e8:
    // 0x1767e8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1767ec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1767ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1767f0: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x1767f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x1767f4: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1767f8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1767f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1767fc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176800: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176804: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176804u;
    SET_GPR_U32(ctx, 31, 0x17680Cu);
    ctx->pc = 0x176808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176804u;
    // 0x176808: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176804u, 0x17680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17680Cu;
label_17680c:
    // 0x17680c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176810: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176814: 0x0  nop
    ctx->pc = 0x176814u;
    // NOP
label_176818:
    // 0x176818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17681c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176820: 0x0  nop
    ctx->pc = 0x176820u;
    // NOP
    // 0x176824: 0x0  nop
    ctx->pc = 0x176824u;
    // NOP
    // 0x176828: 0x0  nop
    ctx->pc = 0x176828u;
    // NOP
    // 0x17682c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17682Cu;
    {
        const bool branch_taken_0x17682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17682c) {
            ctx->pc = 0x176818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176818;
        }
    }
    ctx->pc = 0x176834u;
    // 0x176834: 0x0  nop
    ctx->pc = 0x176834u;
    // NOP
label_176838:
    // 0x176838: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 31, 0x176840u);
    ctx->pc = 0x17683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176838u;
    // 0x17683c: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176838u, 0x176840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176840u;
label_176840:
    // 0x176840: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176844: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176844u;
    {
        const bool branch_taken_0x176844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176844u;
        // 0x176848: 0x8f868c54  lw          $a2, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176844) {
            ctx->pc = 0x176838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176838;
        }
    }
    ctx->pc = 0x17684Cu;
    // 0x17684c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17684cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176850: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176854: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176858: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176858u;
    {
        const bool branch_taken_0x176858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176858u;
        // 0x17685c: 0xacd10020  sw          $s1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176858) {
            ctx->pc = 0x176878u;
            goto label_176878;
        }
    }
    ctx->pc = 0x176860u;
    // 0x176860: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176864: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176868: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17686c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x17686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176870u;
    {
        const bool branch_taken_0x176870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176870u;
        // 0x176874: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176870) {
            ctx->pc = 0x176884u;
            goto label_176884;
        }
    }
    ctx->pc = 0x176878u;
label_176878:
    // 0x176878: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x17687c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176880: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_176884:
    // 0x176884: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x176884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x176888: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17688c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176890: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176894: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x176898: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17689c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1768a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1768a4: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x1768a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1768a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1768ac: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1768acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768b0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1768b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1768b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1768b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1768b8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1768B8u;
    SET_GPR_U32(ctx, 31, 0x1768C0u);
    ctx->pc = 0x1768BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768B8u;
    // 0x1768bc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1768B8u, 0x1768C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768C0u;
label_1768c0:
    // 0x1768c0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1768c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1768c4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1768c8: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1768cc: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x1768ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x1768d0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1768d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1768d4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1768d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1768d8: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1768dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1768DCu;
    SET_GPR_U32(ctx, 31, 0x1768E4u);
    ctx->pc = 0x1768E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768DCu;
    // 0x1768e0: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1768DCu, 0x1768E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768E4u;
label_1768e4:
    // 0x1768e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1768e8: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1768e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1768ec: 0x0  nop
    ctx->pc = 0x1768ecu;
    // NOP
label_1768f0:
    // 0x1768f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1768f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1768f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1768f8: 0x0  nop
    ctx->pc = 0x1768f8u;
    // NOP
    // 0x1768fc: 0x0  nop
    ctx->pc = 0x1768fcu;
    // NOP
    // 0x176900: 0x0  nop
    ctx->pc = 0x176900u;
    // NOP
    // 0x176904: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176904u;
    {
        const bool branch_taken_0x176904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176904) {
            ctx->pc = 0x1768F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1768f0;
        }
    }
    ctx->pc = 0x17690Cu;
    // 0x17690c: 0x0  nop
    ctx->pc = 0x17690cu;
    // NOP
label_176910:
    // 0x176910: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176910u;
    SET_GPR_U32(ctx, 31, 0x176918u);
    ctx->pc = 0x176914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176910u;
    // 0x176914: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176910u, 0x176918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176918u;
label_176918:
    // 0x176918: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x17691c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17691Cu;
    {
        const bool branch_taken_0x17691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17691Cu;
        // 0x176920: 0x8f868c54  lw          $a2, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17691c) {
            ctx->pc = 0x176910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176910;
        }
    }
    ctx->pc = 0x176924u;
    // 0x176924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176928: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17692c: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x17692cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176930: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176930u;
    {
        const bool branch_taken_0x176930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176930u;
        // 0x176934: 0xacd10020  sw          $s1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176930) {
            ctx->pc = 0x176950u;
            goto label_176950;
        }
    }
    ctx->pc = 0x176938u;
    // 0x176938: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x17693c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176944: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176948u;
    {
        const bool branch_taken_0x176948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176948u;
        // 0x17694c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176948) {
            ctx->pc = 0x17695Cu;
            goto label_17695c;
        }
    }
    ctx->pc = 0x176950u;
label_176950:
    // 0x176950: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176954: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176958: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_17695c:
    // 0x17695c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x17695cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x176960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176964: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176968: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x176968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17696c: 0x26630070  addiu       $v1, $s3, 0x70
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x176970: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176978: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17697c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x17697cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176980: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x176980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x176984: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176988: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x176988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17698c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x17698Cu;
    SET_GPR_U32(ctx, 31, 0x176994u);
    ctx->pc = 0x176990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17698Cu;
    // 0x176990: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x17698Cu, 0x176994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176994u;
label_176994:
    // 0x176994: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176998: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x17699c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x17699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1769a0: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x1769a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x1769a4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1769a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1769a8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1769a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1769ac: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1769acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1769b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1769B0u;
    SET_GPR_U32(ctx, 31, 0x1769B8u);
    ctx->pc = 0x1769B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769B0u;
    // 0x1769b4: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1769B0u, 0x1769B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769B8u;
label_1769b8:
    // 0x1769b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1769bc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1769bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_1769c0:
    // 0x1769c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1769c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1769c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1769c8: 0x0  nop
    ctx->pc = 0x1769c8u;
    // NOP
    // 0x1769cc: 0x0  nop
    ctx->pc = 0x1769ccu;
    // NOP
    // 0x1769d0: 0x0  nop
    ctx->pc = 0x1769d0u;
    // NOP
    // 0x1769d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1769D4u;
    {
        const bool branch_taken_0x1769d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1769d4) {
            ctx->pc = 0x1769C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1769c0;
        }
    }
    ctx->pc = 0x1769DCu;
    // 0x1769dc: 0x0  nop
    ctx->pc = 0x1769dcu;
    // NOP
label_1769e0:
    // 0x1769e0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1769E0u;
    SET_GPR_U32(ctx, 31, 0x1769E8u);
    ctx->pc = 0x1769E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769E0u;
    // 0x1769e4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1769E0u, 0x1769E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769E8u;
label_1769e8:
    // 0x1769e8: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x1769e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x1769ec: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1769ECu;
    {
        const bool branch_taken_0x1769ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1769F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769ECu;
        // 0x1769f0: 0x8f868c54  lw          $a2, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769ec) {
            ctx->pc = 0x1769E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1769e0;
        }
    }
    ctx->pc = 0x1769F4u;
    // 0x1769f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1769f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1769fc: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x1769fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176a00: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176A00u;
    {
        const bool branch_taken_0x176a00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A00u;
        // 0x176a04: 0xacd10020  sw          $s1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a00) {
            ctx->pc = 0x176A20u;
            goto label_176a20;
        }
    }
    ctx->pc = 0x176A08u;
    // 0x176a08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176a0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176a14: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176A18u;
    {
        const bool branch_taken_0x176a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A18u;
        // 0x176a1c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a18) {
            ctx->pc = 0x176A2Cu;
            goto label_176a2c;
        }
    }
    ctx->pc = 0x176A20u;
label_176a20:
    // 0x176a20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176a24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176a28: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_176a2c:
    // 0x176a2c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x176a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x176a30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176a34: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x176a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176a38: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x176a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176a3c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x176a40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176a4c: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x176a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x176a50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x176a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x176a54: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x176a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a58: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176a5c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x176a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x176a60: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176A60u;
    SET_GPR_U32(ctx, 31, 0x176A68u);
    ctx->pc = 0x176A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A60u;
    // 0x176a64: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176A60u, 0x176A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A68u;
label_176a68:
    // 0x176a68: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176a6c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176a70: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176a74: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176a78: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176a7c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176a80: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176a84: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176A84u;
    SET_GPR_U32(ctx, 31, 0x176A8Cu);
    ctx->pc = 0x176A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A84u;
    // 0x176a88: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176A84u, 0x176A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A8Cu;
label_176a8c:
    // 0x176a8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176a90: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176a94: 0x0  nop
    ctx->pc = 0x176a94u;
    // NOP
label_176a98:
    // 0x176a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176a9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x176a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176aa0: 0x0  nop
    ctx->pc = 0x176aa0u;
    // NOP
    // 0x176aa4: 0x0  nop
    ctx->pc = 0x176aa4u;
    // NOP
    // 0x176aa8: 0x0  nop
    ctx->pc = 0x176aa8u;
    // NOP
    // 0x176aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176AACu;
    {
        const bool branch_taken_0x176aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176aac) {
            ctx->pc = 0x176A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176a98;
        }
    }
    ctx->pc = 0x176AB4u;
    // 0x176ab4: 0x0  nop
    ctx->pc = 0x176ab4u;
    // NOP
label_176ab8:
    // 0x176ab8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176AB8u;
    SET_GPR_U32(ctx, 31, 0x176AC0u);
    ctx->pc = 0x176ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AB8u;
    // 0x176abc: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176AB8u, 0x176AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AC0u;
label_176ac0:
    // 0x176ac0: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176ac4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176AC4u;
    {
        const bool branch_taken_0x176ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AC4u;
        // 0x176ac8: 0x8f858c54  lw          $a1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ac4) {
            ctx->pc = 0x176AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176ab8;
        }
    }
    ctx->pc = 0x176ACCu;
    // 0x176acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176ad4: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176ad8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176AD8u;
    {
        const bool branch_taken_0x176ad8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AD8u;
        // 0x176adc: 0xacb10020  sw          $s1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ad8) {
            ctx->pc = 0x176AF8u;
            goto label_176af8;
        }
    }
    ctx->pc = 0x176AE0u;
    // 0x176ae0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176ae4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176ae8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176aec: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176af0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176AF0u;
    {
        const bool branch_taken_0x176af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AF0u;
        // 0x176af4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176af0) {
            ctx->pc = 0x176B04u;
            goto label_176b04;
        }
    }
    ctx->pc = 0x176AF8u;
label_176af8:
    // 0x176af8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176afc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176b00: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_176b04:
    // 0x176b04: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x176b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x176b08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x176b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176b0c: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x176b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176b10: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x176b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176b14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176b18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176b1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176b20: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176b24: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x176B24u;
    {
        const bool branch_taken_0x176b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B24u;
        // 0x176b28: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b24) {
            ctx->pc = 0x176C00u;
            goto label_176c00;
        }
    }
    ctx->pc = 0x176B2Cu;
    // 0x176b2c: 0x0  nop
    ctx->pc = 0x176b2cu;
    // NOP
label_176b30:
    // 0x176b30: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x176b30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x176b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b38: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176B38u;
    SET_GPR_U32(ctx, 31, 0x176B40u);
    ctx->pc = 0x176B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B38u;
    // 0x176b3c: 0x2610e790  addiu       $s0, $s0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176B38u, 0x176B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B40u;
label_176b40:
    // 0x176b40: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176b44: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176b48: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176b4c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176b50: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176b54: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176b58: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176b5c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176B5Cu;
    SET_GPR_U32(ctx, 31, 0x176B64u);
    ctx->pc = 0x176B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B5Cu;
    // 0x176b60: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176B5Cu, 0x176B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B64u;
label_176b64:
    // 0x176b64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176b68: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176b6c: 0x0  nop
    ctx->pc = 0x176b6cu;
    // NOP
label_176b70:
    // 0x176b70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176b74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x176b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176b78: 0x0  nop
    ctx->pc = 0x176b78u;
    // NOP
    // 0x176b7c: 0x0  nop
    ctx->pc = 0x176b7cu;
    // NOP
    // 0x176b80: 0x0  nop
    ctx->pc = 0x176b80u;
    // NOP
    // 0x176b84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176B84u;
    {
        const bool branch_taken_0x176b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176b84) {
            ctx->pc = 0x176B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176b70;
        }
    }
    ctx->pc = 0x176B8Cu;
    // 0x176b8c: 0x0  nop
    ctx->pc = 0x176b8cu;
    // NOP
label_176b90:
    // 0x176b90: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176B90u;
    SET_GPR_U32(ctx, 31, 0x176B98u);
    ctx->pc = 0x176B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B90u;
    // 0x176b94: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176B90u, 0x176B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B98u;
label_176b98:
    // 0x176b98: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176b9c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176B9Cu;
    {
        const bool branch_taken_0x176b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B9Cu;
        // 0x176ba0: 0x8f858c54  lw          $a1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b9c) {
            ctx->pc = 0x176B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176b90;
        }
    }
    ctx->pc = 0x176BA4u;
    // 0x176ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ba8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176bac: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176bb0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176BB0u;
    {
        const bool branch_taken_0x176bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BB0u;
        // 0x176bb4: 0xacb10020  sw          $s1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bb0) {
            ctx->pc = 0x176BD0u;
            goto label_176bd0;
        }
    }
    ctx->pc = 0x176BB8u;
    // 0x176bb8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176bbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176bc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176bc4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176bc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176BC8u;
    {
        const bool branch_taken_0x176bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BC8u;
        // 0x176bcc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bc8) {
            ctx->pc = 0x176BDCu;
            goto label_176bdc;
        }
    }
    ctx->pc = 0x176BD0u;
label_176bd0:
    // 0x176bd0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176bd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176bd8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_176bdc:
    // 0x176bdc: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x176bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x176be0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x176be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176be4: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x176be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176be8: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x176be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176bf0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176bf4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176bf8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176bfc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x176bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_176c00:
    // 0x176c00: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x176c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x176c04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x176c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176c08: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x176c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176c0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x176c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176c10: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x176c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x176c14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176c18: 0x3e00008  jr          $ra
    ctx->pc = 0x176C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C18u;
        // 0x176c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176C20u;
}

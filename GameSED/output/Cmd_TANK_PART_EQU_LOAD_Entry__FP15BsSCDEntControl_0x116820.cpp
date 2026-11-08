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

// Function: Cmd_TANK_PART_EQU_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x116820 - 0x116a3c
void Cmd_TANK_PART_EQU_LOAD_Entry__FP15BsSCDEntControl_0x116820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PART_EQU_LOAD_Entry__FP15BsSCDEntControl_0x116820");
#endif

    switch (ctx->pc) {
        case 0x116854u: goto label_116854;
        case 0x116874u: goto label_116874;
        case 0x1168d8u: goto label_1168d8;
        case 0x116918u: goto label_116918;
        case 0x116930u: goto label_116930;
        case 0x116944u: goto label_116944;
        case 0x11697cu: goto label_11697c;
        case 0x116998u: goto label_116998;
        case 0x1169a0u: goto label_1169a0;
        case 0x1169b8u: goto label_1169b8;
        case 0x1169d0u: goto label_1169d0;
        case 0x1169d8u: goto label_1169d8;
        case 0x1169e0u: goto label_1169e0;
        case 0x1169e8u: goto label_1169e8;
        case 0x1169f0u: goto label_1169f0;
        case 0x116a00u: goto label_116a00;
        default: break;
    }

    ctx->pc = 0x116820u;

    // 0x116820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x116820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x116824: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116828: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x116828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x11682c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x116830: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116834: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x116834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x116838: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x116838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11683c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x116840: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x116840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x116844: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x116844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x116848: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x116848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11684c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11684Cu;
    SET_GPR_U32(ctx, 31, 0x116854u);
    ctx->pc = 0x116850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11684Cu;
    // 0x116850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11684Cu, 0x116854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116854u;
label_116854:
    // 0x116854: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x116854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116858: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11685c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11685cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x116860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116864: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116864u;
    {
        const bool branch_taken_0x116864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x116868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116864u;
        // 0x116868: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116864) {
            ctx->pc = 0x116878u;
            goto label_116878;
        }
    }
    ctx->pc = 0x11686Cu;
    // 0x11686c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11686Cu;
    SET_GPR_U32(ctx, 31, 0x116874u);
    ctx->pc = 0x116870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11686Cu;
    // 0x116870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11686Cu, 0x116874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116874u;
label_116874:
    // 0x116874: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x116874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116878:
    // 0x116878: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x116878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11687c: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x11687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116880: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x116880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116884: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x116884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x116888: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x11688c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116890: 0x2489c0f0  addiu       $t1, $a0, -0x3F10
    ctx->pc = 0x116890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951152));
    // 0x116894: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116898: 0x246ac540  addiu       $t2, $v1, -0x3AC0
    ctx->pc = 0x116898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11689c: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x11689cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1EC0F0u));
    // 0x1168a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1168a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1168a4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1168a8: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1168ac: 0x8c430fec  lw          $v1, 0xFEC($v0)
    ctx->pc = 0x1168acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
    // 0x1168b0: 0x8cd60384  lw          $s6, 0x384($a2)
    ctx->pc = 0x1168b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 900)));
    // 0x1168b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1168b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1168b8: 0x10e40054  beq         $a3, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1168B8u;
    {
        const bool branch_taken_0x1168b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168B8u;
        // 0x1168bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168b8) {
            ctx->pc = 0x116A0Cu;
            goto label_116a0c;
        }
    }
    ctx->pc = 0x1168C0u;
    // 0x1168c0: 0x24021268  addiu       $v0, $zero, 0x1268
    ctx->pc = 0x1168c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x1168c4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1168c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168c8: 0x102f018  mult        $fp, $t0, $v0
    ctx->pc = 0x1168c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x1168cc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1168ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1168d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1168d4: 0x0  nop
    ctx->pc = 0x1168d4u;
    // NOP
label_1168d8:
    // 0x1168d8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1168d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1168dc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1168dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1168e0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1168e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1168e4: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x1168e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1168e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1168ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1168ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1168f0: 0x94430ff0  lhu         $v1, 0xFF0($v0)
    ctx->pc = 0x1168f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4080)));
    // 0x1168f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1168f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1168f8: 0x38603  sra         $s0, $v1, 24
    ctx->pc = 0x1168f8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1168fc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1168fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x116900: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x116900u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x116904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116908: 0x1077003d  beq         $v1, $s7, . + 4 + (0x3D << 2)
    ctx->pc = 0x116908u;
    {
        const bool branch_taken_0x116908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x11690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116908u;
        // 0x11690c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116908) {
            ctx->pc = 0x116A00u;
            goto label_116a00;
        }
    }
    ctx->pc = 0x116910u;
    // 0x116910: 0xc045360  jal         func_114D80
    ctx->pc = 0x116910u;
    SET_GPR_U32(ctx, 31, 0x116918u);
    ctx->pc = 0x116914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116910u;
    // 0x116914: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116910u, 0x116918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116918u;
label_116918:
    // 0x116918: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11691c: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x11691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x116920: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116928: 0xc041882  jal         func_106208
    ctx->pc = 0x116928u;
    SET_GPR_U32(ctx, 31, 0x116930u);
    ctx->pc = 0x11692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116928u;
    // 0x11692c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116928u, 0x116930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116930u;
label_116930:
    // 0x116930: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x116930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x116934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11693c: 0xc041882  jal         func_106208
    ctx->pc = 0x11693Cu;
    SET_GPR_U32(ctx, 31, 0x116944u);
    ctx->pc = 0x116940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11693Cu;
    // 0x116940: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11693Cu, 0x116944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116944u;
label_116944:
    // 0x116944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x116948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11694c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x11694cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116950: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x116950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x116954: 0x32500f00  andi        $s0, $s2, 0xF00
    ctx->pc = 0x116954u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3840);
    // 0x116958: 0x325100ff  andi        $s1, $s2, 0xFF
    ctx->pc = 0x116958u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x11695c: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x11695cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x116960: 0x2a22002a  slti        $v0, $s1, 0x2A
    ctx->pc = 0x116960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x116964: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x116964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x116968: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x116968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x11696c: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x11696cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x116970: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x116974: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x116974u;
    SET_GPR_U32(ctx, 31, 0x11697Cu);
    ctx->pc = 0x116978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116974u;
    // 0x116978: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x116974u, 0x11697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11697Cu;
label_11697c:
    // 0x11697c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11697cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116980: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x116980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x116984: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x116984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x116988: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x116988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11698c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11698cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116990: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x116990u;
    SET_GPR_U32(ctx, 31, 0x116998u);
    ctx->pc = 0x116994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116990u;
    // 0x116994: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x116990u, 0x116998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116998u;
label_116998:
    // 0x116998: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x116998u;
    SET_GPR_U32(ctx, 31, 0x1169A0u);
    ctx->pc = 0x11699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116998u;
    // 0x11699c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x116998u, 0x1169A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169A0u;
label_1169a0:
    // 0x1169a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1169a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1169a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1169a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1169acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169b0: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1169B0u;
    SET_GPR_U32(ctx, 31, 0x1169B8u);
    ctx->pc = 0x1169B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169B0u;
    // 0x1169b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1169B0u, 0x1169B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169B8u;
label_1169b8:
    // 0x1169b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1169b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1169bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1169c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1169c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1169c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169c8: 0xc040b06  jal         func_102C18
    ctx->pc = 0x1169C8u;
    SET_GPR_U32(ctx, 31, 0x1169D0u);
    ctx->pc = 0x1169CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169C8u;
    // 0x1169cc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102C18u, 0x1169C8u, 0x1169D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169D0u;
label_1169d0:
    // 0x1169d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1169D0u;
    SET_GPR_U32(ctx, 31, 0x1169D8u);
    ctx->pc = 0x1169D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169D0u;
    // 0x1169d4: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1169D0u, 0x1169D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169D8u;
label_1169d8:
    // 0x1169d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1169D8u;
    SET_GPR_U32(ctx, 31, 0x1169E0u);
    ctx->pc = 0x1169DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169D8u;
    // 0x1169dc: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1169D8u, 0x1169E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169E0u;
label_1169e0:
    // 0x1169e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1169E0u;
    SET_GPR_U32(ctx, 31, 0x1169E8u);
    ctx->pc = 0x1169E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169E0u;
    // 0x1169e4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1169E0u, 0x1169E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169E8u;
label_1169e8:
    // 0x1169e8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1169E8u;
    SET_GPR_U32(ctx, 31, 0x1169F0u);
    ctx->pc = 0x1169ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169E8u;
    // 0x1169ec: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1169E8u, 0x1169F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169F0u;
label_1169f0:
    // 0x1169f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1169f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1169f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169f8: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x1169F8u;
    SET_GPR_U32(ctx, 31, 0x116A00u);
    ctx->pc = 0x1169FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169F8u;
    // 0x1169fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x1169F8u, 0x116A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A00u;
label_116a00:
    // 0x116a00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x116a04: 0x1457ffb4  bne         $v0, $s7, . + 4 + (-0x4C << 2)
    ctx->pc = 0x116A04u;
    {
        const bool branch_taken_0x116a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x116A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A04u;
        // 0x116a08: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a04) {
            ctx->pc = 0x1168D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1168d8;
        }
    }
    ctx->pc = 0x116A0Cu;
label_116a0c:
    // 0x116a0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116a10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x116a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116a18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x116a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116a1c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x116a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116a20: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x116a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116a24: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x116a24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116a28: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x116a28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116a2c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x116a2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116a30: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x116a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116a34: 0x3e00008  jr          $ra
    ctx->pc = 0x116A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A34u;
        // 0x116a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116A3Cu;
}

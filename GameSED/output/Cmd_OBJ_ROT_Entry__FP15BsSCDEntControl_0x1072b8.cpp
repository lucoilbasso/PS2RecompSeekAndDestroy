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

// Function: Cmd_OBJ_ROT_Entry__FP15BsSCDEntControl
// Address: 0x1072b8 - 0x1073dc
void Cmd_OBJ_ROT_Entry__FP15BsSCDEntControl_0x1072b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_ROT_Entry__FP15BsSCDEntControl_0x1072b8");
#endif

    switch (ctx->pc) {
        case 0x1072e8u: goto label_1072e8;
        case 0x1072f4u: goto label_1072f4;
        case 0x107318u: goto label_107318;
        case 0x10732cu: goto label_10732c;
        case 0x107388u: goto label_107388;
        case 0x1073a0u: goto label_1073a0;
        case 0x1073c0u: goto label_1073c0;
        default: break;
    }

    ctx->pc = 0x1072b8u;

    // 0x1072b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1072b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1072bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1072bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1072c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1072c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1072c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1072c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1072c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1072c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1072ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1072d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1072d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1072d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1072d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1072d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1072dc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1072e0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1072E0u;
    SET_GPR_U32(ctx, 31, 0x1072E8u);
    ctx->pc = 0x1072E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072E0u;
    // 0x1072e4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1072E0u, 0x1072E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072E8u;
label_1072e8:
    // 0x1072e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1072e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072ec: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1072ECu;
    SET_GPR_U32(ctx, 31, 0x1072F4u);
    ctx->pc = 0x1072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072ECu;
    // 0x1072f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1072ECu, 0x1072F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072F4u;
label_1072f4:
    // 0x1072f4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1072f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x107300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107304: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107304u;
    {
        const bool branch_taken_0x107304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107304u;
        // 0x107308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107304) {
            ctx->pc = 0x107320u;
            goto label_107320;
        }
    }
    ctx->pc = 0x10730Cu;
    // 0x10730c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107310: 0xc06135e  jal         func_184D78
    ctx->pc = 0x107310u;
    SET_GPR_U32(ctx, 31, 0x107318u);
    ctx->pc = 0x107314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107310u;
    // 0x107314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D78u, 0x107310u, 0x107318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107318u;
label_107318:
    // 0x107318: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x107318u;
    {
        const bool branch_taken_0x107318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107318u;
        // 0x10731c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107318) {
            ctx->pc = 0x1073C4u;
            goto label_1073c4;
        }
    }
    ctx->pc = 0x107320u;
label_107320:
    // 0x107320: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x107320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x107324: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107324u;
    SET_GPR_U32(ctx, 31, 0x10732Cu);
    ctx->pc = 0x107328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107324u;
    // 0x107328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107324u, 0x10732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10732Cu;
label_10732c:
    // 0x10732c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10732cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107334: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107334u;
    {
        const bool branch_taken_0x107334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x107338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107334u;
        // 0x107338: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107334) {
            ctx->pc = 0x107370u;
            goto label_107370;
        }
    }
    ctx->pc = 0x10733Cu;
    // 0x10733c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10733Cu;
    {
        const bool branch_taken_0x10733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10733Cu;
        // 0x107340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10733c) {
            ctx->pc = 0x107358u;
            goto label_107358;
        }
    }
    ctx->pc = 0x107344u;
    // 0x107344: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107344u;
    {
        const bool branch_taken_0x107344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x107348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107344u;
        // 0x107348: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107344) {
            ctx->pc = 0x107368u;
            goto label_107368;
        }
    }
    ctx->pc = 0x10734Cu;
    // 0x10734c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10734Cu;
    {
        const bool branch_taken_0x10734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10734c) {
            ctx->pc = 0x107380u;
            goto label_107380;
        }
    }
    ctx->pc = 0x107354u;
    // 0x107354: 0x0  nop
    ctx->pc = 0x107354u;
    // NOP
label_107358:
    // 0x107358: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107358u;
    {
        const bool branch_taken_0x107358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107358u;
        // 0x10735c: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107358) {
            ctx->pc = 0x107378u;
            goto label_107378;
        }
    }
    ctx->pc = 0x107360u;
    // 0x107360: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107360u;
    {
        const bool branch_taken_0x107360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107360) {
            ctx->pc = 0x107380u;
            goto label_107380;
        }
    }
    ctx->pc = 0x107368u;
label_107368:
    // 0x107368: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107368u;
    {
        const bool branch_taken_0x107368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107368u;
        // 0x10736c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107368) {
            ctx->pc = 0x1073A0u;
            goto label_1073a0;
        }
    }
    ctx->pc = 0x107370u;
label_107370:
    // 0x107370: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107370u;
    {
        const bool branch_taken_0x107370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107370u;
        // 0x107374: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107370) {
            ctx->pc = 0x1073A0u;
            goto label_1073a0;
        }
    }
    ctx->pc = 0x107378u;
label_107378:
    // 0x107378: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x107378u;
    {
        const bool branch_taken_0x107378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107378u;
        // 0x10737c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107378) {
            ctx->pc = 0x1073A0u;
            goto label_1073a0;
        }
    }
    ctx->pc = 0x107380u;
label_107380:
    // 0x107380: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x107380u;
    SET_GPR_U32(ctx, 31, 0x107388u);
    ctx->pc = 0x107384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107380u;
    // 0x107384: 0x24843ad8  addiu       $a0, $a0, 0x3AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x107380u, 0x107388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107388u;
label_107388:
    // 0x107388: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10738c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107390: 0x24a5d150  addiu       $a1, $a1, -0x2EB0
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
    // 0x107394: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x107394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x107398: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x107398u;
    SET_GPR_U32(ctx, 31, 0x1073A0u);
    ctx->pc = 0x10739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107398u;
    // 0x10739c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x107398u, 0x1073A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073A0u;
label_1073a0:
    // 0x1073a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1073a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1073a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1073a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1073a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1073acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1073b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1073b4: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x1073b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x1073b8: 0xc0618da  jal         func_186368
    ctx->pc = 0x1073B8u;
    SET_GPR_U32(ctx, 31, 0x1073C0u);
    ctx->pc = 0x1073BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073B8u;
    // 0x1073bc: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1073B8u, 0x1073C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073C0u;
label_1073c0:
    // 0x1073c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1073c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1073c4:
    // 0x1073c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1073c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1073c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1073c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1073cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1073ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1073d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1073d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1073d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1073D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D4u;
        // 0x1073d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073DCu;
}

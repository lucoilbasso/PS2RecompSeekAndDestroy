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

// Function: Ap2DPanelMotionFunctionSetup__FP15BsSCDEntControlP8WcEntityP11BMotionCtrlii
// Address: 0x1086d8 - 0x109134
void Ap2DPanelMotionFunctionSetup__FP15BsSCDEntControlP8WcEntityP11BMotionCtrlii_0x1086d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ap2DPanelMotionFunctionSetup__FP15BsSCDEntControlP8WcEntityP11BMotionCtrlii_0x1086d8");
#endif

    switch (ctx->pc) {
        case 0x108750u: goto label_108750;
        case 0x108760u: goto label_108760;
        case 0x108784u: goto label_108784;
        case 0x108790u: goto label_108790;
        case 0x108798u: goto label_108798;
        case 0x108800u: goto label_108800;
        case 0x108840u: goto label_108840;
        case 0x108848u: goto label_108848;
        case 0x108878u: goto label_108878;
        case 0x1088c0u: goto label_1088c0;
        case 0x108918u: goto label_108918;
        case 0x108924u: goto label_108924;
        case 0x108960u: goto label_108960;
        case 0x108968u: goto label_108968;
        case 0x10897cu: goto label_10897c;
        case 0x108998u: goto label_108998;
        case 0x1089acu: goto label_1089ac;
        case 0x1089c4u: goto label_1089c4;
        case 0x1089e0u: goto label_1089e0;
        case 0x1089ecu: goto label_1089ec;
        case 0x108a00u: goto label_108a00;
        case 0x108a18u: goto label_108a18;
        case 0x108a30u: goto label_108a30;
        case 0x108a3cu: goto label_108a3c;
        case 0x108a48u: goto label_108a48;
        case 0x108a60u: goto label_108a60;
        case 0x108a70u: goto label_108a70;
        case 0x108ab0u: goto label_108ab0;
        case 0x108ab8u: goto label_108ab8;
        case 0x108ac8u: goto label_108ac8;
        case 0x108ae0u: goto label_108ae0;
        case 0x108aecu: goto label_108aec;
        case 0x108b28u: goto label_108b28;
        case 0x108b30u: goto label_108b30;
        case 0x108b44u: goto label_108b44;
        case 0x108b60u: goto label_108b60;
        case 0x108b6cu: goto label_108b6c;
        case 0x108ba8u: goto label_108ba8;
        case 0x108bb0u: goto label_108bb0;
        case 0x108bc4u: goto label_108bc4;
        case 0x108bd8u: goto label_108bd8;
        case 0x108be4u: goto label_108be4;
        case 0x108c04u: goto label_108c04;
        case 0x108c20u: goto label_108c20;
        case 0x108c2cu: goto label_108c2c;
        case 0x108c90u: goto label_108c90;
        case 0x108ca8u: goto label_108ca8;
        case 0x108cbcu: goto label_108cbc;
        case 0x108ce4u: goto label_108ce4;
        case 0x108ce8u: goto label_108ce8;
        case 0x108d08u: goto label_108d08;
        case 0x108d30u: goto label_108d30;
        case 0x108d4cu: goto label_108d4c;
        case 0x108d68u: goto label_108d68;
        case 0x108d80u: goto label_108d80;
        case 0x108d98u: goto label_108d98;
        case 0x108dacu: goto label_108dac;
        case 0x108dc4u: goto label_108dc4;
        case 0x108de8u: goto label_108de8;
        case 0x108df4u: goto label_108df4;
        case 0x108e18u: goto label_108e18;
        case 0x108e30u: goto label_108e30;
        case 0x108e38u: goto label_108e38;
        case 0x108e44u: goto label_108e44;
        case 0x108e60u: goto label_108e60;
        case 0x108e7cu: goto label_108e7c;
        case 0x108eb0u: goto label_108eb0;
        case 0x108ec0u: goto label_108ec0;
        case 0x108eccu: goto label_108ecc;
        case 0x108ee0u: goto label_108ee0;
        case 0x108ef0u: goto label_108ef0;
        case 0x108efcu: goto label_108efc;
        case 0x108f20u: goto label_108f20;
        case 0x108f24u: goto label_108f24;
        case 0x108f38u: goto label_108f38;
        case 0x108f5cu: goto label_108f5c;
        case 0x108f68u: goto label_108f68;
        case 0x108f78u: goto label_108f78;
        case 0x108f80u: goto label_108f80;
        case 0x108f88u: goto label_108f88;
        case 0x108fe4u: goto label_108fe4;
        case 0x10900cu: goto label_10900c;
        case 0x109018u: goto label_109018;
        case 0x109028u: goto label_109028;
        case 0x109030u: goto label_109030;
        case 0x109038u: goto label_109038;
        case 0x10904cu: goto label_10904c;
        case 0x109064u: goto label_109064;
        case 0x109078u: goto label_109078;
        case 0x109084u: goto label_109084;
        case 0x109098u: goto label_109098;
        case 0x1090a8u: goto label_1090a8;
        case 0x1090b4u: goto label_1090b4;
        case 0x1090d8u: goto label_1090d8;
        case 0x1090dcu: goto label_1090dc;
        case 0x109100u: goto label_109100;
        default: break;
    }

    ctx->pc = 0x1086d8u;

    // 0x1086d8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1086dc: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1086e0: 0x2ce2001d  sltiu       $v0, $a3, 0x1D
    ctx->pc = 0x1086e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x1086e4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1086e8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1086e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1086ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1086ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086f0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1086f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1086f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1086f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086f8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1086f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1086fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1086fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108700: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x108700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x108704: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x108704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x108708: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x108708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x10870c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x10870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x108710: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x108710u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x108714: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x108714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x108718: 0x10400279  beqz        $v0, . + 4 + (0x279 << 2)
    ctx->pc = 0x108718u;
    {
        const bool branch_taken_0x108718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108718u;
        // 0x10871c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108718) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x108720u;
    // 0x108720: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x108720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x108724: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x108728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10872c: 0x8c633b60  lw          $v1, 0x3B60($v1)
    ctx->pc = 0x10872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15200)));
    // 0x108730: 0x600008  jr          $v1
    ctx->pc = 0x108730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108738u: goto label_108738;
            case 0x108758u: goto label_108758;
            case 0x1087F8u: goto label_1087f8;
            case 0x108858u: goto label_108858;
            case 0x108868u: goto label_108868;
            case 0x108888u: goto label_108888;
            case 0x1088A0u: goto label_1088a0;
            case 0x1088D8u: goto label_1088d8;
            case 0x1088F0u: goto label_1088f0;
            case 0x108908u: goto label_108908;
            case 0x108988u: goto label_108988;
            case 0x1089D0u: goto label_1089d0;
            case 0x108A20u: goto label_108a20;
            case 0x108A68u: goto label_108a68;
            case 0x108AD0u: goto label_108ad0;
            case 0x108B50u: goto label_108b50;
            case 0x108BD0u: goto label_108bd0;
            case 0x108BF0u: goto label_108bf0;
            case 0x108C98u: goto label_108c98;
            case 0x108CF8u: goto label_108cf8;
            case 0x108D58u: goto label_108d58;
            case 0x108D88u: goto label_108d88;
            case 0x108E00u: goto label_108e00;
            case 0x108EB8u: goto label_108eb8;
            case 0x108EE8u: goto label_108ee8;
            case 0x108F40u: goto label_108f40;
            case 0x108FF0u: goto label_108ff0;
            case 0x109070u: goto label_109070;
            case 0x1090A0u: goto label_1090a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x108738u;
label_108738:
    // 0x108738: 0x12800271  beqz        $s4, . + 4 + (0x271 << 2)
    ctx->pc = 0x108738u;
    {
        const bool branch_taken_0x108738 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108738u;
        // 0x10873c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108738) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x108740u;
    // 0x108740: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x108740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108748: 0xc068866  jal         func_1A2198
    ctx->pc = 0x108748u;
    SET_GPR_U32(ctx, 31, 0x108750u);
    ctx->pc = 0x10874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108748u;
    // 0x10874c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x108748u, 0x108750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108750u;
label_108750:
    // 0x108750: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x108750u;
    {
        const bool branch_taken_0x108750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108750u;
        // 0x108754: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108750) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108758u;
label_108758:
    // 0x108758: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x108758u;
    SET_GPR_U32(ctx, 31, 0x108760u);
    ctx->pc = 0x10875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108758u;
    // 0x10875c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x108758u, 0x108760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108760u;
label_108760:
    // 0x108760: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108768: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x10876c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108770: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108770u;
    {
        const bool branch_taken_0x108770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x108770) {
            ctx->pc = 0x108790u;
            goto label_108790;
        }
    }
    ctx->pc = 0x108778u;
    // 0x108778: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x108778u;
    {
        const bool branch_taken_0x108778 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108778u;
        // 0x10877c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108778) {
            ctx->pc = 0x108784u;
            goto label_108784;
        }
    }
    ctx->pc = 0x108780u;
    // 0x108780: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x108780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_108784:
    // 0x108784: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x108784u;
    {
        const bool branch_taken_0x108784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108784u;
        // 0x108788: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108784) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x10878Cu;
    // 0x10878c: 0x0  nop
    ctx->pc = 0x10878cu;
    // NOP
label_108790:
    // 0x108790: 0xc0691f6  jal         func_1A47D8
    ctx->pc = 0x108790u;
    SET_GPR_U32(ctx, 31, 0x108798u);
    ctx->pc = 0x108794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108790u;
    // 0x108794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47D8u, 0x108790u, 0x108798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108798u;
label_108798:
    // 0x108798: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x108798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10879c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10879cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1087a0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1087a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1087a4: 0x3401fff9  ori         $at, $zero, 0xFFF9
    ctx->pc = 0x1087a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1087a8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1087ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1087acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1087b0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1087b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1087b4: 0x50400252  beql        $v0, $zero, . + 4 + (0x252 << 2)
    ctx->pc = 0x1087B4u;
    {
        const bool branch_taken_0x1087b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1087b4) {
            ctx->pc = 0x1087B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087B4u;
            // 0x1087b8: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x1087BCu;
    // 0x1087bc: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x1087bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1087c0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1087c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1087c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1087C4u;
    {
        const bool branch_taken_0x1087c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087C4u;
        // 0x1087c8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087c4) {
            ctx->pc = 0x1087DCu;
            goto label_1087dc;
        }
    }
    ctx->pc = 0x1087CCu;
    // 0x1087cc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1087ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1087d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1087d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1087d4: 0x5440024a  bnel        $v0, $zero, . + 4 + (0x24A << 2)
    ctx->pc = 0x1087D4u;
    {
        const bool branch_taken_0x1087d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1087d4) {
            ctx->pc = 0x1087D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087D4u;
            // 0x1087d8: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x1087DCu;
label_1087dc:
    // 0x1087dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1087dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1087e0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1087e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1087e4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1087e4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1087e8: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x1087e8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1087ec: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    // 0x1087f0: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x1087F0u;
    {
        const bool branch_taken_0x1087f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F0u;
        // 0x1087f4: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087f0) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x1087F8u;
label_1087f8:
    // 0x1087f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1087F8u;
    SET_GPR_U32(ctx, 31, 0x108800u);
    ctx->pc = 0x1087FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087F8u;
    // 0x1087fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1087F8u, 0x108800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108800u;
label_108800:
    // 0x108800: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108800u;
    {
        const bool branch_taken_0x108800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108800u;
        // 0x108804: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108800) {
            ctx->pc = 0x108840u;
            goto label_108840;
        }
    }
    ctx->pc = 0x108808u;
    // 0x108808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10880c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108810: 0xc7818010  lwc1        $f1, -0x7FF0($gp)
    ctx->pc = 0x108810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108814: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108818: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10881c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10881cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108820: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108824: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108828: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10882c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x10882cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108830: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108834u;
    {
        const bool branch_taken_0x108834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108834u;
        // 0x108838: 0x8e83007c  lw          $v1, 0x7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108834) {
            ctx->pc = 0x108848u;
            goto label_108848;
        }
    }
    ctx->pc = 0x10883Cu;
    // 0x10883c: 0x0  nop
    ctx->pc = 0x10883cu;
    // NOP
label_108840:
    // 0x108840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108844: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x108844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
label_108848:
    // 0x108848: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10884c: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x10884Cu;
    {
        const bool branch_taken_0x10884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10884Cu;
        // 0x108850: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10884c) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x108854u;
    // 0x108854: 0x0  nop
    ctx->pc = 0x108854u;
    // NOP
label_108858:
    // 0x108858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10885c: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x10885Cu;
    {
        const bool branch_taken_0x10885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10885Cu;
        // 0x108860: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10885c) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x108864u;
    // 0x108864: 0x0  nop
    ctx->pc = 0x108864u;
    // NOP
label_108868:
    // 0x108868: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10886c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108870: 0xc042144  jal         func_108510
    ctx->pc = 0x108870u;
    SET_GPR_U32(ctx, 31, 0x108878u);
    ctx->pc = 0x108874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108870u;
    // 0x108874: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108870u, 0x108878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108878u;
label_108878:
    // 0x108878: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x108878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x10887c: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x10887Cu;
    {
        const bool branch_taken_0x10887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10887Cu;
        // 0x108880: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10887c) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x108884u;
    // 0x108884: 0x0  nop
    ctx->pc = 0x108884u;
    // NOP
label_108888:
    // 0x108888: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x108888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x10888c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x10888cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x108890: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x108890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x108894: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x108894u;
    {
        const bool branch_taken_0x108894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108894u;
        // 0x108898: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108894) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x10889Cu;
    // 0x10889c: 0x0  nop
    ctx->pc = 0x10889cu;
    // NOP
label_1088a0:
    // 0x1088a0: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x1088a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1088a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1088a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1088a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1088A8u;
    {
        const bool branch_taken_0x1088a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1088ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088A8u;
        // 0x1088ac: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088a8) {
            ctx->pc = 0x1088C0u;
            goto label_1088c0;
        }
    }
    ctx->pc = 0x1088B0u;
    // 0x1088b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1088b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1088b4: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x1088b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1088b8: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x1088b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1088bc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1088bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1088c0:
    // 0x1088c0: 0x14620210  bne         $v1, $v0, . + 4 + (0x210 << 2)
    ctx->pc = 0x1088C0u;
    {
        const bool branch_taken_0x1088c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1088C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088C0u;
        // 0x1088c4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088c0) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x1088C8u;
    // 0x1088c8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1088cc: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x1088CCu;
    {
        const bool branch_taken_0x1088cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088CCu;
        // 0x1088d0: 0xa6820008  sh          $v0, 0x8($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088cc) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x1088D4u;
    // 0x1088d4: 0x0  nop
    ctx->pc = 0x1088d4u;
    // NOP
label_1088d8:
    // 0x1088d8: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x1088dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1088dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1088e0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1088e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1088e4: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x1088E4u;
    {
        const bool branch_taken_0x1088e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088E4u;
        // 0x1088e8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088e4) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x1088ECu;
    // 0x1088ec: 0x0  nop
    ctx->pc = 0x1088ecu;
    // NOP
label_1088f0:
    // 0x1088f0: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x1088f4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1088f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1088f8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1088f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1088fc: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1088FCu;
    {
        const bool branch_taken_0x1088fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088FCu;
        // 0x108900: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088fc) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x108904u;
    // 0x108904: 0x0  nop
    ctx->pc = 0x108904u;
    // NOP
label_108908:
    // 0x108908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10890c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108910: 0xc042144  jal         func_108510
    ctx->pc = 0x108910u;
    SET_GPR_U32(ctx, 31, 0x108918u);
    ctx->pc = 0x108914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108910u;
    // 0x108914: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108910u, 0x108918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108918u;
label_108918:
    // 0x108918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10891c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10891Cu;
    SET_GPR_U32(ctx, 31, 0x108924u);
    ctx->pc = 0x108920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10891Cu;
    // 0x108920: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10891Cu, 0x108924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108924u;
label_108924:
    // 0x108924: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108924u;
    {
        const bool branch_taken_0x108924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108924u;
        // 0x108928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108924) {
            ctx->pc = 0x108960u;
            goto label_108960;
        }
    }
    ctx->pc = 0x10892Cu;
    // 0x10892c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10892cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108930: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108934: 0xc7818014  lwc1        $f1, -0x7FEC($gp)
    ctx->pc = 0x108934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108938: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10893c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10893cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108944: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108948: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10894c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10894cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108950: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108950u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108954: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108958u;
    {
        const bool branch_taken_0x108958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108958u;
        // 0x10895c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108958) {
            ctx->pc = 0x108968u;
            goto label_108968;
        }
    }
    ctx->pc = 0x108960u;
label_108960:
    // 0x108960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108964: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108968:
    // 0x108968: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10896c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10896cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x108970: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108974: 0xc06927c  jal         func_1A49F0
    ctx->pc = 0x108974u;
    SET_GPR_U32(ctx, 31, 0x10897Cu);
    ctx->pc = 0x108978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108974u;
    // 0x108978: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49F0u, 0x108974u, 0x10897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10897Cu;
label_10897c:
    // 0x10897c: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x10897Cu;
    {
        const bool branch_taken_0x10897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10897Cu;
        // 0x108980: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10897c) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108984u;
    // 0x108984: 0x0  nop
    ctx->pc = 0x108984u;
    // NOP
label_108988:
    // 0x108988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10898c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108990: 0xc042144  jal         func_108510
    ctx->pc = 0x108990u;
    SET_GPR_U32(ctx, 31, 0x108998u);
    ctx->pc = 0x108994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108990u;
    // 0x108994: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108990u, 0x108998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108998u;
label_108998:
    // 0x108998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10899c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10899cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1089a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089a4: 0xc042144  jal         func_108510
    ctx->pc = 0x1089A4u;
    SET_GPR_U32(ctx, 31, 0x1089ACu);
    ctx->pc = 0x1089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089A4u;
    // 0x1089a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x1089A4u, 0x1089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089ACu;
label_1089ac:
    // 0x1089ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1089acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1089b0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1089b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x1089b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1089b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1089b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089bc: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x1089BCu;
    SET_GPR_U32(ctx, 31, 0x1089C4u);
    ctx->pc = 0x1089C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089BCu;
    // 0x1089c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x1089BCu, 0x1089C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089C4u;
label_1089c4:
    // 0x1089c4: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x1089C4u;
    {
        const bool branch_taken_0x1089c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089C4u;
        // 0x1089c8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089c4) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x1089CCu;
    // 0x1089cc: 0x0  nop
    ctx->pc = 0x1089ccu;
    // NOP
label_1089d0:
    // 0x1089d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1089d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1089d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d8: 0xc042144  jal         func_108510
    ctx->pc = 0x1089D8u;
    SET_GPR_U32(ctx, 31, 0x1089E0u);
    ctx->pc = 0x1089DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089D8u;
    // 0x1089dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x1089D8u, 0x1089E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089E0u;
label_1089e0:
    // 0x1089e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1089e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089e4: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x1089E4u;
    SET_GPR_U32(ctx, 31, 0x1089ECu);
    ctx->pc = 0x1089E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089E4u;
    // 0x1089e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x1089E4u, 0x1089ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089ECu;
label_1089ec:
    // 0x1089ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1089ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1089f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1089f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f8: 0xc042144  jal         func_108510
    ctx->pc = 0x1089F8u;
    SET_GPR_U32(ctx, 31, 0x108A00u);
    ctx->pc = 0x1089FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089F8u;
    // 0x1089fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x1089F8u, 0x108A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A00u;
label_108a00:
    // 0x108a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a08: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108a08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108a0c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108a0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x108a10: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x108A10u;
    SET_GPR_U32(ctx, 31, 0x108A18u);
    ctx->pc = 0x108A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A10u;
    // 0x108a14: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x108A10u, 0x108A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A18u;
label_108a18:
    // 0x108a18: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x108A18u;
    {
        const bool branch_taken_0x108a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A18u;
        // 0x108a1c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a18) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108A20u;
label_108a20:
    // 0x108a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a28: 0xc042144  jal         func_108510
    ctx->pc = 0x108A28u;
    SET_GPR_U32(ctx, 31, 0x108A30u);
    ctx->pc = 0x108A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A28u;
    // 0x108a2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108A28u, 0x108A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A30u;
label_108a30:
    // 0x108a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a34: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x108A34u;
    SET_GPR_U32(ctx, 31, 0x108A3Cu);
    ctx->pc = 0x108A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A34u;
    // 0x108a38: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x108A34u, 0x108A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A3Cu;
label_108a3c:
    // 0x108a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a40: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x108A40u;
    SET_GPR_U32(ctx, 31, 0x108A48u);
    ctx->pc = 0x108A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A40u;
    // 0x108a44: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x108A40u, 0x108A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A48u;
label_108a48:
    // 0x108a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a50: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108a54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108a54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x108a58: 0xc069310  jal         func_1A4C40
    ctx->pc = 0x108A58u;
    SET_GPR_U32(ctx, 31, 0x108A60u);
    ctx->pc = 0x108A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A58u;
    // 0x108a5c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C40u, 0x108A58u, 0x108A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A60u;
label_108a60:
    // 0x108a60: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x108A60u;
    {
        const bool branch_taken_0x108a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A60u;
        // 0x108a64: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a60) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108A68u;
label_108a68:
    // 0x108a68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108A68u;
    SET_GPR_U32(ctx, 31, 0x108A70u);
    ctx->pc = 0x108A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A68u;
    // 0x108a6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108A68u, 0x108A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A70u;
label_108a70:
    // 0x108a70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108A70u;
    {
        const bool branch_taken_0x108a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A70u;
        // 0x108a74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a70) {
            ctx->pc = 0x108AB0u;
            goto label_108ab0;
        }
    }
    ctx->pc = 0x108A78u;
    // 0x108a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108a80: 0xc7818018  lwc1        $f1, -0x7FE8($gp)
    ctx->pc = 0x108a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108a84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108a88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108a8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108a90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108a94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108a98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108a9c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108a9cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108aa0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108AA4u;
    {
        const bool branch_taken_0x108aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AA4u;
        // 0x108aa8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aa4) {
            ctx->pc = 0x108AB8u;
            goto label_108ab8;
        }
    }
    ctx->pc = 0x108AACu;
    // 0x108aac: 0x0  nop
    ctx->pc = 0x108aacu;
    // NOP
label_108ab0:
    // 0x108ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ab4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108ab8:
    // 0x108ab8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108abc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ac0: 0xc0693b2  jal         func_1A4EC8
    ctx->pc = 0x108AC0u;
    SET_GPR_U32(ctx, 31, 0x108AC8u);
    ctx->pc = 0x108AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AC0u;
    // 0x108ac4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4EC8u, 0x108AC0u, 0x108AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AC8u;
label_108ac8:
    // 0x108ac8: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x108AC8u;
    {
        const bool branch_taken_0x108ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AC8u;
        // 0x108acc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ac8) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108AD0u;
label_108ad0:
    // 0x108ad0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad8: 0xc042144  jal         func_108510
    ctx->pc = 0x108AD8u;
    SET_GPR_U32(ctx, 31, 0x108AE0u);
    ctx->pc = 0x108ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AD8u;
    // 0x108adc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108AD8u, 0x108AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AE0u;
label_108ae0:
    // 0x108ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ae4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108AE4u;
    SET_GPR_U32(ctx, 31, 0x108AECu);
    ctx->pc = 0x108AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AE4u;
    // 0x108ae8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108AE4u, 0x108AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AECu;
label_108aec:
    // 0x108aec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108AECu;
    {
        const bool branch_taken_0x108aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AECu;
        // 0x108af0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aec) {
            ctx->pc = 0x108B28u;
            goto label_108b28;
        }
    }
    ctx->pc = 0x108AF4u;
    // 0x108af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108afc: 0xc781801c  lwc1        $f1, -0x7FE4($gp)
    ctx->pc = 0x108afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108b00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108b04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108b0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108b14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108b18: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108b18u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108b1c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108b20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108B20u;
    {
        const bool branch_taken_0x108b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B20u;
        // 0x108b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b20) {
            ctx->pc = 0x108B30u;
            goto label_108b30;
        }
    }
    ctx->pc = 0x108B28u;
label_108b28:
    // 0x108b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108b30:
    // 0x108b30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x108b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x108b38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xc069402  jal         func_1A5008
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B3Cu;
    // 0x108b40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5008u, 0x108B3Cu, 0x108B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x108B44u;
    {
        const bool branch_taken_0x108b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B44u;
        // 0x108b48: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b44) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108B4Cu;
    // 0x108b4c: 0x0  nop
    ctx->pc = 0x108b4cu;
    // NOP
label_108b50:
    // 0x108b50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b58: 0xc042144  jal         func_108510
    ctx->pc = 0x108B58u;
    SET_GPR_U32(ctx, 31, 0x108B60u);
    ctx->pc = 0x108B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B58u;
    // 0x108b5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108B58u, 0x108B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B60u;
label_108b60:
    // 0x108b60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b64: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108B64u;
    SET_GPR_U32(ctx, 31, 0x108B6Cu);
    ctx->pc = 0x108B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B64u;
    // 0x108b68: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108B64u, 0x108B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B6Cu;
label_108b6c:
    // 0x108b6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108B6Cu;
    {
        const bool branch_taken_0x108b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B6Cu;
        // 0x108b70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b6c) {
            ctx->pc = 0x108BA8u;
            goto label_108ba8;
        }
    }
    ctx->pc = 0x108B74u;
    // 0x108b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108b78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108b7c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x108b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108b80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108b84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108b88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108b8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108b90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108b94: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108b98: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108b98u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108b9c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108BA0u;
    {
        const bool branch_taken_0x108ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BA0u;
        // 0x108ba4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ba0) {
            ctx->pc = 0x108BB0u;
            goto label_108bb0;
        }
    }
    ctx->pc = 0x108BA8u;
label_108ba8:
    // 0x108ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108bb0:
    // 0x108bb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x108bb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x108bb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bbc: 0xc06945c  jal         func_1A5170
    ctx->pc = 0x108BBCu;
    SET_GPR_U32(ctx, 31, 0x108BC4u);
    ctx->pc = 0x108BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BBCu;
    // 0x108bc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5170u, 0x108BBCu, 0x108BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BC4u;
label_108bc4:
    // 0x108bc4: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x108BC4u;
    {
        const bool branch_taken_0x108bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BC4u;
        // 0x108bc8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bc4) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108BCCu;
    // 0x108bcc: 0x0  nop
    ctx->pc = 0x108bccu;
    // NOP
label_108bd0:
    // 0x108bd0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x108BD0u;
    SET_GPR_U32(ctx, 31, 0x108BD8u);
    ctx->pc = 0x108BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BD0u;
    // 0x108bd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x108BD0u, 0x108BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BD8u;
label_108bd8:
    // 0x108bd8: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x108bdc: 0xc0694bc  jal         func_1A52F0
    ctx->pc = 0x108BDCu;
    SET_GPR_U32(ctx, 31, 0x108BE4u);
    ctx->pc = 0x108BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BDCu;
    // 0x108be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A52F0u, 0x108BDCu, 0x108BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BE4u;
label_108be4:
    // 0x108be4: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x108BE4u;
    {
        const bool branch_taken_0x108be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BE4u;
        // 0x108be8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108be4) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108BECu;
    // 0x108bec: 0x0  nop
    ctx->pc = 0x108becu;
    // NOP
label_108bf0:
    // 0x108bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf8: 0xc7968024  lwc1        $f22, -0x7FDC($gp)
    ctx->pc = 0x108bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x108bfc: 0xc042144  jal         func_108510
    ctx->pc = 0x108BFCu;
    SET_GPR_U32(ctx, 31, 0x108C04u);
    ctx->pc = 0x108C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BFCu;
    // 0x108c00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108BFCu, 0x108C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C04u;
label_108c04:
    // 0x108c04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108c08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x108c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x108c0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x108c0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x108c10: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x108c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c14: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x108c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c18: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x108c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108c1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108c20:
    // 0x108c20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c24: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108C24u;
    SET_GPR_U32(ctx, 31, 0x108C2Cu);
    ctx->pc = 0x108C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C24u;
    // 0x108c28: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108C24u, 0x108C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C2Cu;
label_108c2c:
    // 0x108c2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108C2Cu;
    {
        const bool branch_taken_0x108c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C2Cu;
        // 0x108c30: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c2c) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108C34u;
    // 0x108c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108c3c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x108c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x108c40: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x108c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x108c44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108c48: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108c4c: 0x705210c8  pmaxw       $v0, $v0, $s2
    ctx->pc = 0x108c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x108c50: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108C54u;
    {
        const bool branch_taken_0x108c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C54u;
        // 0x108c58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c54) {
            ctx->pc = 0x108C68u;
            goto label_108c68;
        }
    }
    ctx->pc = 0x108C5Cu;
    // 0x108c5c: 0x0  nop
    ctx->pc = 0x108c5cu;
    // NOP
label_108c60:
    // 0x108c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x108c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_108c68:
    // 0x108c68: 0x1e20ffed  bgtz        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x108C68u;
    {
        const bool branch_taken_0x108c68 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x108C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C68u;
        // 0x108c6c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c68) {
            ctx->pc = 0x108C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108c20;
        }
    }
    ctx->pc = 0x108C70u;
    // 0x108c70: 0x8ec9000c  lw          $t1, 0xC($s6)
    ctx->pc = 0x108c70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x108c74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c78: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x108c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x108c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c80: 0x8ec70004  lw          $a3, 0x4($s6)
    ctx->pc = 0x108c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x108c84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108c84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108c88: 0xc06948a  jal         func_1A5228
    ctx->pc = 0x108C88u;
    SET_GPR_U32(ctx, 31, 0x108C90u);
    ctx->pc = 0x108C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C88u;
    // 0x108c8c: 0x8ec80008  lw          $t0, 0x8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5228u, 0x108C88u, 0x108C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C90u;
label_108c90:
    // 0x108c90: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x108C90u;
    {
        const bool branch_taken_0x108c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C90u;
        // 0x108c94: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c90) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108C98u;
label_108c98:
    // 0x108c98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ca0: 0xc042144  jal         func_108510
    ctx->pc = 0x108CA0u;
    SET_GPR_U32(ctx, 31, 0x108CA8u);
    ctx->pc = 0x108CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CA0u;
    // 0x108ca4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108CA0u, 0x108CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CA8u;
label_108ca8:
    // 0x108ca8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cb4: 0xc042144  jal         func_108510
    ctx->pc = 0x108CB4u;
    SET_GPR_U32(ctx, 31, 0x108CBCu);
    ctx->pc = 0x108CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CB4u;
    // 0x108cb8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108CB4u, 0x108CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CBCu;
label_108cbc:
    // 0x108cbc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108cc0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108cc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x108cc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x108cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108cd0: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108CD0u;
    {
        const bool branch_taken_0x108cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x108CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CD0u;
        // 0x108cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cd0) {
            ctx->pc = 0x108CE8u;
            goto label_108ce8;
        }
    }
    ctx->pc = 0x108CD8u;
    // 0x108cd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cdc: 0xc042144  jal         func_108510
    ctx->pc = 0x108CDCu;
    SET_GPR_U32(ctx, 31, 0x108CE4u);
    ctx->pc = 0x108CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CDCu;
    // 0x108ce0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108CDCu, 0x108CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CE4u;
label_108ce4:
    // 0x108ce4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108ce8:
    // 0x108ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x108CECu;
    {
        const bool branch_taken_0x108cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CECu;
        // 0x108cf0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cec) {
            ctx->pc = 0x108D40u;
            goto label_108d40;
        }
    }
    ctx->pc = 0x108CF4u;
    // 0x108cf4: 0x0  nop
    ctx->pc = 0x108cf4u;
    // NOP
label_108cf8:
    // 0x108cf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d00: 0xc042144  jal         func_108510
    ctx->pc = 0x108D00u;
    SET_GPR_U32(ctx, 31, 0x108D08u);
    ctx->pc = 0x108D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D00u;
    // 0x108d04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D00u, 0x108D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D08u;
label_108d08:
    // 0x108d08: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108d0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108d10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x108d10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x108d14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108d1c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108D1Cu;
    {
        const bool branch_taken_0x108d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x108D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D1Cu;
        // 0x108d20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d1c) {
            ctx->pc = 0x108D30u;
            goto label_108d30;
        }
    }
    ctx->pc = 0x108D24u;
    // 0x108d24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d28: 0xc042144  jal         func_108510
    ctx->pc = 0x108D28u;
    SET_GPR_U32(ctx, 31, 0x108D30u);
    ctx->pc = 0x108D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D28u;
    // 0x108d2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D28u, 0x108D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D30u;
label_108d30:
    // 0x108d30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x108d34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108d38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_108d40:
    // 0x108d40: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x108d44: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x108D44u;
    SET_GPR_U32(ctx, 31, 0x108D4Cu);
    ctx->pc = 0x108D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D44u;
    // 0x108d48: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x108D44u, 0x108D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D4Cu;
label_108d4c:
    // 0x108d4c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D4Cu;
        // 0x108d50: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0x0  nop
    ctx->pc = 0x108d54u;
    // NOP
label_108d58:
    // 0x108d58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d60: 0xc042144  jal         func_108510
    ctx->pc = 0x108D60u;
    SET_GPR_U32(ctx, 31, 0x108D68u);
    ctx->pc = 0x108D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D60u;
    // 0x108d64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D60u, 0x108D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D68u;
label_108d68:
    // 0x108d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108d6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d74: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x108d74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x108d78: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x108D78u;
    SET_GPR_U32(ctx, 31, 0x108D80u);
    ctx->pc = 0x108D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D78u;
    // 0x108d7c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x108D78u, 0x108D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D80u;
label_108d80:
    // 0x108d80: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x108D80u;
    {
        const bool branch_taken_0x108d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D80u;
        // 0x108d84: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d80) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108D88u;
label_108d88:
    // 0x108d88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d90: 0xc042144  jal         func_108510
    ctx->pc = 0x108D90u;
    SET_GPR_U32(ctx, 31, 0x108D98u);
    ctx->pc = 0x108D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D90u;
    // 0x108d94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D90u, 0x108D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D98u;
label_108d98:
    // 0x108d98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108da0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108da4: 0xc042144  jal         func_108510
    ctx->pc = 0x108DA4u;
    SET_GPR_U32(ctx, 31, 0x108DACu);
    ctx->pc = 0x108DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DA4u;
    // 0x108da8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108DA4u, 0x108DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DACu;
label_108dac:
    // 0x108dac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108db0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x108db0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x108db4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108db8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dbc: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x108DBCu;
    SET_GPR_U32(ctx, 31, 0x108DC4u);
    ctx->pc = 0x108DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DBCu;
    // 0x108dc0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x108DBCu, 0x108DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DC4u;
label_108dc4:
    // 0x108dc4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x108dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108dc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108dd0: 0x104400cc  beq         $v0, $a0, . + 4 + (0xCC << 2)
    ctx->pc = 0x108DD0u;
    {
        const bool branch_taken_0x108dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x108DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DD0u;
        // 0x108dd4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dd0) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108DD8u;
    // 0x108dd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ddc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108de0: 0xc042144  jal         func_108510
    ctx->pc = 0x108DE0u;
    SET_GPR_U32(ctx, 31, 0x108DE8u);
    ctx->pc = 0x108DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DE0u;
    // 0x108de4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108DE0u, 0x108DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DE8u;
label_108de8:
    // 0x108de8: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x108de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x108dec: 0xc0694f4  jal         func_1A53D0
    ctx->pc = 0x108DECu;
    SET_GPR_U32(ctx, 31, 0x108DF4u);
    ctx->pc = 0x108DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DECu;
    // 0x108df0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53D0u, 0x108DECu, 0x108DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF4u;
label_108df4:
    // 0x108df4: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF4u;
        // 0x108df8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108df4) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108DFCu;
    // 0x108dfc: 0x0  nop
    ctx->pc = 0x108dfcu;
    // NOP
label_108e00:
    // 0x108e00: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x108e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x108e04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e10: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108E10u;
    SET_GPR_U32(ctx, 31, 0x108E18u);
    ctx->pc = 0x108E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E10u;
    // 0x108e14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108E10u, 0x108E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E18u;
label_108e18:
    // 0x108e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e1c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x108e20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e28: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108E28u;
    SET_GPR_U32(ctx, 31, 0x108E30u);
    ctx->pc = 0x108E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E28u;
    // 0x108e2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108E28u, 0x108E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E30u;
label_108e30:
    // 0x108e30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E30u;
    SET_GPR_U32(ctx, 31, 0x108E38u);
    ctx->pc = 0x108E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E30u;
    // 0x108e34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E30u, 0x108E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E38u;
label_108e38:
    // 0x108e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E3Cu;
    SET_GPR_U32(ctx, 31, 0x108E44u);
    ctx->pc = 0x108E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E3Cu;
    // 0x108e40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E3Cu, 0x108E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E44u;
label_108e44:
    // 0x108e44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e48: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x108e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108e4c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x108e4cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x108e50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x108e50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x108e54: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x108e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x108e58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E58u;
    SET_GPR_U32(ctx, 31, 0x108E60u);
    ctx->pc = 0x108E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E58u;
    // 0x108e5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E58u, 0x108E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E60u;
label_108e60:
    // 0x108e60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108e60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e64: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x108e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108e68: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x108e68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x108e6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x108e6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x108e70: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x108e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x108e74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E74u;
    SET_GPR_U32(ctx, 31, 0x108E7Cu);
    ctx->pc = 0x108E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E74u;
    // 0x108e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E74u, 0x108E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E7Cu;
label_108e7c:
    // 0x108e7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e80: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x108e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108e84: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x108e84u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x108e88: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x108e88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x108e8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x108e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x108e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x108e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ea0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x108ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ea4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108ea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108ea8: 0xc0694fe  jal         func_1A53F8
    ctx->pc = 0x108EA8u;
    SET_GPR_U32(ctx, 31, 0x108EB0u);
    ctx->pc = 0x108EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EA8u;
    // 0x108eac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53F8u, 0x108EA8u, 0x108EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EB0u;
label_108eb0:
    // 0x108eb0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x108EB0u;
    {
        const bool branch_taken_0x108eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EB0u;
        // 0x108eb4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108eb0) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108EB8u;
label_108eb8:
    // 0x108eb8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x108EB8u;
    SET_GPR_U32(ctx, 31, 0x108EC0u);
    ctx->pc = 0x108EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EB8u;
    // 0x108ebc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x108EB8u, 0x108EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EC0u;
label_108ec0:
    // 0x108ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ec4: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x108EC4u;
    SET_GPR_U32(ctx, 31, 0x108ECCu);
    ctx->pc = 0x108EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC4u;
    // 0x108ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x108EC4u, 0x108ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108ECCu;
label_108ecc:
    // 0x108ecc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ed0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ed4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ed8: 0xc06956a  jal         func_1A55A8
    ctx->pc = 0x108ED8u;
    SET_GPR_U32(ctx, 31, 0x108EE0u);
    ctx->pc = 0x108EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108ED8u;
    // 0x108edc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A55A8u, 0x108ED8u, 0x108EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EE0u;
label_108ee0:
    // 0x108ee0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x108EE0u;
    {
        const bool branch_taken_0x108ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE0u;
        // 0x108ee4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ee0) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108EE8u;
label_108ee8:
    // 0x108ee8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x108EE8u;
    SET_GPR_U32(ctx, 31, 0x108EF0u);
    ctx->pc = 0x108EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EE8u;
    // 0x108eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x108EE8u, 0x108EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EF0u;
label_108ef0:
    // 0x108ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ef4: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x108EF4u;
    SET_GPR_U32(ctx, 31, 0x108EFCu);
    ctx->pc = 0x108EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EF4u;
    // 0x108ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x108EF4u, 0x108EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EFCu;
label_108efc:
    // 0x108efc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x108efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f04: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108f08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108f0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108f10: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108F10u;
    {
        const bool branch_taken_0x108f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x108f10) {
            ctx->pc = 0x108F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F10u;
            // 0x108f14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108F18u;
    // 0x108f18: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x108F18u;
    SET_GPR_U32(ctx, 31, 0x108F20u);
    ctx->pc = 0x108F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F18u;
    // 0x108f1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x108F18u, 0x108F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F20u;
label_108f20:
    // 0x108f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108f24:
    // 0x108f24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x108f2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x108f30: 0xc069592  jal         func_1A5648
    ctx->pc = 0x108F30u;
    SET_GPR_U32(ctx, 31, 0x108F38u);
    ctx->pc = 0x108F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F30u;
    // 0x108f34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5648u, 0x108F30u, 0x108F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F38u;
label_108f38:
    // 0x108f38: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x108F38u;
    {
        const bool branch_taken_0x108f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F38u;
        // 0x108f3c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f38) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108F40u;
label_108f40:
    // 0x108f40: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x108f44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108F44u;
    {
        const bool branch_taken_0x108f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F44u;
        // 0x108f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f44) {
            ctx->pc = 0x108F68u;
            goto label_108f68;
        }
    }
    ctx->pc = 0x108F4Cu;
    // 0x108f4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108f54: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108F54u;
    SET_GPR_U32(ctx, 31, 0x108F5Cu);
    ctx->pc = 0x108F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F54u;
    // 0x108f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108F54u, 0x108F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F5Cu;
label_108f5c:
    // 0x108f5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108F5Cu;
    {
        const bool branch_taken_0x108f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f5c) {
            ctx->pc = 0x108F80u;
            goto label_108f80;
        }
    }
    ctx->pc = 0x108F64u;
    // 0x108f64: 0x0  nop
    ctx->pc = 0x108f64u;
    // NOP
label_108f68:
    // 0x108f68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x108f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108f70: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108F70u;
    SET_GPR_U32(ctx, 31, 0x108F78u);
    ctx->pc = 0x108F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F70u;
    // 0x108f74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108F70u, 0x108F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F78u;
label_108f78:
    // 0x108f78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108F78u;
    SET_GPR_U32(ctx, 31, 0x108F80u);
    ctx->pc = 0x108F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F78u;
    // 0x108f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108F78u, 0x108F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F80u;
label_108f80:
    // 0x108f80: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108F80u;
    SET_GPR_U32(ctx, 31, 0x108F88u);
    ctx->pc = 0x108F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F80u;
    // 0x108f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108F80u, 0x108F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F88u;
label_108f88:
    // 0x108f88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108FC8u;
            goto label_108fc8;
        }
    }
    ctx->pc = 0x108F90u;
    // 0x108f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108f98: 0xc781802c  lwc1        $f1, -0x7FD4($gp)
    ctx->pc = 0x108f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108f9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108fa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108fa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108fa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108fac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108fb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108fb4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108fb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108fb8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108FBCu;
    {
        const bool branch_taken_0x108fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FBCu;
        // 0x108fc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fbc) {
            ctx->pc = 0x108FD0u;
            goto label_108fd0;
        }
    }
    ctx->pc = 0x108FC4u;
    // 0x108fc4: 0x0  nop
    ctx->pc = 0x108fc4u;
    // NOP
label_108fc8:
    // 0x108fc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108fd0:
    // 0x108fd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fd4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x108fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108fd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x108fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fdc: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x108FDCu;
    SET_GPR_U32(ctx, 31, 0x108FE4u);
    ctx->pc = 0x108FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108FDCu;
    // 0x108fe0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x108FDCu, 0x108FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108FE4u;
label_108fe4:
    // 0x108fe4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x108FE4u;
    {
        const bool branch_taken_0x108fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FE4u;
        // 0x108fe8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fe4) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x108FECu;
    // 0x108fec: 0x0  nop
    ctx->pc = 0x108fecu;
    // NOP
label_108ff0:
    // 0x108ff0: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x108ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x108ff4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108FF4u;
    {
        const bool branch_taken_0x108ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF4u;
        // 0x108ff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ff4) {
            ctx->pc = 0x109018u;
            goto label_109018;
        }
    }
    ctx->pc = 0x108FFCu;
    // 0x108ffc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109000: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x109000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109004: 0xc042170  jal         func_1085C0
    ctx->pc = 0x109004u;
    SET_GPR_U32(ctx, 31, 0x10900Cu);
    ctx->pc = 0x109008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109004u;
    // 0x109008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x109004u, 0x10900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10900Cu;
    {
        const bool branch_taken_0x10900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10900c) {
            ctx->pc = 0x109030u;
            goto label_109030;
        }
    }
    ctx->pc = 0x109014u;
    // 0x109014: 0x0  nop
    ctx->pc = 0x109014u;
    // NOP
label_109018:
    // 0x109018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10901c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x10901cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109020: 0xc042170  jal         func_1085C0
    ctx->pc = 0x109020u;
    SET_GPR_U32(ctx, 31, 0x109028u);
    ctx->pc = 0x109024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109020u;
    // 0x109024: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x109020u, 0x109028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109028u;
label_109028:
    // 0x109028: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109028u;
    SET_GPR_U32(ctx, 31, 0x109030u);
    ctx->pc = 0x10902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109028u;
    // 0x10902c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109028u, 0x109030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109030u;
label_109030:
    // 0x109030: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x109030u;
    SET_GPR_U32(ctx, 31, 0x109038u);
    ctx->pc = 0x109034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109030u;
    // 0x109034: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x109030u, 0x109038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109038u;
label_109038:
    // 0x109038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x109038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10903c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109040: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x109040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109044: 0xc042144  jal         func_108510
    ctx->pc = 0x109044u;
    SET_GPR_U32(ctx, 31, 0x10904Cu);
    ctx->pc = 0x109048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109044u;
    // 0x109048: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x109044u, 0x10904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10904Cu;
label_10904c:
    // 0x10904c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x10904cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x109050: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x109050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x109054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109058: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10905c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x10905Cu;
    SET_GPR_U32(ctx, 31, 0x109064u);
    ctx->pc = 0x109060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10905Cu;
    // 0x109060: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x10905Cu, 0x109064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109064u;
label_109064:
    // 0x109064: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x109064u;
    {
        const bool branch_taken_0x109064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109064u;
        // 0x109068: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109064) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x10906Cu;
    // 0x10906c: 0x0  nop
    ctx->pc = 0x10906cu;
    // NOP
label_109070:
    // 0x109070: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x109070u;
    SET_GPR_U32(ctx, 31, 0x109078u);
    ctx->pc = 0x109074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109070u;
    // 0x109074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x109070u, 0x109078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109078u;
label_109078:
    // 0x109078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10907c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10907Cu;
    SET_GPR_U32(ctx, 31, 0x109084u);
    ctx->pc = 0x109080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10907Cu;
    // 0x109080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10907Cu, 0x109084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109084u;
label_109084:
    // 0x109084: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x109084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109088: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10908c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109090: 0xc0695ac  jal         func_1A56B0
    ctx->pc = 0x109090u;
    SET_GPR_U32(ctx, 31, 0x109098u);
    ctx->pc = 0x109094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109090u;
    // 0x109094: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56B0u, 0x109090u, 0x109098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109098u;
label_109098:
    // 0x109098: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x109098u;
    {
        const bool branch_taken_0x109098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109098u;
        // 0x10909c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109098) {
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x1090A0u;
label_1090a0:
    // 0x1090a0: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1090A0u;
    SET_GPR_U32(ctx, 31, 0x1090A8u);
    ctx->pc = 0x1090A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090A0u;
    // 0x1090a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1090A0u, 0x1090A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090A8u;
label_1090a8:
    // 0x1090a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1090a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090ac: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x1090ACu;
    SET_GPR_U32(ctx, 31, 0x1090B4u);
    ctx->pc = 0x1090B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090ACu;
    // 0x1090b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x1090ACu, 0x1090B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090B4u;
label_1090b4:
    // 0x1090b4: 0xc7808030  lwc1        $f0, -0x7FD0($gp)
    ctx->pc = 0x1090b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1090b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1090b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090bc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1090c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1090c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1090c8: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1090C8u;
    {
        const bool branch_taken_0x1090c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1090c8) {
            ctx->pc = 0x1090CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1090C8u;
            // 0x1090cc: 0x96820008  lhu         $v0, 0x8($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1090DCu;
            goto label_1090dc;
        }
    }
    ctx->pc = 0x1090D0u;
    // 0x1090d0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1090D0u;
    SET_GPR_U32(ctx, 31, 0x1090D8u);
    ctx->pc = 0x1090D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090D0u;
    // 0x1090d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1090D0u, 0x1090D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090D8u;
label_1090d8:
    // 0x1090d8: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x1090d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_1090dc:
    // 0x1090dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1090e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1090e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1090e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090e8: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x1090e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x1090ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1090ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090f0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1090f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1090f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1090f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090f8: 0xc0695da  jal         func_1A5768
    ctx->pc = 0x1090F8u;
    SET_GPR_U32(ctx, 31, 0x109100u);
    ctx->pc = 0x1090FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090F8u;
    // 0x1090fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5768u, 0x1090F8u, 0x109100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109100u;
label_109100:
    // 0x109100: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x109100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_109104:
    // 0x109104: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x109104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x109108: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10910c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x10910cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x109110: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x109110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109114: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x109114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x109118: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x109118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10911c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x10911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x109120: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x109120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x109124: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x109124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x109128: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x109128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10912c: 0x3e00008  jr          $ra
    ctx->pc = 0x10912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10912Cu;
        // 0x109130: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109134u;
}

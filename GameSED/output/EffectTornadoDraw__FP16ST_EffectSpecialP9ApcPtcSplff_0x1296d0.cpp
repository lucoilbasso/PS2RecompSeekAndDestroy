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

// Function: EffectTornadoDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x1296d0 - 0x129f90
void EffectTornadoDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x1296d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectTornadoDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x1296d0");
#endif

    switch (ctx->pc) {
        case 0x129780u: goto label_129780;
        case 0x129788u: goto label_129788;
        case 0x1297acu: goto label_1297ac;
        case 0x1298f0u: goto label_1298f0;
        case 0x129ac0u: goto label_129ac0;
        case 0x129af0u: goto label_129af0;
        case 0x129de0u: goto label_129de0;
        case 0x129e10u: goto label_129e10;
        case 0x129e18u: goto label_129e18;
        case 0x129e28u: goto label_129e28;
        case 0x129ea8u: goto label_129ea8;
        case 0x129eb0u: goto label_129eb0;
        case 0x129ed0u: goto label_129ed0;
        case 0x129ed8u: goto label_129ed8;
        case 0x129f00u: goto label_129f00;
        default: break;
    }

    ctx->pc = 0x1296d0u;

    // 0x1296d0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1296d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1296d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1296d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1296d8: 0xe7bc01e0  swc1        $f28, 0x1E0($sp)
    ctx->pc = 0x1296d8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x1296dc: 0x46006706  mov.s       $f28, $f12
    ctx->pc = 0x1296dcu;
    ctx->f[28] = FPU_MOV_S(ctx->f[12]);
    // 0x1296e0: 0xe7bb01d8  swc1        $f27, 0x1D8($sp)
    ctx->pc = 0x1296e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1296e4: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x1296e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x1296e8: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1296e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x1296ec: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1296ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x1296f0: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1296f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x1296f4: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x1296f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x1296f8: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x1296f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x1296fc: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x1296fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x129700: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x129700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x129704: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x129704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x129708: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x129708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x12970c: 0xe7bd01e8  swc1        $f29, 0x1E8($sp)
    ctx->pc = 0x12970cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x129710: 0xe7ba01d0  swc1        $f26, 0x1D0($sp)
    ctx->pc = 0x129710u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x129714: 0xe7b901c8  swc1        $f25, 0x1C8($sp)
    ctx->pc = 0x129714u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x129718: 0xe7b801c0  swc1        $f24, 0x1C0($sp)
    ctx->pc = 0x129718u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x12971c: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x12971cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x129720: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x129720u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x129724: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x129724u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x129728: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x129728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x12972c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x12972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x129730: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x129730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x129734: 0x14430200  bne         $v0, $v1, . + 4 + (0x200 << 2)
    ctx->pc = 0x129734u;
    {
        const bool branch_taken_0x129734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x129738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129734u;
        // 0x129738: 0x46006ec6  mov.s       $f27, $f13 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129734) {
            ctx->pc = 0x129F38u;
            goto label_129f38;
        }
    }
    ctx->pc = 0x12973Cu;
    // 0x12973c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x129740: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x129740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129744: 0x2455d650  addiu       $s5, $v0, -0x29B0
    ctx->pc = 0x129744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x129748: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x129748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x12974c: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x12974cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x129750: 0x249301b0  addiu       $s3, $a0, 0x1B0
    ctx->pc = 0x129750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x129754: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129754u;
    {
        const bool branch_taken_0x129754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129754u;
        // 0x129758: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129754) {
            ctx->pc = 0x129778u;
            goto label_129778;
        }
    }
    ctx->pc = 0x12975Cu;
    // 0x12975c: 0x8ea20098  lw          $v0, 0x98($s5)
    ctx->pc = 0x12975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x129760: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x129760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x129764: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x129768: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x129768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12976c: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x12976cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x129770: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x129770u;
    {
        const bool branch_taken_0x129770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129770u;
        // 0x129774: 0xaea30098  sw          $v1, 0x98($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129770) {
            ctx->pc = 0x1297ACu;
            goto label_1297ac;
        }
    }
    ctx->pc = 0x129778u;
label_129778:
    // 0x129778: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129778u;
    SET_GPR_U32(ctx, 31, 0x129780u);
    ctx->pc = 0x12977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129778u;
    // 0x12977c: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129778u, 0x129780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129780u;
label_129780:
    // 0x129780: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129780u;
    SET_GPR_U32(ctx, 31, 0x129788u);
    ctx->pc = 0x129784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129780u;
    // 0x129784: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129780u, 0x129788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129788u;
label_129788:
    // 0x129788: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x129788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x12978c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x12978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x129790: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x129794: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x129798: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x129798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x12979c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1297a0: 0xaea5008c  sw          $a1, 0x8C($s5)
    ctx->pc = 0x1297a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    // 0x1297a4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1297A4u;
    SET_GPR_U32(ctx, 31, 0x1297ACu);
    ctx->pc = 0x1297A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1297A4u;
    // 0x1297a8: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1297A4u, 0x1297ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297ACu;
label_1297ac:
    // 0x1297ac: 0xafb000c8  sw          $s0, 0xC8($sp)
    ctx->pc = 0x1297acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 16));
    // 0x1297b0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1297b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1297b4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1297b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1297b8: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x1297b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x1297bc: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1297bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1297c0: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1297c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1297c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1297c8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1297c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1297cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1297ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1297d0: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x1297d4: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x1297d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x1297d8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1297d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1297dc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1297dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1297e0: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x1297e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1297e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1297e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1297e8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1297e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1297ec: 0x24490030  addiu       $t1, $v0, 0x30
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1297f0: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1297f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1297f4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1297f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1297f8: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1297f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1297fc: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x129800: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x129800u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x129804: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x129804u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x129808: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x129808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12980c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x12980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x129810: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x129810u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x129814: 0x244d0050  addiu       $t5, $v0, 0x50
    ctx->pc = 0x129814u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x129818: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x129818u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x12981c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x12981cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129820: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x129820u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x129824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x129824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129828: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x129828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x12982c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x12982cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129830: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x129834: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x129834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x129838: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x129838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12983c: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x129840: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x129844: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x129844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x129848: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x129848u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x12984c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129850: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x129850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x129854: 0x27ae0070  addiu       $t6, $sp, 0x70
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129858: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12985c: 0x24520070  addiu       $s2, $v0, 0x70
    ctx->pc = 0x12985cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x129860: 0xfdac0008  sd          $t4, 0x8($t5)
    ctx->pc = 0x129860u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 12));
    // 0x129864: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x129864u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x129868: 0xfdaf0000  sd          $t7, 0x0($t5)
    ctx->pc = 0x129868u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 15));
    // 0x12986c: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x12986cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x129870: 0xc79d8110  lwc1        $f29, -0x7EF0($gp)
    ctx->pc = 0x129870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x129874: 0x24d9ebf0  addiu       $t9, $a2, -0x1410
    ctx->pc = 0x129874u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962160));
    // 0x129878: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x129878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x12987c: 0x24f491c0  addiu       $s4, $a3, -0x6E40
    ctx->pc = 0x12987cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939072));
    // 0x129880: 0x8fb600d4  lw          $s6, 0xD4($sp)
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x129884: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x129884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129888: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x129888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x12988c: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x12988cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x129890: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x129890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x129894: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x129894u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x129898: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x129898u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12989c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x12989cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1298a0: 0xfe110008  sd          $s1, 0x8($s0)
    ctx->pc = 0x1298a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 17));
    // 0x1298a4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1298a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1298a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1298ac: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1298acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1298b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1298b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1298b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1298b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298b8: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1298b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1298bc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1298BCu;
    {
        const bool branch_taken_0x1298bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1298bc) {
            ctx->pc = 0x1298C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1298BCu;
            // 0x1298c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1298C4u;
            goto label_1298c4;
        }
    }
    ctx->pc = 0x1298C4u;
label_1298c4:
    // 0x1298c4: 0x92620027  lbu         $v0, 0x27($s3)
    ctx->pc = 0x1298c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
    // 0x1298c8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1298c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1298cc: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1298ccu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1298d0: 0xc6750000  lwc1        $f21, 0x0($s3)
    ctx->pc = 0x1298d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1298d4: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x1298d4u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x1298d8: 0xc67a001c  lwc1        $f26, 0x1C($s3)
    ctx->pc = 0x1298d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1298dc: 0xc6790020  lwc1        $f25, 0x20($s3)
    ctx->pc = 0x1298dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1298e0: 0xc6740018  lwc1        $f20, 0x18($s3)
    ctx->pc = 0x1298e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1298e4: 0x1012  mflo        $v0
    ctx->pc = 0x1298e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1298e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1298e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1298ec: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1298f0:
    // 0x1298f0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1298f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1298f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298f8: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x1298f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1298fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1298fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129900: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x129900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x129904: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x129904u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x129908: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x129908u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12990c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129910: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x129910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129914: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x129914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x129918: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x129918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12991c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x12991cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x129920: 0x2484eb70  addiu       $a0, $a0, -0x1490
    ctx->pc = 0x129920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962032));
    // 0x129924: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x129924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x129928: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x129928u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x12992c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x12992cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x129930: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x129930u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x129934: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x129934u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129938: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x129938u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12993c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12993cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129940: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x129940u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129944: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x129944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129948: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x129948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12994c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12994cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129950: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x129950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x129954: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x129954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129958: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x129958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12995c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12995cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129960: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x129960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x129964: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x129964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129968: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x129968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12996c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12996cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129970: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x129970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x129974: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x129974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129978: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x129978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12997c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12997cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x129980: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x129980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x129984: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x129984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x129988: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x129988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12998c: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x129990: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x129990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x129994: 0xdb240000  lqc2        $vf4, 0x0($t9)
    ctx->pc = 0x129994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x129998: 0xdb250010  lqc2        $vf5, 0x10($t9)
    ctx->pc = 0x129998u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x12999c: 0xdb260020  lqc2        $vf6, 0x20($t9)
    ctx->pc = 0x12999cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x1299a0: 0xdb270030  lqc2        $vf7, 0x30($t9)
    ctx->pc = 0x1299a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x1299a4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x1299a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1299a8: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x1299a8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1299ac: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x1299acu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1299b0: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x1299b0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1299b4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1299b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299b8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1299b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299bc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1299bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299c0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1299c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1299c4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1299c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299c8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1299c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299cc: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1299ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299d0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x1299d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1299d4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x1299d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299d8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x1299d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299dc: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x1299dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299e0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x1299e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1299e4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x1299e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299e8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x1299e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299ec: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x1299ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1299f0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x1299f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1299f4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1299f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1299f8: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x1299f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1299fc: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x1299fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x129a00: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x129a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x129a04: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x129a04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x129a08: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x129a08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x129a0c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x129a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x129a10: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x129a10u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x129a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129a18: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x129a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129a1c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x129A1Cu;
    {
        const bool branch_taken_0x129a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129a1c) {
            ctx->pc = 0x129A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129A1Cu;
            // 0x129a20: 0x4616c000  add.s       $f0, $f24, $f22 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129A84u;
            goto label_129a84;
        }
    }
    ctx->pc = 0x129A24u;
    // 0x129a24: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x129a24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x129a28: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x129a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129a2c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x129a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129a30: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x129a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129a34: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x129a34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x129a38: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x129a38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x129a3c: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x129a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x129a40: 0x4a0003bf  vwaitq
    ctx->pc = 0x129a40u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x129a44: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x129a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x129a48: 0xf9a60000  sqc2        $vf6, 0x0($t5)
    ctx->pc = 0x129a48u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x129a4c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x129a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129a50: 0x4600b107  neg.s       $f4, $f22
    ctx->pc = 0x129a50u;
    ctx->f[4] = FPU_NEG_S(ctx->f[22]);
    // 0x129a54: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x129a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129a58: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x129a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x129a5c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x129a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129a60: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x129a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x129a64: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x129a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129a68: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x129a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x129a6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x129a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x129a70: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x129a70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x129a74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x129a74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x129a78: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x129a78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x129a7c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x129a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x129a80: 0x4616c000  add.s       $f0, $f24, $f22
    ctx->pc = 0x129a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_129a84:
    // 0x129a84: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x129a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x129a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129a8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a90: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x129a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a98: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x129a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x129a9c: 0x7faa00f0  sq          $t2, 0xF0($sp)
    ctx->pc = 0x129a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 10));
    // 0x129aa0: 0x7fab0100  sq          $t3, 0x100($sp)
    ctx->pc = 0x129aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 11));
    // 0x129aa4: 0x7fac0110  sq          $t4, 0x110($sp)
    ctx->pc = 0x129aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 12));
    // 0x129aa8: 0x7fad0120  sq          $t5, 0x120($sp)
    ctx->pc = 0x129aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 13));
    // 0x129aac: 0x7fae0130  sq          $t6, 0x130($sp)
    ctx->pc = 0x129aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 14));
    // 0x129ab0: 0x7fb90140  sq          $t9, 0x140($sp)
    ctx->pc = 0x129ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 25));
    // 0x129ab4: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x129ab4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x129ab8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x129AB8u;
    SET_GPR_U32(ctx, 31, 0x129AC0u);
    ctx->pc = 0x129ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AB8u;
    // 0x129abc: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x129AB8u, 0x129AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AC0u;
label_129ac0:
    // 0x129ac0: 0x7bb90140  lq          $t9, 0x140($sp)
    ctx->pc = 0x129ac0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x129ac4: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x129ac8: 0x7bae0130  lq          $t6, 0x130($sp)
    ctx->pc = 0x129ac8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x129acc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129ad0: 0x7bad0120  lq          $t5, 0x120($sp)
    ctx->pc = 0x129ad0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x129ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ad8: 0x7bac0110  lq          $t4, 0x110($sp)
    ctx->pc = 0x129ad8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x129adc: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x129adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
    // 0x129ae0: 0x7bab0100  lq          $t3, 0x100($sp)
    ctx->pc = 0x129ae0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x129ae4: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x129ae4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x129ae8: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x129ae8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x129aec: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x129aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_129af0:
    // 0x129af0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x129af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x129af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129af8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x129af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x129afc: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x129afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x129b00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x129B00u;
    {
        const bool branch_taken_0x129b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b00) {
            ctx->pc = 0x129B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B00u;
            // 0x129b04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129B20u;
            goto label_129b20;
        }
    }
    ctx->pc = 0x129B08u;
    // 0x129b08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x129b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x129b0c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x129b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x129b10: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x129b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x129b14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129B14u;
    {
        const bool branch_taken_0x129b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129b14) {
            ctx->pc = 0x129B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B14u;
            // 0x129b18: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129B28u;
            goto label_129b28;
        }
    }
    ctx->pc = 0x129B1Cu;
    // 0x129b1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x129b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129b20:
    // 0x129b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x129B20u;
    {
        const bool branch_taken_0x129b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B20u;
        // 0x129b24: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b20) {
            ctx->pc = 0x129B40u;
            goto label_129b40;
        }
    }
    ctx->pc = 0x129B28u;
label_129b28:
    // 0x129b28: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x129b2c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x129b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129b30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129B30u;
    {
        const bool branch_taken_0x129b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B30u;
        // 0x129b34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b30) {
            ctx->pc = 0x129B44u;
            goto label_129b44;
        }
    }
    ctx->pc = 0x129B38u;
    // 0x129b38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x129b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129b3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x129b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129b40:
    // 0x129b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_129b44:
    // 0x129b44: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x129b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129b48: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x129B48u;
    {
        const bool branch_taken_0x129b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B48u;
        // 0x129b4c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b48) {
            ctx->pc = 0x129AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129af0;
        }
    }
    ctx->pc = 0x129B50u;
    // 0x129b50: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x129b54: 0x14c00020  bnez        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x129B54u;
    {
        const bool branch_taken_0x129b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B54u;
        // 0x129b58: 0x1e1100  sll         $v0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b54) {
            ctx->pc = 0x129BD8u;
            goto label_129bd8;
        }
    }
    ctx->pc = 0x129B5Cu;
    // 0x129b5c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x129b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129b64: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x129b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x129b68: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x129b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x129b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x129b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x129b74: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x129b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x129b78: 0x4600e001  sub.s       $f0, $f28, $f0
    ctx->pc = 0x129b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[0]);
    // 0x129b7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129b7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x129b80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x129b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x129b84: 0x705110c8  pmaxw       $v0, $v0, $s1
    ctx->pc = 0x129b84u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x129b88: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129b8c: 0x704c10e8  pminw       $v0, $v0, $t4
    ctx->pc = 0x129b8cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x129b90: 0x2f000  sll         $fp, $v0, 0
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129b94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x129b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129b98: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x129b9c: 0x23e182a  slt         $v1, $s1, $fp
    ctx->pc = 0x129b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x129ba0: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x129ba4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x129ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129ba8: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x129ba8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x129bac: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x129bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x129bb0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x129bb4: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x129bb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x129bb8: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129bbc: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129BBCu;
    {
        const bool branch_taken_0x129bbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x129BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BBCu;
        // 0x129bc0: 0x1e1100  sll         $v0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bbc) {
            ctx->pc = 0x129BD8u;
            goto label_129bd8;
        }
    }
    ctx->pc = 0x129BC4u;
    // 0x129bc4: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x129bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x129bc8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x129bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x129bcc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x129bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x129bd0: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x129bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x129bd4: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x129bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_129bd8:
    // 0x129bd8: 0x2ae30023  slti        $v1, $s7, 0x23
    ctx->pc = 0x129bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x129bdc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x129bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x129be0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129BE0u;
    {
        const bool branch_taken_0x129be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE0u;
        // 0x129be4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129be0) {
            ctx->pc = 0x129BF8u;
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129BE8u;
    // 0x129be8: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x129be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x129bec: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x129bf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x129bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129bf4: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x129bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
label_129bf8:
    // 0x129bf8: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x129BF8u;
    {
        const bool branch_taken_0x129bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x129bf8) {
            ctx->pc = 0x129C80u;
            goto label_129c80;
        }
    }
    ctx->pc = 0x129C00u;
    // 0x129c00: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x129C00u;
    {
        const bool branch_taken_0x129c00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C00u;
        // 0x129c04: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c00) {
            ctx->pc = 0x129C10u;
            goto label_129c10;
        }
    }
    ctx->pc = 0x129C08u;
    // 0x129c08: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x129c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_129c10:
    // 0x129c10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c14: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c18: 0xfc4b0008  sd          $t3, 0x8($v0)
    ctx->pc = 0x129c18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 11));
    // 0x129c1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x129c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c20: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x129c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x129c28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x129c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c2c: 0xe4570004  swc1        $f23, 0x4($v0)
    ctx->pc = 0x129c2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c34: 0xe4770008  swc1        $f23, 0x8($v1)
    ctx->pc = 0x129c34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129c38: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c3c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c44: 0xe4790004  swc1        $f25, 0x4($v1)
    ctx->pc = 0x129c44u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x129c48: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c4c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x129c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x129c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x129c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129c58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129c5c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c60: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x129c60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x129c64: 0xe4970008  swc1        $f23, 0x8($a0)
    ctx->pc = 0x129c64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x129c68: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x129c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x129c6c: 0xe49a0004  swc1        $f26, 0x4($a0)
    ctx->pc = 0x129c6cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x129c70: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x129c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129c74: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x129C74u;
    {
        const bool branch_taken_0x129c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C74u;
        // 0x129c78: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c74) {
            ctx->pc = 0x129D50u;
            goto label_129d50;
        }
    }
    ctx->pc = 0x129C7Cu;
    // 0x129c7c: 0x0  nop
    ctx->pc = 0x129c7cu;
    // NOP
label_129c80:
    // 0x129c80: 0x1ac00011  blez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x129C80u;
    {
        const bool branch_taken_0x129c80 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x129C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C80u;
        // 0x129c84: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c80) {
            ctx->pc = 0x129CC8u;
            goto label_129cc8;
        }
    }
    ctx->pc = 0x129C88u;
    // 0x129c88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x129c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129c8c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x129c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x129c90: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x129c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x129c94: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x129c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x129c98: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x129c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x129c9c: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x129c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x129ca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129ca4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x129ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x129ca8: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x129ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x129cac: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x129cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129cb0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x129cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x129cb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129cb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x129cbc: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x129cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x129cc0: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x129cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x129cc4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x129cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_129cc8:
    // 0x129cc8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129ccc: 0x3c02503a  lui         $v0, 0x503A
    ctx->pc = 0x129cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20538 << 16));
    // 0x129cd0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x129cd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129cd8: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x129cdc: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x129cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x129ce0: 0x34842c2e  ori         $a0, $a0, 0x2C2E
    ctx->pc = 0x129ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11310);
    // 0x129ce4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x129ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x129ce8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x129ce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cec: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x129cecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x129cf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cf4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129cf8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x129cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129cfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d00: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x129d00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x129d04: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x129d0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d10: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x129d10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x129d14: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d18: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x129d18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x129d1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x129d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d20: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x129d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x129d24: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d28: 0xe4590004  swc1        $f25, 0x4($v0)
    ctx->pc = 0x129d28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d30: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d34: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x129d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129d38: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x129d38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x129d3c: 0xe4770008  swc1        $f23, 0x8($v1)
    ctx->pc = 0x129d3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129d40: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129d44: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x129d44u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x129d48: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x129d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129d4c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x129d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_129d50:
    // 0x129d50: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x129d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129d54: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x129d58: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x129d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129d5c: 0x2ae20028  slti        $v0, $s7, 0x28
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x129d60: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x129d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129d64: 0x4602b581  sub.s       $f22, $f22, $f2
    ctx->pc = 0x129d64u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x129d68: 0x4600c601  sub.s       $f24, $f24, $f0
    ctx->pc = 0x129d68u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x129d6c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x129d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x129d70: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x129d70u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x129d74: 0x1440fede  bnez        $v0, . + 4 + (-0x122 << 2)
    ctx->pc = 0x129D74u;
    {
        const bool branch_taken_0x129d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D74u;
        // 0x129d78: 0x461da500  add.s       $f20, $f20, $f29 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d74) {
            ctx->pc = 0x1298F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1298f0;
        }
    }
    ctx->pc = 0x129D7Cu;
    // 0x129d7c: 0x1ac00011  blez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x129D7Cu;
    {
        const bool branch_taken_0x129d7c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x129D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D7Cu;
        // 0x129d80: 0x8fa600d4  lw          $a2, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d7c) {
            ctx->pc = 0x129DC4u;
            goto label_129dc4;
        }
    }
    ctx->pc = 0x129D84u;
    // 0x129d84: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x129d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129d88: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x129d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x129d8c: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x129d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x129d90: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x129d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x129d94: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x129d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x129d98: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x129d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x129d9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129da0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x129da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x129da4: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x129da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x129da8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x129da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129dac: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x129dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x129db0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129db4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x129db8: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x129db8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x129dbc: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x129dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x129dc0: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x129dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_129dc4:
    // 0x129dc4: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x129DC4u;
    {
        const bool branch_taken_0x129dc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DC4u;
        // 0x129dc8: 0x8fb000c8  lw          $s0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dc4) {
            ctx->pc = 0x129E50u;
            goto label_129e50;
        }
    }
    ctx->pc = 0x129DCCu;
    // 0x129dcc: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x129dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x129dd0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x129DD0u;
    {
        const bool branch_taken_0x129dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DD0u;
        // 0x129dd4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dd0) {
            ctx->pc = 0x129E20u;
            goto label_129e20;
        }
    }
    ctx->pc = 0x129DD8u;
    // 0x129dd8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129DD8u;
    SET_GPR_U32(ctx, 31, 0x129DE0u);
    ctx->pc = 0x129DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DD8u;
    // 0x129ddc: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129DD8u, 0x129DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DE0u;
label_129de0:
    // 0x129de0: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x129de4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x129de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x129de8: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x129de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x129dec: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x129decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x129df0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x129df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x129df4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x129df4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129df8: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x129dfc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x129dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x129e00: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x129e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x129e04: 0xaea50080  sw          $a1, 0x80($s5)
    ctx->pc = 0x129e04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 5));
    // 0x129e08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129E08u;
    SET_GPR_U32(ctx, 31, 0x129E10u);
    ctx->pc = 0x129E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E08u;
    // 0x129e0c: 0xaea6008c  sw          $a2, 0x8C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129E08u, 0x129E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E10u;
label_129e10:
    // 0x129e10: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129E10u;
    SET_GPR_U32(ctx, 31, 0x129E18u);
    ctx->pc = 0x129E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E10u;
    // 0x129e14: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129E10u, 0x129E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E18u;
label_129e18:
    // 0x129e18: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x129E18u;
    {
        const bool branch_taken_0x129e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E18u;
        // 0x129e1c: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e18) {
            ctx->pc = 0x129F3Cu;
            goto label_129f3c;
        }
    }
    ctx->pc = 0x129E20u;
label_129e20:
    // 0x129e20: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x129e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x129e24: 0x0  nop
    ctx->pc = 0x129e24u;
    // NOP
label_129e28:
    // 0x129e28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129e2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x129e30: 0x0  nop
    ctx->pc = 0x129e30u;
    // NOP
    // 0x129e34: 0x0  nop
    ctx->pc = 0x129e34u;
    // NOP
    // 0x129e38: 0x0  nop
    ctx->pc = 0x129e38u;
    // NOP
    // 0x129e3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129E3Cu;
    {
        const bool branch_taken_0x129e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E3Cu;
        // 0x129e40: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e3c) {
            ctx->pc = 0x129E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129e28;
        }
    }
    ctx->pc = 0x129E44u;
    // 0x129e44: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x129E44u;
    {
        const bool branch_taken_0x129e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E44u;
        // 0x129e48: 0xdfb10158  ld          $s1, 0x158($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e44) {
            ctx->pc = 0x129F40u;
            goto label_129f40;
        }
    }
    ctx->pc = 0x129E4Cu;
    // 0x129e4c: 0x0  nop
    ctx->pc = 0x129e4cu;
    // NOP
label_129e50:
    // 0x129e50: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x129e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x129e54: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x129e58: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x129e5c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x129e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129e60: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x129e60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x129e64: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x129e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e68: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x129e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x129e6c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x129e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x129e70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x129e74: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x129e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x129e78: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x129e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129e7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x129e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x129e80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x129e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x129e84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x129e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x129e88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129e8c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x129e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x129e90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x129e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129e94: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129e98: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x129e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x129e9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x129ea0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129EA0u;
    SET_GPR_U32(ctx, 31, 0x129EA8u);
    ctx->pc = 0x129EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EA0u;
    // 0x129ea4: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129EA0u, 0x129EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EA8u;
label_129ea8:
    // 0x129ea8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129eac: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x129eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_129eb0:
    // 0x129eb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129eb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x129eb8: 0x0  nop
    ctx->pc = 0x129eb8u;
    // NOP
    // 0x129ebc: 0x0  nop
    ctx->pc = 0x129ebcu;
    // NOP
    // 0x129ec0: 0x0  nop
    ctx->pc = 0x129ec0u;
    // NOP
    // 0x129ec4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129EC4u;
    {
        const bool branch_taken_0x129ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ec4) {
            ctx->pc = 0x129EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129eb0;
        }
    }
    ctx->pc = 0x129ECCu;
    // 0x129ecc: 0x0  nop
    ctx->pc = 0x129eccu;
    // NOP
label_129ed0:
    // 0x129ed0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x129ED0u;
    SET_GPR_U32(ctx, 31, 0x129ED8u);
    ctx->pc = 0x129ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ED0u;
    // 0x129ed4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x129ED0u, 0x129ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ED8u;
label_129ed8:
    // 0x129ed8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x129ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x129edc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x129EDCu;
    {
        const bool branch_taken_0x129edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x129EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EDCu;
        // 0x129ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129edc) {
            ctx->pc = 0x129ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129ed0;
        }
    }
    ctx->pc = 0x129EE4u;
    // 0x129ee4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x129ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x129ee8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129eec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x129EECu;
    {
        const bool branch_taken_0x129eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EECu;
        // 0x129ef0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129eec) {
            ctx->pc = 0x129F00u;
            goto label_129f00;
        }
    }
    ctx->pc = 0x129EF4u;
    // 0x129ef4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x129ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x129ef8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129EF8u;
    SET_GPR_U32(ctx, 31, 0x129F00u);
    ctx->pc = 0x129EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EF8u;
    // 0x129efc: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129EF8u, 0x129F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F00u;
label_129f00:
    // 0x129f00: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x129f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x129f04: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x129f08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129f0c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x129f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x129f10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x129f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129f14: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x129f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x129f18: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x129f1c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x129f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x129f20: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x129f24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x129f28: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x129f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x129f2c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x129f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x129f30: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x129f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x129f34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_129f38:
    // 0x129f38: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x129f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_129f3c:
    // 0x129f3c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x129f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_129f40:
    // 0x129f40: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x129f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x129f44: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x129f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x129f48: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x129f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x129f4c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x129f4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x129f50: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x129f50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x129f54: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x129f58: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x129f58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x129f5c: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x129f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x129f60: 0xc7bd01e8  lwc1        $f29, 0x1E8($sp)
    ctx->pc = 0x129f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x129f64: 0xc7bc01e0  lwc1        $f28, 0x1E0($sp)
    ctx->pc = 0x129f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x129f68: 0xc7bb01d8  lwc1        $f27, 0x1D8($sp)
    ctx->pc = 0x129f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x129f6c: 0xc7ba01d0  lwc1        $f26, 0x1D0($sp)
    ctx->pc = 0x129f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x129f70: 0xc7b901c8  lwc1        $f25, 0x1C8($sp)
    ctx->pc = 0x129f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x129f74: 0xc7b801c0  lwc1        $f24, 0x1C0($sp)
    ctx->pc = 0x129f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x129f78: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x129f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x129f7c: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x129f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x129f80: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x129f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x129f84: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x129f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129f88: 0x3e00008  jr          $ra
    ctx->pc = 0x129F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F88u;
        // 0x129f8c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F90u;
}

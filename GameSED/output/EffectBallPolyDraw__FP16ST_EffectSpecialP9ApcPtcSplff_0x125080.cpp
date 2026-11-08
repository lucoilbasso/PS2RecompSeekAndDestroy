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

// Function: EffectBallPolyDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x125080 - 0x1257c4
void EffectBallPolyDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x125080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectBallPolyDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x125080");
#endif

    switch (ctx->pc) {
        case 0x125130u: goto label_125130;
        case 0x1251a0u: goto label_1251a0;
        case 0x1251a8u: goto label_1251a8;
        case 0x1251ccu: goto label_1251cc;
        case 0x1252b8u: goto label_1252b8;
        case 0x1252c4u: goto label_1252c4;
        case 0x1252d8u: goto label_1252d8;
        case 0x1252e8u: goto label_1252e8;
        case 0x1252fcu: goto label_1252fc;
        case 0x125314u: goto label_125314;
        case 0x125324u: goto label_125324;
        case 0x125478u: goto label_125478;
        case 0x125490u: goto label_125490;
        case 0x1254a8u: goto label_1254a8;
        case 0x1254c0u: goto label_1254c0;
        case 0x1254e0u: goto label_1254e0;
        case 0x12567cu: goto label_12567c;
        case 0x125688u: goto label_125688;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256d4u: goto label_1256d4;
        case 0x125738u: goto label_125738;
        default: break;
    }

    ctx->pc = 0x125080u;

    // 0x125080: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x125080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x125084: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x125084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x125088: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12508c: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x12508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x125090: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x125090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125094: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x125094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x125098: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x125098u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12509c: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x12509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x1250a0: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x1250a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x1250a4: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x1250a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x1250a8: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x1250a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x1250ac: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x1250acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x1250b0: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x1250b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x1250b4: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x1250b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x1250b8: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x1250b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1250bc: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1250bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1250c0: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1250c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1250c4: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1250c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1250c8: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x1250c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x1250cc: 0x8ea201bc  lw          $v0, 0x1BC($s5)
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x1250d0: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1250d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x1250d4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1250d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1250d8: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1250d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x1250dc: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1250dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x1250e0: 0x12a001a8  beqz        $s5, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1250E0u;
    {
        const bool branch_taken_0x1250e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E0u;
        // 0x1250e4: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250e0) {
            ctx->pc = 0x125784u;
            goto label_125784;
        }
    }
    ctx->pc = 0x1250E8u;
    // 0x1250e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1250e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1250ec: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1250ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1250f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1250f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1250f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1250f8: 0x24847e40  addiu       $a0, $a0, 0x7E40
    ctx->pc = 0x1250f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32320));
    // 0x1250fc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1250fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x125100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125104: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x125104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x125108: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12510c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x12510cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x125110: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x125110u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x1F7E40u));
    // 0x125114: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x125114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x125118: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12511c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x125120: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x125120u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x1F7E50u));
    // 0x125124: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x125124u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x125128: 0xc79780c8  lwc1        $f23, -0x7F38($gp)
    ctx->pc = 0x125128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12512c: 0x0  nop
    ctx->pc = 0x12512cu;
    // NOP
label_125130:
    // 0x125130: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x125130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125138: 0xc78280cc  lwc1        $f2, -0x7F34($gp)
    ctx->pc = 0x125138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12513c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125144: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x125148: 0xc79580d0  lwc1        $f21, -0x7F30($gp)
    ctx->pc = 0x125148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12514c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12514cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125150: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x125150u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x125154: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x125154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x125158: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x125158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12515c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x12515Cu;
    {
        const bool branch_taken_0x12515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12515Cu;
        // 0x125160: 0xe7a20064  swc1        $f2, 0x64($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12515c) {
            ctx->pc = 0x125290u;
            goto label_125290;
        }
    }
    ctx->pc = 0x125164u;
    // 0x125164: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x125168: 0x2476d650  addiu       $s6, $v1, -0x29B0
    ctx->pc = 0x125168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12516c: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x125170: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x125170u;
    {
        const bool branch_taken_0x125170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125170u;
        // 0x125174: 0x8fb10124  lw          $s1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125170) {
            ctx->pc = 0x125198u;
            goto label_125198;
        }
    }
    ctx->pc = 0x125178u;
    // 0x125178: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x12517c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125180: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x125184: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x125184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x125188: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12518c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12518Cu;
    {
        const bool branch_taken_0x12518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12518Cu;
        // 0x125190: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12518c) {
            ctx->pc = 0x1251CCu;
            goto label_1251cc;
        }
    }
    ctx->pc = 0x125194u;
    // 0x125194: 0x0  nop
    ctx->pc = 0x125194u;
    // NOP
label_125198:
    // 0x125198: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125198u;
    SET_GPR_U32(ctx, 31, 0x1251A0u);
    ctx->pc = 0x12519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125198u;
    // 0x12519c: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125198u, 0x1251A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251A0u;
label_1251a0:
    // 0x1251a0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1251A0u;
    SET_GPR_U32(ctx, 31, 0x1251A8u);
    ctx->pc = 0x1251A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251A0u;
    // 0x1251a4: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1251A0u, 0x1251A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251A8u;
label_1251a8:
    // 0x1251a8: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x1251a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x1251ac: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x1251b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1251b4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1251b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1251b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1251b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1251bc: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x1251bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x1251c0: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x1251c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x1251c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1251C4u;
    SET_GPR_U32(ctx, 31, 0x1251CCu);
    ctx->pc = 0x1251C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251C4u;
    // 0x1251c8: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1251C4u, 0x1251CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251CCu;
label_1251cc:
    // 0x1251cc: 0xafb00128  sw          $s0, 0x128($sp)
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 16));
    // 0x1251d0: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x1251d4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1251d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1251d8: 0x354a8005  ori         $t2, $t2, 0x8005
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32773);
    // 0x1251dc: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1251dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1251e0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1251e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1251e8: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x1251ec: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x1251ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x1251f0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1251f4: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1251f8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1251f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1251fc: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x1251fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x125200: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x125200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x125204: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x125208: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x125208u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x12520c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x125210: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x125210u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x125214: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x125218: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x125218u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12521c: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x12521cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x125220: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x125220u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x125224: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x125224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x125228: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x125228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12522c: 0x24690050  addiu       $t1, $v1, 0x50
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x125230: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x125230u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x125234: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x125234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x125238: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x125238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x12523c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x12523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x125240: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x125240u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x125244: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x125244u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x125248: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x125248u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x12524c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x125250: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x125250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x125254: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x125258: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x125258u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12525c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12525cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125260: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x125260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x125264: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x125264u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x125268: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x125268u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x12526c: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x12526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x125270: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x125270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x125274: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x125274u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x125278: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x125278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12527c: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12527cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x125280: 0xfcec0008  sd          $t4, 0x8($a3)
    ctx->pc = 0x125280u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 12));
    // 0x125284: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x125284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x125288: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x125288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12528c: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x12528cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
label_125290:
    // 0x125290: 0x4617a836  c.le.s      $f21, $f23
    ctx->pc = 0x125290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125294: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x125294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x125298: 0x450000cd  bc1f        . + 4 + (0xCD << 2)
    ctx->pc = 0x125298u;
    {
        const bool branch_taken_0x125298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125298u;
        // 0x12529c: 0x8fa30134  lw          $v1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125298) {
            ctx->pc = 0x1255D0u;
            goto label_1255d0;
        }
    }
    ctx->pc = 0x1252A0u;
    // 0x1252a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1252a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1252a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1252a8: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1252ac: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1252b0: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1252b4: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
label_1252b8:
    // 0x1252b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252bc: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x1252BCu;
    SET_GPR_U32(ctx, 31, 0x1252C4u);
    ctx->pc = 0x1252C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252BCu;
    // 0x1252c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x1252BCu, 0x1252C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252C4u;
label_1252c4:
    // 0x1252c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1252c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1252cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252d0: 0xc06efe6  jal         func_1BBF98
    ctx->pc = 0x1252D0u;
    SET_GPR_U32(ctx, 31, 0x1252D8u);
    ctx->pc = 0x1252D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252D0u;
    // 0x1252d4: 0xe7b500b4  swc1        $f21, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF98u, 0x1252D0u, 0x1252D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252D8u;
label_1252d8:
    // 0x1252d8: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x1252d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x1252dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252e0: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x1252E0u;
    SET_GPR_U32(ctx, 31, 0x1252E8u);
    ctx->pc = 0x1252E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252E0u;
    // 0x1252e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x1252E0u, 0x1252E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252E8u;
label_1252e8:
    // 0x1252e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1252e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1252ec: 0x2445eb70  addiu       $a1, $v0, -0x1490
    ctx->pc = 0x1252ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1252f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252f4: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x1252F4u;
    SET_GPR_U32(ctx, 31, 0x1252FCu);
    ctx->pc = 0x1252F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252F4u;
    // 0x1252f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x1252F4u, 0x1252FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252FCu;
label_1252fc:
    // 0x1252fc: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x1252fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x125300: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x125300u;
    {
        const bool branch_taken_0x125300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125300u;
        // 0x125304: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125300) {
            ctx->pc = 0x125498u;
            goto label_125498;
        }
    }
    ctx->pc = 0x125308u;
    // 0x125308: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12530c: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x12530Cu;
    SET_GPR_U32(ctx, 31, 0x125314u);
    ctx->pc = 0x125310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12530Cu;
    // 0x125310: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x12530Cu, 0x125314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125314u;
label_125314:
    // 0x125314: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x125318: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12531c: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x12531Cu;
    SET_GPR_U32(ctx, 31, 0x125324u);
    ctx->pc = 0x125320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12531Cu;
    // 0x125320: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x12531Cu, 0x125324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125324u;
label_125324:
    // 0x125324: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x125324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125328: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x125328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12532c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x12532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125330: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x125330u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x125334: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x125334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125338: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x125338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12533c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x12533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125340: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x125340u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x125344: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125348: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x125348u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x12534c: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x12534cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x125350: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x125350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x125354: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x125354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125358: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x125358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12535c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12535cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125360: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x125360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125364: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x125364u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x125368: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x125368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12536c: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x12536cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125370: 0x4a0003bf  vwaitq
    ctx->pc = 0x125370u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x125374: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x125374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125378: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x125378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12537c: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x12537cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x125380: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x125380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125384: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x125384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x125388: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x125388u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x12538c: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x12538cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125390: 0xfa860000  sqc2        $vf6, 0x0($s4)
    ctx->pc = 0x125390u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x125394: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x125394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x125398: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x125398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12539c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12539cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1253a0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1253a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1253a4: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1253a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1253a8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1253a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1253ac: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1253acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1253b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1253b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1253b4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1253b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1253b8: 0xfa860000  sqc2        $vf6, 0x0($s4)
    ctx->pc = 0x1253b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1253bc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1253bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1253c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1253c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1253c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1253c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1253c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1253C8u;
    {
        const bool branch_taken_0x1253c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1253CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C8u;
        // 0x1253cc: 0xc7a000f8  lwc1        $f0, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253c8) {
            ctx->pc = 0x1253DCu;
            goto label_1253dc;
        }
    }
    ctx->pc = 0x1253D0u;
    // 0x1253d0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1253d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1253d4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1253d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1253d8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1253d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1253dc:
    // 0x1253dc: 0x8ea201bc  lw          $v0, 0x1BC($s5)
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x1253e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1253e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1253e4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1253e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1253e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1253e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1253ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1253ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1253f0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1253f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1253f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1253f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1253f8: 0x93a200c3  lbu         $v0, 0xC3($sp)
    ctx->pc = 0x1253f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x1253fc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1253fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x125400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125404: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x125404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x125408: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12540c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12540cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x125410: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x125410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125414: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x125414u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x125418: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x125418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12541c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x12541Cu;
    {
        const bool branch_taken_0x12541c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12541Cu;
        // 0x125420: 0x31a02  srl         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12541c) {
            ctx->pc = 0x12543Cu;
            goto label_12543c;
        }
    }
    ctx->pc = 0x125424u;
    // 0x125424: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x125424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x125428: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x125428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12542c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12542cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x125430: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x125430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x125434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x125434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x125438: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x125438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_12543c:
    // 0x12543c: 0xa3a300c3  sb          $v1, 0xC3($sp)
    ctx->pc = 0x12543cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 3));
    // 0x125440: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x125440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125444: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x125444u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x125448: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x125448u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12544c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12544cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125450: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x125450u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125454: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x125454u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x125458: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x125458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12545c: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x125460: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x125460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x125464: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x125464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x125468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12546c: 0x27c5ebf0  addiu       $a1, $fp, -0x1410
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962160));
    // 0x125470: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125470u;
    SET_GPR_U32(ctx, 31, 0x125478u);
    ctx->pc = 0x125474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125470u;
    // 0x125474: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125470u, 0x125478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125478u;
label_125478:
    // 0x125478: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x125478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12547c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125480: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125484: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x125484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x125488: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x125488u;
    SET_GPR_U32(ctx, 31, 0x125490u);
    ctx->pc = 0x12548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125488u;
    // 0x12548c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x125488u, 0x125490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125490u;
label_125490:
    // 0x125490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x125490u;
    {
        const bool branch_taken_0x125490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125490u;
        // 0x125494: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125490) {
            ctx->pc = 0x1254C4u;
            goto label_1254c4;
        }
    }
    ctx->pc = 0x125498u;
label_125498:
    // 0x125498: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12549c: 0x27c5ebf0  addiu       $a1, $fp, -0x1410
    ctx->pc = 0x12549cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962160));
    // 0x1254a0: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x1254A0u;
    SET_GPR_U32(ctx, 31, 0x1254A8u);
    ctx->pc = 0x1254A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254A0u;
    // 0x1254a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x1254A0u, 0x1254A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254A8u;
label_1254a8:
    // 0x1254a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1254ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1254acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1254b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1254b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1254b8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x1254B8u;
    SET_GPR_U32(ctx, 31, 0x1254C0u);
    ctx->pc = 0x1254BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254B8u;
    // 0x1254bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x1254B8u, 0x1254C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254C0u;
label_1254c0:
    // 0x1254c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1254c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1254c4:
    // 0x1254c4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1254c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1254c8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1254c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1254cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1254ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d0: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1254d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1254d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1254d8: 0x43282b  sltu        $a1, $v0, $v1
    ctx->pc = 0x1254d8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1254dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1254dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1254e0:
    // 0x1254e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1254e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1254e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1254e8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1254e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1254ec: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1254ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1254f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1254F0u;
    {
        const bool branch_taken_0x1254f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1254f0) {
            ctx->pc = 0x1254F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1254F0u;
            // 0x1254f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125510u;
            goto label_125510;
        }
    }
    ctx->pc = 0x1254F8u;
    // 0x1254f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1254fc: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x1254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x125500: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x125500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x125504: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125504u;
    {
        const bool branch_taken_0x125504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125504) {
            ctx->pc = 0x125520u;
            goto label_125520;
        }
    }
    ctx->pc = 0x12550Cu;
    // 0x12550c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125510:
    // 0x125510: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x125510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x125514: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x125514u;
    {
        const bool branch_taken_0x125514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125514u;
        // 0x125518: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125514) {
            ctx->pc = 0x125534u;
            goto label_125534;
        }
    }
    ctx->pc = 0x12551Cu;
    // 0x12551c: 0x0  nop
    ctx->pc = 0x12551cu;
    // NOP
label_125520:
    // 0x125520: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x125520u;
    {
        const bool branch_taken_0x125520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125520u;
        // 0x125524: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125520) {
            ctx->pc = 0x125538u;
            goto label_125538;
        }
    }
    ctx->pc = 0x125528u;
    // 0x125528: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12552c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12552cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125530: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125534:
    // 0x125534: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x125534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_125538:
    // 0x125538: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x125538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12553c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12553Cu;
    {
        const bool branch_taken_0x12553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12553Cu;
        // 0x125540: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12553c) {
            ctx->pc = 0x1254E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1254e0;
        }
    }
    ctx->pc = 0x125544u;
    // 0x125544: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x125544u;
    {
        const bool branch_taken_0x125544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125544u;
        // 0x125548: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125544) {
            ctx->pc = 0x1255ACu;
            goto label_1255ac;
        }
    }
    ctx->pc = 0x12554Cu;
    // 0x12554c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12554cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125550: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x125550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12555c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12555cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125560: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x125560u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x125564: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125568: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x125568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x12556c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12556cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125570: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x125570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x125574: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x125574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125578: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x125578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12557c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125580: 0xe4960000  swc1        $f22, 0x0($a0)
    ctx->pc = 0x125580u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x125584: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125588: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x125588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12558c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12558cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125590: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x125590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125594: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x125594u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x125598: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x125598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12559c: 0xe4760000  swc1        $f22, 0x0($v1)
    ctx->pc = 0x12559cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1255a0: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x1255a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1255a4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1255a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1255a8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1255a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1255ac:
    // 0x1255ac: 0xc78180d4  lwc1        $f1, -0x7F2C($gp)
    ctx->pc = 0x1255acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1255b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1255b4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1255b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1255b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1255bc: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1255bcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1255c0: 0x4617a836  c.le.s      $f21, $f23
    ctx->pc = 0x1255c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255c4: 0x4501ff3c  bc1t        . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1255C4u;
    {
        const bool branch_taken_0x1255c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255C4u;
        // 0x1255c8: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255c4) {
            ctx->pc = 0x1252B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1252b8;
        }
    }
    ctx->pc = 0x1255CCu;
    // 0x1255cc: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x1255ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1255d0:
    // 0x1255d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255d4: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1255D4u;
    {
        const bool branch_taken_0x1255d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1255D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255D4u;
        // 0x1255d8: 0x8fa40134  lw          $a0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255d4) {
            ctx->pc = 0x125718u;
            goto label_125718;
        }
    }
    ctx->pc = 0x1255DCu;
    // 0x1255dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1255dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1255e0: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1255e4: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1255e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1255e8: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1255e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1255ec: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x1255ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x1255f0: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1255f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1255f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1255f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1255f8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1255fc: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x1255fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x125600: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x125600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x125604: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x125604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x125608: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x125608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12560c: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x12560cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x125610: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x125614: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x125614u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x125618: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12561c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12561cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x125620: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x125624: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x125624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x125628: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x125628u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x12562c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x12562cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125630: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x125630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x125634: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x125634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125638: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x125638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12563c: 0x2451023  subu        $v0, $s2, $a1
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x125640: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x125644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x125648: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x125648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12564c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12564cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125650: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x125650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x125654: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x125654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x125658: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x125658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12565c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x125660: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x125660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x125664: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x125664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125668: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x125668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12566c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x12566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x125670: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x125670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x125674: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125674u;
    SET_GPR_U32(ctx, 31, 0x12567Cu);
    ctx->pc = 0x125678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125674u;
    // 0x125678: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125674u, 0x12567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12567Cu;
label_12567c:
    // 0x12567c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125680: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x125680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x125684: 0x0  nop
    ctx->pc = 0x125684u;
    // NOP
label_125688:
    // 0x125688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12568c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x125690: 0x0  nop
    ctx->pc = 0x125690u;
    // NOP
    // 0x125694: 0x0  nop
    ctx->pc = 0x125694u;
    // NOP
    // 0x125698: 0x0  nop
    ctx->pc = 0x125698u;
    // NOP
    // 0x12569c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12569Cu;
    {
        const bool branch_taken_0x12569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12569c) {
            ctx->pc = 0x125688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125688;
        }
    }
    ctx->pc = 0x1256A4u;
    // 0x1256a4: 0x0  nop
    ctx->pc = 0x1256a4u;
    // NOP
label_1256a8:
    // 0x1256a8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1256A8u;
    SET_GPR_U32(ctx, 31, 0x1256B0u);
    ctx->pc = 0x1256ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256A8u;
    // 0x1256ac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1256A8u, 0x1256B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256B0u;
label_1256b0:
    // 0x1256b0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1256b4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1256B4u;
    {
        const bool branch_taken_0x1256b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1256B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256B4u;
        // 0x1256b8: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256b4) {
            ctx->pc = 0x1256A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1256a8;
        }
    }
    ctx->pc = 0x1256BCu;
    // 0x1256bc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1256c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1256C0u;
    {
        const bool branch_taken_0x1256c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256C0u;
        // 0x1256c4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256c0) {
            ctx->pc = 0x1256D4u;
            goto label_1256d4;
        }
    }
    ctx->pc = 0x1256C8u;
    // 0x1256c8: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1256c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1256cc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1256CCu;
    SET_GPR_U32(ctx, 31, 0x1256D4u);
    ctx->pc = 0x1256D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256CCu;
    // 0x1256d0: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1256CCu, 0x1256D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256D4u;
label_1256d4:
    // 0x1256d4: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x1256d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1256d8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1256dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1256dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1256e0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1256e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1256e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1256e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1256e8: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1256e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1256ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1256ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1256f0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1256f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1256f4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1256f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1256f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1256f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1256fc: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1256fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x125700: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x125700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x125704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125708: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x125708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x12570c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12570cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x125710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x125710u;
    {
        const bool branch_taken_0x125710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125710u;
        // 0x125714: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125710) {
            ctx->pc = 0x125720u;
            goto label_125720;
        }
    }
    ctx->pc = 0x125718u;
label_125718:
    // 0x125718: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x125718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12571c: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x12571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
label_125720:
    // 0x125720: 0xc78480d8  lwc1        $f4, -0x7F28($gp)
    ctx->pc = 0x125720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x125724: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x125724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x125728: 0xc78680dc  lwc1        $f6, -0x7F24($gp)
    ctx->pc = 0x125728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12572c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12572cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125730: 0xc78580e0  lwc1        $f5, -0x7F20($gp)
    ctx->pc = 0x125730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x125734: 0x0  nop
    ctx->pc = 0x125734u;
    // NOP
label_125738:
    // 0x125738: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x125738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12573c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x125740: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x125740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125744: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x125744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x125748: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x125748u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x12574c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12574cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x125750: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x125750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x125754: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x125754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x125758: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12575c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12575cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x125760: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x125760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x125764: 0x461fff4  bgez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x125764u;
    {
        const bool branch_taken_0x125764 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x125768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125764u;
        // 0x125768: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125764) {
            ctx->pc = 0x125738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125738;
        }
    }
    ctx->pc = 0x12576Cu;
    // 0x12576c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x12576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x125770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125774: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x125774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x125778: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x125778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x12577c: 0x1440fe6c  bnez        $v0, . + 4 + (-0x194 << 2)
    ctx->pc = 0x12577Cu;
    {
        const bool branch_taken_0x12577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12577c) {
            ctx->pc = 0x125130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125130;
        }
    }
    ctx->pc = 0x125784u;
label_125784:
    // 0x125784: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x125784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x125788: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x125788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12578c: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x12578cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125790: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x125790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x125794: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x125794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x125798: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x125798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12579c: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x12579cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1257a0: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x1257a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1257a4: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1257a8: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x1257a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1257ac: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x1257acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1257b0: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1257b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1257b4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1257b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1257b8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1257b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1257bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1257BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1257C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257BCu;
        // 0x1257c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1257C4u;
}

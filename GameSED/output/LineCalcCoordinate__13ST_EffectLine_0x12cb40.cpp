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

// Function: LineCalcCoordinate__13ST_EffectLine
// Address: 0x12cb40 - 0x12cd88
void LineCalcCoordinate__13ST_EffectLine_0x12cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineCalcCoordinate__13ST_EffectLine_0x12cb40");
#endif

    switch (ctx->pc) {
        case 0x12cb7cu: goto label_12cb7c;
        case 0x12cc90u: goto label_12cc90;
        case 0x12cd6cu: goto label_12cd6c;
        default: break;
    }

    ctx->pc = 0x12cb40u;

    // 0x12cb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12cb44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cb48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12cb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12cb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12cb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12cb54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12cb58: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x12cb58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12cb5c: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x12cb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x12cb60: 0x10650083  beq         $v1, $a1, . + 4 + (0x83 << 2)
    ctx->pc = 0x12CB60u;
    {
        const bool branch_taken_0x12cb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x12CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB60u;
        // 0x12cb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb60) {
            ctx->pc = 0x12CD70u;
            goto label_12cd70;
        }
    }
    ctx->pc = 0x12CB68u;
    // 0x12cb68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12cb6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB6Cu;
    {
        const bool branch_taken_0x12cb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB6Cu;
        // 0x12cb70: 0x8e110018  lw          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb6c) {
            ctx->pc = 0x12CB88u;
            goto label_12cb88;
        }
    }
    ctx->pc = 0x12CB74u;
    // 0x12cb74: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12CB74u;
    SET_GPR_U32(ctx, 31, 0x12CB7Cu);
    ctx->pc = 0x12CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB74u;
    // 0x12cb78: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12CB74u, 0x12CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB7Cu;
label_12cb7c:
    // 0x12cb7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB7Cu;
    {
        const bool branch_taken_0x12cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB7Cu;
        // 0x12cb80: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb7c) {
            ctx->pc = 0x12CB94u;
            goto label_12cb94;
        }
    }
    ctx->pc = 0x12CB84u;
    // 0x12cb84: 0x0  nop
    ctx->pc = 0x12cb84u;
    // NOP
label_12cb88:
    // 0x12cb88: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x12cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x12cb8c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x12cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x12cb90: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_12cb94:
    // 0x12cb94: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x12CB94u;
    {
        const bool branch_taken_0x12cb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb94) {
            ctx->pc = 0x12CB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB94u;
            // 0x12cb98: 0xc60100d4  lwc1        $f1, 0xD4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CC08u;
            goto label_12cc08;
        }
    }
    ctx->pc = 0x12CB9Cu;
    // 0x12cb9c: 0xc6030124  lwc1        $f3, 0x124($s0)
    ctx->pc = 0x12cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12cba0: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x12cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cba4: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x12cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cba8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x12cba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x12cbac: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x12cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbb0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x12cbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12cbb4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12cbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12cbb8: 0xe6030118  swc1        $f3, 0x118($s0)
    ctx->pc = 0x12cbb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x12cbbc: 0xe602011c  swc1        $f2, 0x11C($s0)
    ctx->pc = 0x12cbbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x12cbc0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x12cbc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cbc4: 0xe6010124  swc1        $f1, 0x124($s0)
    ctx->pc = 0x12cbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12cbc8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12CBC8u;
    {
        const bool branch_taken_0x12cbc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBC8u;
        // 0x12cbcc: 0xe6000128  swc1        $f0, 0x128($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbc8) {
            ctx->pc = 0x12CBD4u;
            goto label_12cbd4;
        }
    }
    ctx->pc = 0x12CBD0u;
    // 0x12cbd0: 0xe6040124  swc1        $f4, 0x124($s0)
    ctx->pc = 0x12cbd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_12cbd4:
    // 0x12cbd4: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x12cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbd8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x12cbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cbdc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12CBDCu;
    {
        const bool branch_taken_0x12cbdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cbdc) {
            ctx->pc = 0x12CBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CBDCu;
            // 0x12cbe0: 0xe6040128  swc1        $f4, 0x128($s0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CBE4u;
            goto label_12cbe4;
        }
    }
    ctx->pc = 0x12CBE4u;
label_12cbe4:
    // 0x12cbe4: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x12cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbe8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x12cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cbec: 0xc6020134  lwc1        $f2, 0x134($s0)
    ctx->pc = 0x12cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cbf0: 0xc6030138  lwc1        $f3, 0x138($s0)
    ctx->pc = 0x12cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12cbf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12cbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12cbf8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12cbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x12cbfc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x12cbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12cc00: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x12CC00u;
    {
        const bool branch_taken_0x12cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC00u;
        // 0x12cc04: 0xe6010130  swc1        $f1, 0x130($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc00) {
            ctx->pc = 0x12CD5Cu;
            goto label_12cd5c;
        }
    }
    ctx->pc = 0x12CC08u;
label_12cc08:
    // 0x12cc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12cc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cc0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12cc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cc10: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x12CC10u;
    {
        const bool branch_taken_0x12cc10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cc10) {
            ctx->pc = 0x12CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC10u;
            // 0x12cc14: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD44u;
            goto label_12cd44;
        }
    }
    ctx->pc = 0x12CC18u;
    // 0x12cc18: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x12cc1c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12cc20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CC20u;
    {
        const bool branch_taken_0x12cc20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC20u;
        // 0x12cc24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc20) {
            ctx->pc = 0x12CC38u;
            goto label_12cc38;
        }
    }
    ctx->pc = 0x12CC28u;
    // 0x12cc28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12cc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cc2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12cc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12cc30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CC30u;
    {
        const bool branch_taken_0x12cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc30) {
            ctx->pc = 0x12CC4Cu;
            goto label_12cc4c;
        }
    }
    ctx->pc = 0x12CC38u;
label_12cc38:
    // 0x12cc38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12cc3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12cc40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12cc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cc44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12cc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12cc48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x12cc48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_12cc4c:
    // 0x12cc4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12cc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12cc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cc54: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x12cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cc58: 0x0  nop
    ctx->pc = 0x12cc58u;
    // NOP
    // 0x12cc5c: 0x0  nop
    ctx->pc = 0x12cc5cu;
    // NOP
    // 0x12cc60: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12cc60u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x12cc64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12cc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12cc68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12cc68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12cc6c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12cc6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cc70: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12CC70u;
    {
        const bool branch_taken_0x12cc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC70u;
        // 0x12cc74: 0xe60100d4  swc1        $f1, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc70) {
            ctx->pc = 0x12CC9Cu;
            goto label_12cc9c;
        }
    }
    ctx->pc = 0x12CC78u;
    // 0x12cc78: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x12cc7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12cc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc84: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12cc88: 0xc047898  jal         func_11E260
    ctx->pc = 0x12CC88u;
    SET_GPR_U32(ctx, 31, 0x12CC90u);
    ctx->pc = 0x12CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC88u;
    // 0x12cc8c: 0xae0500cc  sw          $a1, 0xCC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x12CC88u, 0x12CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC90u;
label_12cc90:
    // 0x12cc90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cc94: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x12cc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12cc98: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x12cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_12cc9c:
    // 0x12cc9c: 0xc60500d4  lwc1        $f5, 0xD4($s0)
    ctx->pc = 0x12cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12cca0: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x12cca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cca4: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x12CCA4u;
    {
        const bool branch_taken_0x12cca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cca4) {
            ctx->pc = 0x12CCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCA4u;
            // 0x12cca8: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD18u;
            goto label_12cd18;
        }
    }
    ctx->pc = 0x12CCACu;
    // 0x12ccac: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x12ccb0: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x12ccb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12ccb8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12ccbc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ccc0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12ccc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12ccc4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x12ccc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x12ccc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12cccc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x12ccccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ccd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12ccd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12ccd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12ccd8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12ccdc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12ccdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12cce0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12cce4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12cce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cce8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12cce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12ccec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12ccecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ccf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12ccf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12ccf4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x12ccf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x12ccf8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x12ccf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x12ccfc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12ccfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12cd00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12cd00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12cd04: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12cd04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x12cd08: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12cd08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x12cd0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CD0Cu;
    {
        const bool branch_taken_0x12cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD0Cu;
        // 0x12cd10: 0xe603011c  swc1        $f3, 0x11C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd0c) {
            ctx->pc = 0x12CD3Cu;
            goto label_12cd3c;
        }
    }
    ctx->pc = 0x12CD14u;
    // 0x12cd14: 0x0  nop
    ctx->pc = 0x12cd14u;
    // NOP
label_12cd18:
    // 0x12cd18: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x12cd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12cd1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12cd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cd20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cd24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12cd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12cd28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cd2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12cd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12cd30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12cd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12cd34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12cd34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12cd38: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x12cd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_12cd3c:
    // 0x12cd3c: 0xe6010118  swc1        $f1, 0x118($s0)
    ctx->pc = 0x12cd3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x12cd40: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x12cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12cd44:
    // 0x12cd44: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x12cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cd48: 0xc601011c  lwc1        $f1, 0x11C($s0)
    ctx->pc = 0x12cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cd4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12cd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12cd50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12cd50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12cd54: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x12cd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x12cd58: 0xe601011c  swc1        $f1, 0x11C($s0)
    ctx->pc = 0x12cd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_12cd5c:
    // 0x12cd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd60: 0x248500e0  addiu       $a1, $a0, 0xE0
    ctx->pc = 0x12cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x12cd64: 0xc047b44  jal         func_11ED10
    ctx->pc = 0x12CD64u;
    SET_GPR_U32(ctx, 31, 0x12CD6Cu);
    ctx->pc = 0x12CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD64u;
    // 0x12cd68: 0x248600f0  addiu       $a2, $a0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED10u, 0x12CD64u, 0x12CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD6Cu;
label_12cd6c:
    // 0x12cd6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cd70:
    // 0x12cd70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cd74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cd78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12cd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cd7c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x12cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12cd80: 0x3e00008  jr          $ra
    ctx->pc = 0x12CD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD80u;
        // 0x12cd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CD88u;
}

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

// Function: ParticleCalcCoordinateRgba__17ST_EffectParticle
// Address: 0x11e9a8 - 0x11eb20
void ParticleCalcCoordinateRgba__17ST_EffectParticle_0x11e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParticleCalcCoordinateRgba__17ST_EffectParticle_0x11e9a8");
#endif

    switch (ctx->pc) {
        case 0x11ea4cu: goto label_11ea4c;
        default: break;
    }

    ctx->pc = 0x11e9a8u;

    // 0x11e9a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e9ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e9b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11e9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11e9b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x11e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11e9bc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x11E9BCu;
    {
        const bool branch_taken_0x11e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e9bc) {
            ctx->pc = 0x11E9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E9BCu;
            // 0x11e9c0: 0xc600004c  lwc1        $f0, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EA60u;
            goto label_11ea60;
        }
    }
    ctx->pc = 0x11E9C4u;
    // 0x11e9c4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x11e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e9c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e9cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11e9ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e9d0: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x11E9D0u;
    {
        const bool branch_taken_0x11e9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9D0u;
        // 0x11e9d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9d0) {
            ctx->pc = 0x11EB10u;
            goto label_11eb10;
        }
    }
    ctx->pc = 0x11E9D8u;
    // 0x11e9d8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x11e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11e9dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11e9e0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E9E0u;
    {
        const bool branch_taken_0x11e9e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9E0u;
        // 0x11e9e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9e0) {
            ctx->pc = 0x11E9F8u;
            goto label_11e9f8;
        }
    }
    ctx->pc = 0x11E9E8u;
    // 0x11e9e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11e9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e9ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11e9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11e9f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E9F0u;
    {
        const bool branch_taken_0x11e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9F0u;
        // 0x11e9f4: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9f0) {
            ctx->pc = 0x11EA14u;
            goto label_11ea14;
        }
    }
    ctx->pc = 0x11E9F8u;
label_11e9f8:
    // 0x11e9f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11e9fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11ea00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11ea00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ea04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ea04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11ea08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x11ea08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x11ea0c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x11ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ea10: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x11ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11ea14:
    // 0x11ea14: 0x0  nop
    ctx->pc = 0x11ea14u;
    // NOP
    // 0x11ea18: 0x0  nop
    ctx->pc = 0x11ea18u;
    // NOP
    // 0x11ea1c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x11ea1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x11ea20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ea20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ea24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11ea24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11ea28: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x11ea28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ea2c: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x11EA2Cu;
    {
        const bool branch_taken_0x11ea2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA2Cu;
        // 0x11ea30: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea2c) {
            ctx->pc = 0x11EB0Cu;
            goto label_11eb0c;
        }
    }
    ctx->pc = 0x11EA34u;
    // 0x11ea34: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x11ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11ea38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea3c: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x11ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11ea40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11ea40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ea44: 0xc047898  jal         func_11E260
    ctx->pc = 0x11EA44u;
    SET_GPR_U32(ctx, 31, 0x11EA4Cu);
    ctx->pc = 0x11EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA44u;
    // 0x11ea48: 0xae050030  sw          $a1, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x11EA44u, 0x11EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA4Cu;
label_11ea4c:
    // 0x11ea4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ea50: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x11ea50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x11ea54: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11EA54u;
    {
        const bool branch_taken_0x11ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA54u;
        // 0x11ea58: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea54) {
            ctx->pc = 0x11EB0Cu;
            goto label_11eb0c;
        }
    }
    ctx->pc = 0x11EA5Cu;
    // 0x11ea5c: 0x0  nop
    ctx->pc = 0x11ea5cu;
    // NOP
label_11ea60:
    // 0x11ea60: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x11ea64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ea64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ea68: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ea68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11ea6c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x11ea6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ea70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11ea70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ea74: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x11EA74u;
    {
        const bool branch_taken_0x11ea74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ea74) {
            ctx->pc = 0x11EA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EA74u;
            // 0x11ea78: 0xc6000050  lwc1        $f0, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EA94u;
            goto label_11ea94;
        }
    }
    ctx->pc = 0x11EA7Cu;
    // 0x11ea7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ea7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ea80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11ea84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ea84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ea88: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11ea88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ea8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11ea90: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x11ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ea94:
    // 0x11ea94: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x11ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ea98: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x11ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ea9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11ea9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11eaa0: 0xa203004b  sb          $v1, 0x4B($s0)
    ctx->pc = 0x11eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x11eaa4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x11eaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11eaa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11eaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11eaac: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x11eaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eab0: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x11eab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x11eab4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11EAB4u;
    {
        const bool branch_taken_0x11eab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAB4u;
        // 0x11eab8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eab4) {
            ctx->pc = 0x11EAC8u;
            goto label_11eac8;
        }
    }
    ctx->pc = 0x11EABCu;
    // 0x11eabc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11EABCu;
    {
        const bool branch_taken_0x11eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EABCu;
        // 0x11eac0: 0xe603004c  swc1        $f3, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eabc) {
            ctx->pc = 0x11EADCu;
            goto label_11eadc;
        }
    }
    ctx->pc = 0x11EAC4u;
    // 0x11eac4: 0x0  nop
    ctx->pc = 0x11eac4u;
    // NOP
label_11eac8:
    // 0x11eac8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x11eac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x11eacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11eaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ead0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11ead0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ead4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11EAD4u;
    {
        const bool branch_taken_0x11ead4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ead4) {
            ctx->pc = 0x11EAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EAD4u;
            // 0x11ead8: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EADCu;
            goto label_11eadc;
        }
    }
    ctx->pc = 0x11EADCu;
label_11eadc:
    // 0x11eadc: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x11eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eae0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11eae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11eae4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11eae4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eae8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x11EAE8u;
    {
        const bool branch_taken_0x11eae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAE8u;
        // 0x11eaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eae8) {
            ctx->pc = 0x11EB10u;
            goto label_11eb10;
        }
    }
    ctx->pc = 0x11EAF0u;
    // 0x11eaf0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x11eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eaf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11eaf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eaf8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x11EAF8u;
    {
        const bool branch_taken_0x11eaf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11eaf8) {
            ctx->pc = 0x11EAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EAF8u;
            // 0x11eafc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EB14u;
            goto label_11eb14;
        }
    }
    ctx->pc = 0x11EB00u;
    // 0x11eb00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11eb04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11eb08: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x11eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_11eb0c:
    // 0x11eb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11eb10:
    // 0x11eb10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11eb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb14:
    // 0x11eb14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB18u;
        // 0x11eb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB20u;
}

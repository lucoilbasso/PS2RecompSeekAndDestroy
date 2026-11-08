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

// Function: ParticleCalcCoordinateRgbaSp__17ST_EffectParticlePQ214effect_command9ST_P_RGBA
// Address: 0x1212b8 - 0x1213b4
void ParticleCalcCoordinateRgbaSp__17ST_EffectParticlePQ214effect_command9ST_P_RGBA_0x1212b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParticleCalcCoordinateRgbaSp__17ST_EffectParticlePQ214effect_command9ST_P_RGBA_0x1212b8");
#endif

    switch (ctx->pc) {
        case 0x121364u: goto label_121364;
        default: break;
    }

    ctx->pc = 0x1212b8u;

    // 0x1212b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1212b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1212bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1212bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1212c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1212c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1212c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1212c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1212c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1212cc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1212ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1212d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1212d4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1212D4u;
    {
        const bool branch_taken_0x1212d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212D4u;
        // 0x1212d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212d4) {
            ctx->pc = 0x121398u;
            goto label_121398;
        }
    }
    ctx->pc = 0x1212DCu;
    // 0x1212dc: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x1212dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1212e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1212e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1212e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1212e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1212e8: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x1212E8u;
    {
        const bool branch_taken_0x1212e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1212e8) {
            ctx->pc = 0x1212ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1212E8u;
            // 0x1212ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12139Cu;
            goto label_12139c;
        }
    }
    ctx->pc = 0x1212F0u;
    // 0x1212f0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1212f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1212f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1212f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1212f8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1212F8u;
    {
        const bool branch_taken_0x1212f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1212FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212F8u;
        // 0x1212fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212f8) {
            ctx->pc = 0x121310u;
            goto label_121310;
        }
    }
    ctx->pc = 0x121300u;
    // 0x121300: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121304: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121308u;
    {
        const bool branch_taken_0x121308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121308u;
        // 0x12130c: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121308) {
            ctx->pc = 0x12132Cu;
            goto label_12132c;
        }
    }
    ctx->pc = 0x121310u;
label_121310:
    // 0x121310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121318: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12131c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12131cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121320: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x121320u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x121324: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x121324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121328: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x121328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12132c:
    // 0x12132c: 0x0  nop
    ctx->pc = 0x12132cu;
    // NOP
    // 0x121330: 0x0  nop
    ctx->pc = 0x121330u;
    // NOP
    // 0x121334: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121334u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121338: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12133c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12133cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121340: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x121340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121344: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x121344u;
    {
        const bool branch_taken_0x121344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121344u;
        // 0x121348: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121344) {
            ctx->pc = 0x121398u;
            goto label_121398;
        }
    }
    ctx->pc = 0x12134Cu;
    // 0x12134c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x12134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x121350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121354: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x121354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x121358: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12135c: 0xc047898  jal         func_11E260
    ctx->pc = 0x12135Cu;
    SET_GPR_U32(ctx, 31, 0x121364u);
    ctx->pc = 0x121360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12135Cu;
    // 0x121360: 0xae050030  sw          $a1, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x12135Cu, 0x121364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121364u;
label_121364:
    // 0x121364: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x121364u;
    {
        const bool branch_taken_0x121364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121364u;
        // 0x121368: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121364) {
            ctx->pc = 0x121390u;
            goto label_121390;
        }
    }
    ctx->pc = 0x12136Cu;
    // 0x12136c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12136cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121370: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x121370u;
    {
        const bool branch_taken_0x121370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121370u;
        // 0x121374: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121370) {
            ctx->pc = 0x121394u;
            goto label_121394;
        }
    }
    ctx->pc = 0x121378u;
    // 0x121378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12137c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12137cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121380: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x121380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x121384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121384u;
    {
        const bool branch_taken_0x121384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121384u;
        // 0x121388: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121384) {
            ctx->pc = 0x121398u;
            goto label_121398;
        }
    }
    ctx->pc = 0x12138Cu;
    // 0x12138c: 0x0  nop
    ctx->pc = 0x12138cu;
    // NOP
label_121390:
    // 0x121390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_121394:
    // 0x121394: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x121394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_121398:
    // 0x121398: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12139c:
    // 0x12139c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1213a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1213a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1213a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1213a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1213a8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1213a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1213ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1213ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1213B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213ACu;
        // 0x1213b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1213ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1213B4u;
}

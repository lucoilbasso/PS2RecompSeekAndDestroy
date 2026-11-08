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

// Function: EffectLightFanCalc__FP16ST_EffectSpecial
// Address: 0x124590 - 0x124750
void EffectLightFanCalc__FP16ST_EffectSpecial_0x124590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLightFanCalc__FP16ST_EffectSpecial_0x124590");
#endif

    switch (ctx->pc) {
        case 0x124640u: goto label_124640;
        case 0x124734u: goto label_124734;
        default: break;
    }

    ctx->pc = 0x124590u;

    // 0x124590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124594: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x124594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124598: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12459c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1245a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1245a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1245a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1245a8: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x1245a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x1245ac: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1245acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1245b0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1245b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1245b4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1245b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1245b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1245b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1245bc: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
    ctx->pc = 0x1245BCu;
    {
        const bool branch_taken_0x1245bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1245bc) {
            ctx->pc = 0x1245C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245BCu;
            // 0x1245c0: 0xc6050008  lwc1        $f5, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x124684u;
            goto label_124684;
        }
    }
    ctx->pc = 0x1245C4u;
    // 0x1245c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1245c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1245c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1245cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1245CCu;
    {
        const bool branch_taken_0x1245cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245CCu;
        // 0x1245d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245cc) {
            ctx->pc = 0x1245E8u;
            goto label_1245e8;
        }
    }
    ctx->pc = 0x1245D4u;
    // 0x1245d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1245d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1245d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1245d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1245dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1245DCu;
    {
        const bool branch_taken_0x1245dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1245dc) {
            ctx->pc = 0x1245FCu;
            goto label_1245fc;
        }
    }
    ctx->pc = 0x1245E4u;
    // 0x1245e4: 0x0  nop
    ctx->pc = 0x1245e4u;
    // NOP
label_1245e8:
    // 0x1245e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1245e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1245ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1245ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1245f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1245f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1245f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1245f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1245f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1245f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1245fc:
    // 0x1245fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124600: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x124600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124604: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x124604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124608: 0x0  nop
    ctx->pc = 0x124608u;
    // NOP
    // 0x12460c: 0x0  nop
    ctx->pc = 0x12460cu;
    // NOP
    // 0x124610: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x124610u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x124614: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x124614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124618: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x124618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12461c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x12461cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124620: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x124620u;
    {
        const bool branch_taken_0x124620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124620u;
        // 0x124624: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124620) {
            ctx->pc = 0x124680u;
            goto label_124680;
        }
    }
    ctx->pc = 0x124628u;
    // 0x124628: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x124628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12462c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124630: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x124634: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x124638: 0xc047898  jal         func_11E260
    ctx->pc = 0x124638u;
    SET_GPR_U32(ctx, 31, 0x124640u);
    ctx->pc = 0x12463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124638u;
    // 0x12463c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x124638u, 0x124640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124640u;
label_124640:
    // 0x124640: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x124640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x124644: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x124644u;
    {
        const bool branch_taken_0x124644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124644u;
        // 0x124648: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124644) {
            ctx->pc = 0x124678u;
            goto label_124678;
        }
    }
    ctx->pc = 0x12464Cu;
    // 0x12464c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12464cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124650: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x124650u;
    {
        const bool branch_taken_0x124650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124650u;
        // 0x124654: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124650) {
            ctx->pc = 0x12467Cu;
            goto label_12467c;
        }
    }
    ctx->pc = 0x124658u;
    // 0x124658: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x12465c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124660: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124660u;
    {
        const bool branch_taken_0x124660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x124660) {
            ctx->pc = 0x124664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124660u;
            // 0x124664: 0xc6050008  lwc1        $f5, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x124684u;
            goto label_124684;
        }
    }
    ctx->pc = 0x124668u;
    // 0x124668: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x124668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x12466c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12466Cu;
    {
        const bool branch_taken_0x12466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12466Cu;
        // 0x124670: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12466c) {
            ctx->pc = 0x124680u;
            goto label_124680;
        }
    }
    ctx->pc = 0x124674u;
    // 0x124674: 0x0  nop
    ctx->pc = 0x124674u;
    // NOP
label_124678:
    // 0x124678: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12467c:
    // 0x12467c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12467cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_124680:
    // 0x124680: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x124680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_124684:
    // 0x124684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124688: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x124688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12468c: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x12468Cu;
    {
        const bool branch_taken_0x12468c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12468c) {
            ctx->pc = 0x124690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12468Cu;
            // 0x124690: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1246F8u;
            goto label_1246f8;
        }
    }
    ctx->pc = 0x124694u;
    // 0x124694: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x124698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x124698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12469c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1246a0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1246a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1246a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1246a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1246a8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1246a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1246ac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1246acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1246b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1246b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1246b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1246b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1246b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1246b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1246bc: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x1246bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x1246c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1246c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1246c4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1246c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1246c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1246cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1246ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1246d0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1246d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1246d4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1246d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1246d8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1246d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1246dc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1246dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1246e0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1246e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1246e4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1246e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1246e8: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x1246e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1246ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1246ECu;
    {
        const bool branch_taken_0x1246ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246ECu;
        // 0x1246f0: 0xe6020014  swc1        $f2, 0x14($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246ec) {
            ctx->pc = 0x12471Cu;
            goto label_12471c;
        }
    }
    ctx->pc = 0x1246F4u;
    // 0x1246f4: 0x0  nop
    ctx->pc = 0x1246f4u;
    // NOP
label_1246f8:
    // 0x1246f8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x1246fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1246fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x124700: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x124700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124708: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x124708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12470c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12470cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x124710: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x124710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x124714: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x124714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x124718: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x124718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_12471c:
    // 0x12471c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124720: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x124720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124724: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x124724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x124728: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12472c: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12472Cu;
    SET_GPR_U32(ctx, 31, 0x124734u);
    ctx->pc = 0x124730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12472Cu;
    // 0x124730: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12472Cu, 0x124734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124734u;
label_124734:
    // 0x124734: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124738: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12473c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12473cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124740: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x124740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124744: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x124744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124748: 0x3e00008  jr          $ra
    ctx->pc = 0x124748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124748u;
        // 0x12474c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124750u;
}

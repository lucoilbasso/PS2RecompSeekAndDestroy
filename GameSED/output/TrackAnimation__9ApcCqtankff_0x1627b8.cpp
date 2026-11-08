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

// Function: TrackAnimation__9ApcCqtankff
// Address: 0x1627b8 - 0x16299c
void TrackAnimation__9ApcCqtankff_0x1627b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrackAnimation__9ApcCqtankff_0x1627b8");
#endif

    switch (ctx->pc) {
        case 0x162848u: goto label_162848;
        case 0x1628a4u: goto label_1628a4;
        case 0x162958u: goto label_162958;
        case 0x162968u: goto label_162968;
        default: break;
    }

    ctx->pc = 0x1627b8u;

    // 0x1627b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1627bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1627bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1627c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1627c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627c4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1627c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1627c8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1627c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1627cc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1627ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1627d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1627d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1627d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1627d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1627d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1627d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1627dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1627dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1627e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1627e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1627e4: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1627e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1627e8: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1627e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1627ec: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1627ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1627f0: 0x8e221a2c  lw          $v0, 0x1A2C($s1)
    ctx->pc = 0x1627f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6700)));
    // 0x1627f4: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1627F4u;
    {
        const bool branch_taken_0x1627f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1627F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627F4u;
        // 0x1627f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627f4) {
            ctx->pc = 0x162968u;
            goto label_162968;
        }
    }
    ctx->pc = 0x1627FCu;
    // 0x1627fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1627fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162800: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x162800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162804: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162804u;
    {
        const bool branch_taken_0x162804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162804u;
        // 0x162808: 0x262211b0  addiu       $v0, $s1, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162804) {
            ctx->pc = 0x162818u;
            goto label_162818;
        }
    }
    ctx->pc = 0x16280Cu;
    // 0x16280c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x16280cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162810: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x162810u;
    {
        const bool branch_taken_0x162810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162810u;
        // 0x162814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162810) {
            ctx->pc = 0x16296Cu;
            goto label_16296c;
        }
    }
    ctx->pc = 0x162818u;
label_162818:
    // 0x162818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16281c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x16281Cu;
    {
        const bool branch_taken_0x16281c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16281c) {
            ctx->pc = 0x162820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16281Cu;
            // 0x162820: 0x8e2219c4  lw          $v0, 0x19C4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1628B8u;
            goto label_1628b8;
        }
    }
    ctx->pc = 0x162824u;
    // 0x162824: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x162824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162828: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x162828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16282c: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x16282cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x162830: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x162830u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x162834: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x162834u;
    {
        const bool branch_taken_0x162834 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x162838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162834u;
        // 0x162838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162834) {
            ctx->pc = 0x1628B4u;
            goto label_1628b4;
        }
    }
    ctx->pc = 0x16283Cu;
    // 0x16283c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x16283cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x162840: 0x263011c0  addiu       $s0, $s1, 0x11C0
    ctx->pc = 0x162840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4544));
    // 0x162844: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x162844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162848:
    // 0x162848: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x162848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16284c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16284Cu;
    {
        const bool branch_taken_0x16284c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16284Cu;
        // 0x162850: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16284c) {
            ctx->pc = 0x162858u;
            goto label_162858;
        }
    }
    ctx->pc = 0x162854u;
    // 0x162854: 0x4600b046  mov.s       $f1, $f22
    ctx->pc = 0x162854u;
    ctx->f[1] = FPU_MOV_S(ctx->f[22]);
label_162858:
    // 0x162858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16285c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x162860: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162864: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x162864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16286c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16286cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x162870: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162874: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x162874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162878: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16287c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16287cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162880: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x162880u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162884: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x162884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x162888: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16288c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x162890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162894: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x162894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x162898: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16289c: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16289Cu;
    SET_GPR_U32(ctx, 31, 0x1628A4u);
    ctx->pc = 0x1628A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16289Cu;
    // 0x1628a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16289Cu, 0x1628A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628A4u;
label_1628a4:
    // 0x1628a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1628a8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1628a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1628ac: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1628ACu;
    {
        const bool branch_taken_0x1628ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1628ac) {
            ctx->pc = 0x1628B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1628ACu;
            // 0x1628b0: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x162848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162848;
        }
    }
    ctx->pc = 0x1628B4u;
label_1628b4:
    // 0x1628b4: 0x8e2219c4  lw          $v0, 0x19C4($s1)
    ctx->pc = 0x1628b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
label_1628b8:
    // 0x1628b8: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1628B8u;
    {
        const bool branch_taken_0x1628b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628b8) {
            ctx->pc = 0x1628BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1628B8u;
            // 0x1628bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16296Cu;
            goto label_16296c;
        }
    }
    ctx->pc = 0x1628C0u;
    // 0x1628c0: 0x8e220c18  lw          $v0, 0xC18($s1)
    ctx->pc = 0x1628c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3096)));
    // 0x1628c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1628C4u;
    {
        const bool branch_taken_0x1628c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1628C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628C4u;
        // 0x1628c8: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628c4) {
            ctx->pc = 0x1628D8u;
            goto label_1628d8;
        }
    }
    ctx->pc = 0x1628CCu;
    // 0x1628cc: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1628d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1628D0u;
    {
        const bool branch_taken_0x1628d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D0u;
        // 0x1628d4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628d0) {
            ctx->pc = 0x1628DCu;
            goto label_1628dc;
        }
    }
    ctx->pc = 0x1628D8u;
label_1628d8:
    // 0x1628d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1628d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1628dc:
    // 0x1628dc: 0x8e220c1c  lw          $v0, 0xC1C($s1)
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3100)));
    // 0x1628e0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1628E0u;
    {
        const bool branch_taken_0x1628e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1628E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628E0u;
        // 0x1628e4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628e0) {
            ctx->pc = 0x1628F8u;
            goto label_1628f8;
        }
    }
    ctx->pc = 0x1628E8u;
    // 0x1628e8: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1628e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1628ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1628ECu;
    {
        const bool branch_taken_0x1628ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628ECu;
        // 0x1628f0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628ec) {
            ctx->pc = 0x1628FCu;
            goto label_1628fc;
        }
    }
    ctx->pc = 0x1628F4u;
    // 0x1628f4: 0x0  nop
    ctx->pc = 0x1628f4u;
    // NOP
label_1628f8:
    // 0x1628f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1628f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1628fc:
    // 0x1628fc: 0xc6201ac8  lwc1        $f0, 0x1AC8($s1)
    ctx->pc = 0x1628fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162900: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x162900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x162904: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x162904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162908: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16290c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16290cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162910: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x162910u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162914: 0x73800  sll         $a3, $a3, 0
    ctx->pc = 0x162914u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x162918: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x162918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x16291c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16291cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162920: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162924: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x162924u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162928: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x162928u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16292c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x162930: 0x8e261acc  lw          $a2, 0x1ACC($s1)
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6860)));
    // 0x162934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162938: 0x8e221ad0  lw          $v0, 0x1AD0($s1)
    ctx->pc = 0x162938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6864)));
    // 0x16293c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x16293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x162940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162944: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x162944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x162948: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x162948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16294c: 0xae261acc  sw          $a2, 0x1ACC($s1)
    ctx->pc = 0x16294cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 6));
    // 0x162950: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x162950u;
    SET_GPR_U32(ctx, 31, 0x162958u);
    ctx->pc = 0x162954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162950u;
    // 0x162954: 0xae221ad0  sw          $v0, 0x1AD0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x162950u, 0x162958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162958u;
label_162958:
    // 0x162958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16295c: 0x8e261ad0  lw          $a2, 0x1AD0($s1)
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6864)));
    // 0x162960: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x162960u;
    SET_GPR_U32(ctx, 31, 0x162968u);
    ctx->pc = 0x162964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162960u;
    // 0x162964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x162960u, 0x162968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162968u;
label_162968:
    // 0x162968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16296c:
    // 0x16296c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16296cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x162974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162978: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x162978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16297c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162980: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x162980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x162984: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x162984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x162988: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x162988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16298c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x16298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x162990: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x162990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162994: 0x3e00008  jr          $ra
    ctx->pc = 0x162994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162994u;
        // 0x162998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16299Cu;
}

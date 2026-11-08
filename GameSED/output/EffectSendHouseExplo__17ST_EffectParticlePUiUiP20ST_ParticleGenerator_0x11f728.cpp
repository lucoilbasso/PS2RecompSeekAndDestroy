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

// Function: EffectSendHouseExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11f728 - 0x11f93c
void EffectSendHouseExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendHouseExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f728");
#endif

    switch (ctx->pc) {
        case 0x11f808u: goto label_11f808;
        case 0x11f81cu: goto label_11f81c;
        case 0x11f83cu: goto label_11f83c;
        default: break;
    }

    ctx->pc = 0x11f728u;

    // 0x11f728: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11f72c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11f730: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11f730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f734: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f738: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11f738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f73c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11f73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x11f740: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11f740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f744: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f74c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x11f750: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11f754: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x11f758: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x11f75c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x11f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x11f760: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x11f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11f764: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x11f764u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x11f768: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x11f768u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11f76c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11f76cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11f770: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11f770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11f774: 0x8e570010  lw          $s7, 0x10($s2)
    ctx->pc = 0x11f774u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11f778: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11f77c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f780: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f780u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f784: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f784u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f788: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x11f788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11f78c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11f790: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x11f790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x11f794: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f794u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f798: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f798u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f79c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x11f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11f7a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11f7a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f7a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f7a8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f7a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f7ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f7acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f7b4: 0x4616b040  add.s       $f1, $f22, $f22
    ctx->pc = 0x11f7b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x11f7b8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x11f7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f7bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11F7BCu;
    {
        const bool branch_taken_0x11f7bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7BCu;
        // 0x11f7c0: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7bc) {
            ctx->pc = 0x11F7D0u;
            goto label_11f7d0;
        }
    }
    ctx->pc = 0x11F7C4u;
    // 0x11f7c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11F7C4u;
    {
        const bool branch_taken_0x11f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7C4u;
        // 0x11f7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c4) {
            ctx->pc = 0x11F7E0u;
            goto label_11f7e0;
        }
    }
    ctx->pc = 0x11F7CCu;
    // 0x11f7cc: 0x0  nop
    ctx->pc = 0x11f7ccu;
    // NOP
label_11f7d0:
    // 0x11f7d0: 0x4615a800  add.s       $f0, $f21, $f21
    ctx->pc = 0x11f7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x11f7d4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x11f7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f7d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11F7D8u;
    {
        const bool branch_taken_0x11f7d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f7d8) {
            ctx->pc = 0x11F7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F7D8u;
            // 0x11f7dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F7E0u;
            goto label_11f7e0;
        }
    }
    ctx->pc = 0x11F7E0u;
label_11f7e0:
    // 0x11f7e0: 0x12a00046  beqz        $s5, . + 4 + (0x46 << 2)
    ctx->pc = 0x11F7E0u;
    {
        const bool branch_taken_0x11f7e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E0u;
        // 0x11f7e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7e0) {
            ctx->pc = 0x11F8FCu;
            goto label_11f8fc;
        }
    }
    ctx->pc = 0x11F7E8u;
    // 0x11f7e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11f7ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11f7f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f7f4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11f7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f7fc: 0x247e4a80  addiu       $fp, $v1, 0x4A80
    ctx->pc = 0x11f7fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 19072));
    // 0x11f800: 0x45b023  subu        $s6, $v0, $a1
    ctx->pc = 0x11f800u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f804: 0x24930790  addiu       $s3, $a0, 0x790
    ctx->pc = 0x11f804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1936));
label_11f808:
    // 0x11f808: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11f80c: 0x52000038  beql        $s0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x11F80Cu;
    {
        const bool branch_taken_0x11f80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f80c) {
            ctx->pc = 0x11F810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F80Cu;
            // 0x11f810: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F8F0u;
            goto label_11f8f0;
        }
    }
    ctx->pc = 0x11F814u;
    // 0x11f814: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F814u;
    SET_GPR_U32(ctx, 31, 0x11F81Cu);
    ctx->pc = 0x11F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F814u;
    // 0x11f818: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F814u, 0x11F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F81Cu;
label_11f81c:
    // 0x11f81c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f81cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f820: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f824: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f824u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f828: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f828u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f82c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x11f82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f830: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f834: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F834u;
    SET_GPR_U32(ctx, 31, 0x11F83Cu);
    ctx->pc = 0x11F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F834u;
    // 0x11f838: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F834u, 0x11F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F83Cu;
label_11f83c:
    // 0x11f83c: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x11f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x11f840: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x11f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x11f844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f848: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x11f848u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x11f84c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f850: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11f850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11f854: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x11f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x11f858: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x11f858u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f85c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x11f85cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11f860: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x11f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x11f864: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x11f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x11f868: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f86c: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x11f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f870: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x11f870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x11f874: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x11f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f87c: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x11f87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11f880: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f884: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11f884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11f888: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11f888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11f88c: 0xe6020078  swc1        $f2, 0x78($s0)
    ctx->pc = 0x11f88cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x11f890: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F890u;
    {
        const bool branch_taken_0x11f890 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F890u;
        // 0x11f894: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f890) {
            ctx->pc = 0x11F89Cu;
            goto label_11f89c;
        }
    }
    ctx->pc = 0x11F898u;
    // 0x11f898: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11f898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_11f89c:
    // 0x11f89c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11f89cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f8a0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f8a4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f8a8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f8ac: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f8acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f8b0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f8b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f8b4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f8b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f8b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f8b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f8bc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f8bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f8c0: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x11f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f8c4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x11f8c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f8c8: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x11f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x11f8cc: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x11f8ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11f8d0: 0xfe030088  sd          $v1, 0x88($s0)
    ctx->pc = 0x11f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 3));
    // 0x11f8d4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x11f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x11f8d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f8dc: 0x2c430013  sltiu       $v1, $v0, 0x13
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x11f8e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F8E0u;
    {
        const bool branch_taken_0x11f8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8E0u;
        // 0x11f8e4: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8e0) {
            ctx->pc = 0x11F8ECu;
            goto label_11f8ec;
        }
    }
    ctx->pc = 0x11F8E8u;
    // 0x11f8e8: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x11f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_11f8ec:
    // 0x11f8ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_11f8f0:
    // 0x11f8f0: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x11f8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x11f8f4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x11F8F4u;
    {
        const bool branch_taken_0x11f8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F4u;
        // 0x11f8f8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f4) {
            ctx->pc = 0x11F808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f808;
        }
    }
    ctx->pc = 0x11F8FCu;
label_11f8fc:
    // 0x11f8fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11f900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11f904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f908: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11f908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11f90c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11f90cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f910: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11f910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11f914: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11f914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f918: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11f918u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11f91c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x11f91cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f920: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11f920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11f924: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x11f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11f928: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x11f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11f92c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f930: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f934: 0x3e00008  jr          $ra
    ctx->pc = 0x11F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F934u;
        // 0x11f938: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F93Cu;
}

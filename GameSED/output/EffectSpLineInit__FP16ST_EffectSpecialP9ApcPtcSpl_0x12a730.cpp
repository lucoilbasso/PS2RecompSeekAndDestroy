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

// Function: EffectSpLineInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12a730 - 0x12a8ac
void EffectSpLineInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSpLineInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12a730");
#endif

    switch (ctx->pc) {
        case 0x12a760u: goto label_12a760;
        case 0x12a7d4u: goto label_12a7d4;
        case 0x12a858u: goto label_12a858;
        default: break;
    }

    ctx->pc = 0x12a730u;

    // 0x12a730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a744: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x12a744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12a748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a74c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12a74cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a750: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a754: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x12a758: 0xc04844a  jal         func_121128
    ctx->pc = 0x12A758u;
    SET_GPR_U32(ctx, 31, 0x12A760u);
    ctx->pc = 0x12A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A758u;
    // 0x12a75c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12A758u, 0x12A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A760u;
label_12a760:
    // 0x12a760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a764: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x12a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12a768: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a76c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a76cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a770: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a770u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a778: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x12a778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x12a77c: 0xa62001b4  sh          $zero, 0x1B4($s1)
    ctx->pc = 0x12a77cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 436), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a780: 0xa62001f6  sh          $zero, 0x1F6($s1)
    ctx->pc = 0x12a780u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a784: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x12a784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x12a788: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x12a788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a78c: 0xa62201f4  sh          $v0, 0x1F4($s1)
    ctx->pc = 0x12a78cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 500), (uint16_t)GPR_U32(ctx, 2));
    // 0x12a790: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12a794: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a798: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a798u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a79c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a79cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a7a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7a4: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x12a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x12a7a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12a7ac: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a7acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a7b0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a7b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a7b4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a7b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a7c0: 0xe62001c8  swc1        $f0, 0x1C8($s1)
    ctx->pc = 0x12a7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 456), bits); }
    // 0x12a7c4: 0xa62401b6  sh          $a0, 0x1B6($s1)
    ctx->pc = 0x12a7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 4));
    // 0x12a7c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12a7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12a7cc: 0xc04844a  jal         func_121128
    ctx->pc = 0x12A7CCu;
    SET_GPR_U32(ctx, 31, 0x12A7D4u);
    ctx->pc = 0x12A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7CCu;
    // 0x12a7d0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12A7CCu, 0x12A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7D4u;
label_12a7d4:
    // 0x12a7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a7d8: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12A7D8u;
    {
        const bool branch_taken_0x12a7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7d8) {
            ctx->pc = 0x12A7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A7D8u;
            // 0x12a7dc: 0x9642001c  lhu         $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A814u;
            goto label_12a814;
        }
    }
    ctx->pc = 0x12A7E0u;
    // 0x12a7e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12a7e4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a7e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a7e8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a7e8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a7ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a7ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7f4: 0xe62001cc  swc1        $f0, 0x1CC($s1)
    ctx->pc = 0x12a7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
    // 0x12a7f8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12a7fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a7fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a800: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a800u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a804: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a804u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a80c: 0xe62001d0  swc1        $f0, 0x1D0($s1)
    ctx->pc = 0x12a80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
    // 0x12a810: 0x9642001c  lhu         $v0, 0x1C($s2)
    ctx->pc = 0x12a810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_12a814:
    // 0x12a814: 0xa62201b8  sh          $v0, 0x1B8($s1)
    ctx->pc = 0x12a814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x12a818: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12a81c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a81cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a820: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a820u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a824: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a824u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a82c: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x12a82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x12a830: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x12a830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a834: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x12a834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x12a838: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x12a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x12a83c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x12a83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x12a840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a844: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x12a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12a848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a84c: 0x246305f0  addiu       $v1, $v1, 0x5F0
    ctx->pc = 0x12a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x12a850: 0xae2201a4  sw          $v0, 0x1A4($s1)
    ctx->pc = 0x12a850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
    // 0x12a854: 0x0  nop
    ctx->pc = 0x12a854u;
    // NOP
label_12a858:
    // 0x12a858: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12a85c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A85Cu;
    {
        const bool branch_taken_0x12a85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a85c) {
            ctx->pc = 0x12A860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A85Cu;
            // 0x12a860: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A878u;
            goto label_12a878;
        }
    }
    ctx->pc = 0x12A864u;
    // 0x12a864: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x12a864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x12a868: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a86c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12A86Cu;
    {
        const bool branch_taken_0x12a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A86Cu;
        // 0x12a870: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a86c) {
            ctx->pc = 0x12A88Cu;
            goto label_12a88c;
        }
    }
    ctx->pc = 0x12A874u;
    // 0x12a874: 0x0  nop
    ctx->pc = 0x12a874u;
    // NOP
label_12a878:
    // 0x12a878: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x12a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x12a87c: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x12a87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x12a880: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12A880u;
    {
        const bool branch_taken_0x12a880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A880u;
        // 0x12a884: 0x24840490  addiu       $a0, $a0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a880) {
            ctx->pc = 0x12A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a858;
        }
    }
    ctx->pc = 0x12A888u;
    // 0x12a888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a88c:
    // 0x12a88c: 0xae2201c0  sw          $v0, 0x1C0($s1)
    ctx->pc = 0x12a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
    // 0x12a890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12a898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a89c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12a89cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a8a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8A4u;
        // 0x12a8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A8ACu;
}

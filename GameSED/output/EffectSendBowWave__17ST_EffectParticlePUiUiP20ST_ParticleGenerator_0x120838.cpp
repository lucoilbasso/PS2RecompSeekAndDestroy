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

// Function: EffectSendBowWave__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x120838 - 0x120b14
void EffectSendBowWave__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendBowWave__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120838");
#endif

    switch (ctx->pc) {
        case 0x1209f0u: goto label_1209f0;
        case 0x120a34u: goto label_120a34;
        default: break;
    }

    ctx->pc = 0x120838u;

    // 0x120838: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12083c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x12083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x120840: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x120840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x120844: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x120844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x120848: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x120848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x12084c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x12084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x120850: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x120850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x120854: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x120854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x120858: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x120858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x12085c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x12085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x120860: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x120860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x120864: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x120864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x120868: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x120868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12086c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x12086cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x120870: 0x8c970008  lw          $s7, 0x8($a0)
    ctx->pc = 0x120870u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x120874: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x120874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x120878: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12087c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12087cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120880: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120880u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120884: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x120884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x120888: 0x172840  sll         $a1, $s7, 1
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x12088c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x12088cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x120890: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x120894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120898: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12089c: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12089cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1208a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1208a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1208a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1208a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1208a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1208a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1208ac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1208acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1208b0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1208b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1208b4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1208b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1208b8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1208b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1208bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1208bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1208c0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1208c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1208c4: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1208c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1208c8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1208c8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1208cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1208ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1208d0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1208d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1208d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1208d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1208d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1208d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1208dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1208dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1208e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1208e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1208e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1208e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1208e8: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1208e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1208ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1208ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1208f0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1208f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1208f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1208f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1208f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1208f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1208fc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1208fcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120900: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x120900u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120904: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120904u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x120908: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x120908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x12090c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x12090cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120910: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x120910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120914: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x120914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120918: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x120918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12091c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12091cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x120920: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x120920u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120924: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x120924u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120928: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120928u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12092c: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12092cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x120930: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x120930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x120934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x120934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120938: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12093c: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x12093cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120940: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x120940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x120944: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x120944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x120948: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x120948u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12094c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12094cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120950: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120950u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x120954: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x120954u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x120958: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x120958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x12095c: 0x24c60790  addiu       $a2, $a2, 0x790
    ctx->pc = 0x12095cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x120960: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x120960u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x410790u));
    // 0x120964: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x120964u;
    {
        const bool branch_taken_0x120964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120964u;
        // 0x120968: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120964) {
            ctx->pc = 0x120ADCu;
            goto label_120adc;
        }
    }
    ctx->pc = 0x12096Cu;
    // 0x12096c: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x12096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x120970: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x120970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x120974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120978: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12097c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12097cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x120980: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x120980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x120984: 0x24840750  addiu       $a0, $a0, 0x750
    ctx->pc = 0x120984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x120988: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12098c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x12098cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120990: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x120990u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120994: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120998: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12099c: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x12099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1209a0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1209a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1209a4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1209a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209a8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1209a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1209ac: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1209acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1209b0: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1209b4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1209b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1209b8: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x1209b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1209bc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1209bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1209c0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1209c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1209c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1209c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1209c8: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x1209c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1209cc: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1209CCu;
    {
        const bool branch_taken_0x1209cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209CCu;
        // 0x1209d0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209cc) {
            ctx->pc = 0x120ADCu;
            goto label_120adc;
        }
    }
    ctx->pc = 0x1209D4u;
    // 0x1209d4: 0x24930010  addiu       $s3, $a0, 0x10
    ctx->pc = 0x1209d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1209d8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1209d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209dc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1209dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1209e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209e4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1209e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209e8: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x1209e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1209ec: 0x0  nop
    ctx->pc = 0x1209ecu;
    // NOP
label_1209f0:
    // 0x1209f0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1209f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1209f4: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1209f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1209f8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1209f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1209fc: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1209fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a00: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x120a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x120a04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120a08: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x120a08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a0c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a10: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a14: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x120a18: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120a1c: 0xdac30000  lqc2        $vf3, 0x0($s6)
    ctx->pc = 0x120a1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120a20: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a24: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120a2c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120A2Cu;
    SET_GPR_U32(ctx, 31, 0x120A34u);
    ctx->pc = 0x120A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A2Cu;
    // 0x120a30: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120A2Cu, 0x120A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A34u;
label_120a34:
    // 0x120a34: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x120a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x120a38: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x120a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120a3c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x120a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x120a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120a44: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x120a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x120a48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120a4c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x120a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x120a50: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x120a54: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120a58: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x120a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x120a5c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x120A5Cu;
    {
        const bool branch_taken_0x120a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A5Cu;
        // 0x120a60: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a5c) {
            ctx->pc = 0x120ADCu;
            goto label_120adc;
        }
    }
    ctx->pc = 0x120A64u;
    // 0x120a64: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120a64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120a68: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x120a68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120a6c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a70: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120a70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a74: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x120a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x120a78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120a7c: 0xdbc30000  lqc2        $vf3, 0x0($fp)
    ctx->pc = 0x120a7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x120a80: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a84: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a88: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x120a8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120a90: 0xdac30000  lqc2        $vf3, 0x0($s6)
    ctx->pc = 0x120a90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120a94: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a98: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a9c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x120a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120aa0: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x120aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x120aa4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120aa8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x120aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x120aac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120ab0: 0x2aa30015  slti        $v1, $s5, 0x15
    ctx->pc = 0x120ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x120ab4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x120ab8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x120abc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x120ABCu;
    {
        const bool branch_taken_0x120abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ABCu;
        // 0x120ac0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120abc) {
            ctx->pc = 0x120AC8u;
            goto label_120ac8;
        }
    }
    ctx->pc = 0x120AC4u;
    // 0x120ac4: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x120ac4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_120ac8:
    // 0x120ac8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120AC8u;
    {
        const bool branch_taken_0x120ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AC8u;
        // 0x120acc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ac8) {
            ctx->pc = 0x120AE0u;
            goto label_120ae0;
        }
    }
    ctx->pc = 0x120AD0u;
    // 0x120ad0: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x120ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x120ad4: 0x1620ffc6  bnez        $s1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x120AD4u;
    {
        const bool branch_taken_0x120ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AD4u;
        // 0x120ad8: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ad4) {
            ctx->pc = 0x1209F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1209f0;
        }
    }
    ctx->pc = 0x120ADCu;
label_120adc:
    // 0x120adc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x120adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_120ae0:
    // 0x120ae0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x120ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120ae4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x120ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120ae8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x120ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120aec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x120aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120af0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x120af0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120af4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x120af4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120af8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x120af8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x120afc: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x120afcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x120b00: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x120b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120b04: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x120b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x120b08: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x120b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x120B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B0Cu;
        // 0x120b10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120B14u;
}

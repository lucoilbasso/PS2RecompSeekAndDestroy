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

// Function: BrzierVectorTwoPointPeriodSetUp__17BBrzierVectorWorkG9FVector32T1ifff
// Address: 0x1a9840 - 0x1a99e8
void BrzierVectorTwoPointPeriodSetUp__17BBrzierVectorWorkG9FVector32T1ifff_0x1a9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierVectorTwoPointPeriodSetUp__17BBrzierVectorWorkG9FVector32T1ifff_0x1a9840");
#endif

    ctx->pc = 0x1a9840u;

    // 0x1a9840: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1a9840u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9844: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9848: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1a9848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a984c: 0x2485007c  addiu       $a1, $a0, 0x7C
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x1a9850: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1a9850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1a9854: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1a9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9858: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a9858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1a985c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1a985cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9860: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a9860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9864: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a9864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9868: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x1a9868u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a986c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9870: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1a9870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1a9874: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a9874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9878: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x1a9878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a987c: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9880: 0xe48e0048  swc1        $f14, 0x48($a0)
    ctx->pc = 0x1a9880u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1a9884: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1a9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x1a9888: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1a9888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1a988c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1a988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a9890: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x1a9890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1a9894: 0xe4820084  swc1        $f2, 0x84($a0)
    ctx->pc = 0x1a9894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1a9898: 0xe4810090  swc1        $f1, 0x90($a0)
    ctx->pc = 0x1a9898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1a989c: 0xe4820094  swc1        $f2, 0x94($a0)
    ctx->pc = 0x1a989cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1a98a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a98a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a98a4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1a98a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a98a8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1a98a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a98ac: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a98acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a98b0: 0xac8500dc  sw          $a1, 0xDC($a0)
    ctx->pc = 0x1a98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 5));
    // 0x1a98b4: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x1a98b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x1a98b8: 0xe48300b0  swc1        $f3, 0xB0($a0)
    ctx->pc = 0x1a98b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x1a98bc: 0xe48200b4  swc1        $f2, 0xB4($a0)
    ctx->pc = 0x1a98bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x1a98c0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1a98c4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1a98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1a98c8: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1a98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1a98cc: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1a98ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1a98d0: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1a98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1a98d4: 0xe48100bc  swc1        $f1, 0xBC($a0)
    ctx->pc = 0x1a98d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x1a98d8: 0xe48300c0  swc1        $f3, 0xC0($a0)
    ctx->pc = 0x1a98d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1a98dc: 0xe48200c4  swc1        $f2, 0xC4($a0)
    ctx->pc = 0x1a98dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x1a98e0: 0xac8600d8  sw          $a2, 0xD8($a0)
    ctx->pc = 0x1a98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 6));
    // 0x1a98e4: 0xe48000cc  swc1        $f0, 0xCC($a0)
    ctx->pc = 0x1a98e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
    // 0x1a98e8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1a98e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1a98ec: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1a98ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1a98f0: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x1a98f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a98f4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a98f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a98f8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a98f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a98fc: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a98fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a9900: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a9900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9904: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1a9904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a9908: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a9908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a990c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a990cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a9910: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a9910u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a9914: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a9914u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9918: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a9918u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a991c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a991cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a9920: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a9920u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a9924: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a9924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9928: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x1a9928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a992c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a992cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9930: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a9930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a9934: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a9934u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a9938: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a9938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a993c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1a993cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9940: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1a9940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9944: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1a9944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9948: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1a9948u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1a994c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1a994cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1a9950: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1a9950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1a9954: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a9954u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1a9958: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1a9958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1a995c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1a995cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1a9960: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1a9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9964: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9968: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a9968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a996c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a9970: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a9970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9974: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x1a9974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a9978: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a9978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a997c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a997cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a9980: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a9980u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a9984: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x1a9984u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a9988: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a9988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1a998c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9990: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x1a9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9998: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a9998u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a999c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a99a0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1a99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a99a4: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1a99a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1a99a8: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x1a99a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a99ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a99acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a99b0: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x1a99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x1a99b4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1a99b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1a99b8: 0xe48500a4  swc1        $f5, 0xA4($a0)
    ctx->pc = 0x1a99b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1a99bc: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1a99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1a99c0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a99c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a99c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a99c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a99c8: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x1a99c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x1a99cc: 0xe484009c  swc1        $f4, 0x9C($a0)
    ctx->pc = 0x1a99ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x1a99d0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a99d4: 0xac8300a8  sw          $v1, 0xA8($a0)
    ctx->pc = 0x1a99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
    // 0x1a99d8: 0xac8700b8  sw          $a3, 0xB8($a0)
    ctx->pc = 0x1a99d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 7));
    // 0x1a99dc: 0xac8700c8  sw          $a3, 0xC8($a0)
    ctx->pc = 0x1a99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 7));
    // 0x1a99e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A99E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99E0u;
        // 0x1a99e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A99E8u;
}

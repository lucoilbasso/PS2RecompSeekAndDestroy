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

// Function: entry_0011f5b8
// Address: 0x11f5b8 - 0x11f6b4
void entry_0011f5b8_0x11f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f5b8_0x11f5b8");
#endif

    ctx->pc = 0x11f5b8u;

    // 0x11f5b8: 0x461ab080  add.s       $f2, $f22, $f26
    ctx->pc = 0x11f5b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[26]);
    // 0x11f5bc: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x11f5bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11f5c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x11f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x11f5c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x11f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x11f5c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f5cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f5d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11f5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11f5d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11f5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11f5d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11f5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f5dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11f5dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f5e0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x11f5e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f5e4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f5e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f5e8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f5ec: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f5f0: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f5f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f5f4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f5f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f5f8: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f5fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f5fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f600: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f604: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x11f604u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f608: 0x4618c8c0  add.s       $f3, $f25, $f24
    ctx->pc = 0x11f608u;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
    // 0x11f60c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f610: 0xc4820080  lwc1        $f2, 0x80($a0)
    ctx->pc = 0x11f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f614: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x11f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x11f618: 0xc4840058  lwc1        $f4, 0x58($a0)
    ctx->pc = 0x11f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f61c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x11f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f620: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x11f620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x11f624: 0xc4850084  lwc1        $f5, 0x84($a0)
    ctx->pc = 0x11f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11f628: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11f628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11f62c: 0xc4860088  lwc1        $f6, 0x88($a0)
    ctx->pc = 0x11f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11f630: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11f630u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11f634: 0xe4820080  swc1        $f2, 0x80($a0)
    ctx->pc = 0x11f634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x11f638: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f63c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x11f63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11f640: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x11f640u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x11f644: 0xe4850084  swc1        $f5, 0x84($a0)
    ctx->pc = 0x11f644u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x11f648: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f64c: 0xe4840058  swc1        $f4, 0x58($a0)
    ctx->pc = 0x11f64cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x11f650: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11f650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11f654: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x11f654u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x11f658: 0xe4860088  swc1        $f6, 0x88($a0)
    ctx->pc = 0x11f658u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x11f65c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x11f65cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f660: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x11f660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11f664: 0xd9050010  lqc2        $vf5, 0x10($t0)
    ctx->pc = 0x11f664u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x11f668: 0xd9060020  lqc2        $vf6, 0x20($t0)
    ctx->pc = 0x11f668u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x11f66c: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x11f66cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x11f670: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11f670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f674: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11f674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f678: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11f678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f67c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11f67cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11f680: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x11f680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11f684: 0x4617a880  add.s       $f2, $f21, $f23
    ctx->pc = 0x11f684u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x11f688: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x11f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f68c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x11f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f690: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x11f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f694: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x11f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f698: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11f698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11f69c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11f69cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11f6a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f6a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f6a4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x11f6a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11f6a8: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x11f6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x11f6ac: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x11f6acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x11f6b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x11f6b4u;
}

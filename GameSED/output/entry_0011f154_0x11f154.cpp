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

// Function: entry_0011f154
// Address: 0x11f154 - 0x11f1e0
void entry_0011f154_0x11f154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f154_0x11f154");
#endif

    ctx->pc = 0x11f154u;

    // 0x11f154: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x11f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f158: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x11f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f15c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11f15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11f160: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f164: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x11f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f168: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11f168u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11f16c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11f16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11f170: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11f170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11f174: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x11f174u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x11f178: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11f178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x11f17c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x11f17cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11f180: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x11f180u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f184: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11f184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f188: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11f188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f18c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f190: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f194: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f198: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f198u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f19c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f19cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f1a0: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f1a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f1a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f1a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f1a8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f1ac: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x11f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f1b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1b4: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x11f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f1b8: 0xc6220078  lwc1        $f2, 0x78($s1)
    ctx->pc = 0x11f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f1bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f1c0: 0xc6230074  lwc1        $f3, 0x74($s1)
    ctx->pc = 0x11f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f1c4: 0xe6210070  swc1        $f1, 0x70($s1)
    ctx->pc = 0x11f1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x11f1c8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11f1ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11f1d0: 0xe6220078  swc1        $f2, 0x78($s1)
    ctx->pc = 0x11f1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x11f1d4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11f1d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11f1dc: 0xe6230074  swc1        $f3, 0x74($s1)
    ctx->pc = 0x11f1dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    ctx->pc = 0x11f1e0u;
}

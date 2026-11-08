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

// Function: entry_0016236c
// Address: 0x16236c - 0x1623c8
void entry_0016236c_0x16236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016236c_0x16236c");
#endif

    ctx->pc = 0x16236cu;

    // 0x16236c: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x162370: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x162374: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x162374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162378: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x162378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16237c: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x16237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162380: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x162380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x162384: 0xc7808348  lwc1        $f0, -0x7CB8($gp)
    ctx->pc = 0x162384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162388: 0x46160d02  mul.s       $f20, $f1, $f22
    ctx->pc = 0x162388u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x16238c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16238cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162390: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162394: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x162394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162398: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x162398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16239c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16239cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1623a0: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1623a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1623a4: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x1623a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1623a8: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x1623a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1623ac: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x1623acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1623b0: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x1623b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1623b4: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x1623b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1623b8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1623b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1623bc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1623BCu;
    {
        const bool branch_taken_0x1623bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623bc) {
            ctx->pc = 0x16257Cu;
            return;
        }
    }
    ctx->pc = 0x1623C4u;
    // 0x1623c4: 0x0  nop
    ctx->pc = 0x1623c4u;
    // NOP
    ctx->pc = 0x1623c8u;
}

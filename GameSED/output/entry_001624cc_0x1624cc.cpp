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

// Function: entry_001624cc
// Address: 0x1624cc - 0x162520
void entry_001624cc_0x1624cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001624cc_0x1624cc");
#endif

    ctx->pc = 0x1624ccu;

    // 0x1624cc: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x1624ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1624d0: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1624d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1624d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1624d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1624d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1624dc: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1624dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1624e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1624e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1624e4: 0x46160502  mul.s       $f20, $f0, $f22
    ctx->pc = 0x1624e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1624e8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1624e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1624ec: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1624ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1624f0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1624f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1624f4: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1624f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1624f8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1624f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1624fc: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1624fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162500: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x162500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x162504: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x162504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x162508: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x162508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x16250c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x16250cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x162510: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x162510u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x162514: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x162514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x162518: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x162518u;
    {
        const bool branch_taken_0x162518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162518) {
            ctx->pc = 0x16257Cu;
            return;
        }
    }
    ctx->pc = 0x162520u;
}

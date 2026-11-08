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

// Function: entry_0016dd70
// Address: 0x16dd70 - 0x16dda8
void entry_0016dd70_0x16dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dd70_0x16dd70");
#endif

    ctx->pc = 0x16dd70u;

    // 0x16dd70: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16dd70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16dd74: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16dd74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16dd78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16dd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16dd7c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x16dd7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16dd80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16dd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16dd84: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x16dd84u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16dd88: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x16dd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16dd8c: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x16dd8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16dd90: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x16dd90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x16dd94: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x16dd94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16dd98: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x16dd98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16dd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16dd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dda0: 0xe64002f4  swc1        $f0, 0x2F4($s2)
    ctx->pc = 0x16dda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
    // 0x16dda4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->pc = 0x16dda8u;
}

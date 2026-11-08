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

// Function: entry_0012c2ac
// Address: 0x12c2ac - 0x12c2dc
void entry_0012c2ac_0x12c2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c2ac_0x12c2ac");
#endif

    ctx->pc = 0x12c2acu;

    // 0x12c2ac: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x12c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x12c2b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c2b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c2b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c2b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c2b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c2bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c2bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2c4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x12c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x12c2c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c2cc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c2ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c2d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c2d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c2d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c2d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x12c2dcu;
}

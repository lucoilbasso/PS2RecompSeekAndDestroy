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

// Function: entry_0012c7a0
// Address: 0x12c7a0 - 0x12c7fc
void entry_0012c7a0_0x12c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c7a0_0x12c7a0");
#endif

    ctx->pc = 0x12c7a0u;

    // 0x12c7a0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7a4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7a8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7b0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x12c7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x12c7b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c7b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7c8: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x12c7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x12c7cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12c7d0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7d4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7d4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7e0: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x12c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x12c7e4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c7e8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7f8: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x12c7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    ctx->pc = 0x12c7fcu;
}

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

// Function: entry_0012b4d4
// Address: 0x12b4d4 - 0x12b524
void entry_0012b4d4_0x12b4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b4d4_0x12b4d4");
#endif

    ctx->pc = 0x12b4d4u;

    // 0x12b4d4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12b4d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12b4dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12b4e0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12b4e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b4e4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12b4e4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b4e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12b4e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b4f0: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x12b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x12b4f4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x12b4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x12b4f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b4fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12b4fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b500: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12b500u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b504: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12b504u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b50c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x12b50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x12b510: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12b514: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12b514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b518: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12b518u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b51c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12b51cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x12b524u;
}

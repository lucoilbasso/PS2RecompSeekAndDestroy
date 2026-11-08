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

// Function: entry_001a9df0
// Address: 0x1a9df0 - 0x1a9e38
void entry_001a9df0_0x1a9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9df0_0x1a9df0");
#endif

    ctx->pc = 0x1a9df0u;

    // 0x1a9df0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a9df4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9df4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9df8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9df8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9dfc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9dfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e04: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a9e08: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a9e0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9e0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9e10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9e10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9e14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9e14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e1c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1a9e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9e20: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a9e24: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9e24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9e28: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9e28u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9e2c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9e2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e34: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1a9e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    ctx->pc = 0x1a9e38u;
}

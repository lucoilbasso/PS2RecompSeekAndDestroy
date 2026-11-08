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

// Function: entry_00169e14
// Address: 0x169e14 - 0x169e8c
void entry_00169e14_0x169e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169e14_0x169e14");
#endif

    ctx->pc = 0x169e14u;

    // 0x169e14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e1c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e20: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169e2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169e30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169e30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169e34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169e34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169e3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e44: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x169e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x169e48: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169e4c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169e4cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169e50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169e50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169e58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e5c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e60: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x169e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x169e64: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169e68: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169e68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169e6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169e6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169e74: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x169e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x169e78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x169e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x169e7c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x169e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x169e80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x169e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x169e84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169e88: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x169e8cu;
}

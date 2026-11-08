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

// Function: entry_00169fc8
// Address: 0x169fc8 - 0x16a054
void entry_00169fc8_0x169fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169fc8_0x169fc8");
#endif

    ctx->pc = 0x169fc8u;

    // 0x169fc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169fcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fd0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169fd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169fd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169fdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169fe0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169fe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169fe4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169fe4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169fe8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169fe8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169ff0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169ff4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169ff8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x169ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x169ffc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16a000: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16a000u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a004: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16a004u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16a008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a00c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a010: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16a014: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x16a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x16a018: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16a018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16a01c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16a01cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a020: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16a020u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16a024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a028: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x16a02c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x16a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16a030: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x16a034: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x16a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x16a038: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16a03c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x16a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a040: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a044: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16a044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a048: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16a048u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16a04c: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x16a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16a050: 0x26c21224  addiu       $v0, $s6, 0x1224
    ctx->pc = 0x16a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4644));
    ctx->pc = 0x16a054u;
}

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

// Function: entry_0010edb0
// Address: 0x10edb0 - 0x10ef00
void entry_0010edb0_0x10edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010edb0_0x10edb0");
#endif

    ctx->pc = 0x10edb0u;

label_10edb0:
    // 0x10edb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10edbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edc0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edc4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x10edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x10edc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edcc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x10edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x10edd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edd8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eddc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ede0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ede0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ede4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ede4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10edec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edf4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x10edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x10edf8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10edf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10edfc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10edfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee00: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee10: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x10ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x10ee14: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee18: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee28: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee2c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x10ee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x10ee30: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x10ee30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x10ee34: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee38: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee38u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee3c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10ee44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ee48: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ee48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x10ee4c: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x10ee4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x10ee50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee58: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee5c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee5cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee60: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10ee68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ee6c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ee6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x10ee70: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x10ee70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x10ee74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee78: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee7c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee80: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee84: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10ee8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ee90: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x10ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x10ee94: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ee94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x10ee98: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x10ee98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x10ee9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eea0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10eea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eea4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10eea8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10eea8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10eeac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10eeacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10eeb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10eeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eeb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eeb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10eeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eebc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x10eebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x10eec0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10eec4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10eec4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10eec8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10eec8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10eecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eed4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10eed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eed8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x10eed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x10eedc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eedcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10eee0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10eee0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10eee4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10eee4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10eee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10eee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eeec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10eef0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x10eef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x10eef4: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x10eef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x10eef8: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x10EEF8u;
    {
        const bool branch_taken_0x10eef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF8u;
        // 0x10eefc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eef8) {
            ctx->pc = 0x10EDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10edb0;
        }
    }
    ctx->pc = 0x10EF00u;
}

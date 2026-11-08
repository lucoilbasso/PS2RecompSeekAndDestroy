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

// Function: entry_00169f00
// Address: 0x169f00 - 0x169f90
void entry_00169f00_0x169f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169f00_0x169f00");
#endif

    ctx->pc = 0x169f00u;

    // 0x169f00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f0c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f18: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169f1c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169f1cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169f20: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169f20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f30: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x169f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x169f34: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169f38: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169f38u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169f3c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169f3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f4c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x169f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x169f50: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169f50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169f54: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169f54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169f58: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169f58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f60: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x169f64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x169f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x169f68: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x169f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x169f6c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x169f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x169f70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169f74: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x169f78: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x169f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169f7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x169f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169f80: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x169f80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169f84: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x169f84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169f88: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x169F88u;
    {
        const bool branch_taken_0x169f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F88u;
        // 0x169f8c: 0x26c2120c  addiu       $v0, $s6, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f88) {
            ctx->pc = 0x16A054u;
            return;
        }
    }
    ctx->pc = 0x169F90u;
}

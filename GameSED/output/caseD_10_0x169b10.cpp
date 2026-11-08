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

// Function: caseD_10
// Address: 0x169b10 - 0x169ba8
void caseD_10_0x169b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x169b10");
#endif

    ctx->pc = 0x169b10u;

    // 0x169b10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169b18: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169b1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169b20: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169b20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169b24: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169b24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169b28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169b28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b30: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169b34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x169b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x169b38: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x169b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x169b3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169b40: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169b44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169b44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169b48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169b48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b50: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169b54: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x169b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x169b58: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169b5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169b60: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169b60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169b64: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169b64u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169b68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x169b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169b78: 0x26c41190  addiu       $a0, $s6, 0x1190
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4496));
    // 0x169b7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x169b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x169b80: 0x26c31180  addiu       $v1, $s6, 0x1180
    ctx->pc = 0x169b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4480));
    // 0x169b84: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x169b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x169b88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x169b8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x169b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169b90: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x169b90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169b94: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x169b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169b98: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x169b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169b9c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x169B9Cu;
    {
        const bool branch_taken_0x169b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B9Cu;
        // 0x169ba0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b9c) {
            ctx->pc = 0x16A080u;
            return;
        }
    }
    ctx->pc = 0x169BA4u;
    // 0x169ba4: 0x0  nop
    ctx->pc = 0x169ba4u;
    // NOP
    ctx->pc = 0x169ba8u;
}

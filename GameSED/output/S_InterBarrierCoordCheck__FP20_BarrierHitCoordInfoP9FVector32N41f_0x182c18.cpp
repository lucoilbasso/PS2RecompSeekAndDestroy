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

// Function: S_InterBarrierCoordCheck__FP20_BarrierHitCoordInfoP9FVector32N41f
// Address: 0x182c18 - 0x182d68
void S_InterBarrierCoordCheck__FP20_BarrierHitCoordInfoP9FVector32N41f_0x182c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_InterBarrierCoordCheck__FP20_BarrierHitCoordInfoP9FVector32N41f_0x182c18");
#endif

    ctx->pc = 0x182c18u;

    // 0x182c18: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x182c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c1c: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x182c1cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x182c20: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x182c20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182c24: 0xd9070000  lqc2        $vf7, 0x0($t0)
    ctx->pc = 0x182c24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x182c28: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x182c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182c2c: 0xd9280000  lqc2        $vf8, 0x0($t1)
    ctx->pc = 0x182c2cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182c30: 0x4bc6296c  vsub.xyz    $vf5, $vf5, $vf6
    ctx->pc = 0x182c30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x182c34: 0x4bc639ec  vsub.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x182c34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182c38: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x182c38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x182c3c: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x182c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x182c40: 0x4bc542fe  vopmula.xyz $ACC, $vf8, $vf5
    ctx->pc = 0x182c40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x182c44: 0x4bc82aae  vopmsub.xyz $vf10, $vf5, $vf8
    ctx->pc = 0x182c44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x182c48: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x182c48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x182c4c: 0x4bc53aee  vopmsub.xyz $vf11, $vf7, $vf5
    ctx->pc = 0x182c4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x182c50: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x182c50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x182c54: 0x4bc7426e  vopmsub.xyz $vf9, $vf8, $vf7
    ctx->pc = 0x182c54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x182c58: 0x4bcb432a  vmul.xyz    $vf12, $vf8, $vf11
    ctx->pc = 0x182c58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x182c5c: 0x4bcb23ea  vmul.xyz    $vf15, $vf4, $vf11
    ctx->pc = 0x182c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x182c60: 0x4bca23aa  vmul.xyz    $vf14, $vf4, $vf10
    ctx->pc = 0x182c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x182c64: 0x4bc9236a  vmul.xyz    $vf13, $vf4, $vf9
    ctx->pc = 0x182c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x182c68: 0x4b0c09bc  vmulax.x    $ACC, $vf1, $vf12x
    ctx->pc = 0x182c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182c6c: 0x4b0c08bd  vmadday.x   $ACC, $vf1, $vf12y
    ctx->pc = 0x182c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182c70: 0x4b0c0b0a  vmaddz.x    $vf12, $vf1, $vf12z
    ctx->pc = 0x182c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x182c74: 0x4a8e09bc  vmulax.y    $ACC, $vf1, $vf14x
    ctx->pc = 0x182c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x182c78: 0x4a8e08bd  vmadday.y   $ACC, $vf1, $vf14y
    ctx->pc = 0x182c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x182c7c: 0x4a8e088a  vmaddz.y    $vf2, $vf1, $vf14z
    ctx->pc = 0x182c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182c80: 0x4a6c03bc  vdiv        $Q, $vf0w, $vf12x
    ctx->pc = 0x182c80u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x182c84: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x182c84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x182c88: 0x4b0d09bc  vmulax.x    $ACC, $vf1, $vf13x
    ctx->pc = 0x182c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182c8c: 0x4b0d08bd  vmadday.x   $ACC, $vf1, $vf13y
    ctx->pc = 0x182c8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182c90: 0x4b0d088a  vmaddz.x    $vf2, $vf1, $vf13z
    ctx->pc = 0x182c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182c94: 0x4a4f09bc  vmulax.z    $ACC, $vf1, $vf15x
    ctx->pc = 0x182c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x182c98: 0x4a4f08bd  vmadday.z   $ACC, $vf1, $vf15y
    ctx->pc = 0x182c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x182c9c: 0x4a4f088a  vmaddz.z    $vf2, $vf1, $vf15z
    ctx->pc = 0x182c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182ca0: 0x4a0003bf  vwaitq
    ctx->pc = 0x182ca0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x182ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182ca8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x182ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182cac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x182cacu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x182cb0: 0xc7818584  lwc1        $f1, -0x7A7C($gp)
    ctx->pc = 0x182cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182cb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182cb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x182CB8u;
    {
        const bool branch_taken_0x182cb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB8u;
        // 0x182cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cb8) {
            ctx->pc = 0x182CC8u;
            goto label_182cc8;
        }
    }
    ctx->pc = 0x182CC0u;
    // 0x182cc0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x182cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x182cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182cc8:
    // 0x182cc8: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x182CC8u;
    {
        const bool branch_taken_0x182cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CC8u;
        // 0x182ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cc8) {
            ctx->pc = 0x182D60u;
            goto label_182d60;
        }
    }
    ctx->pc = 0x182CD0u;
    // 0x182cd0: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x182cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x182cd4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x182cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182cd8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x182cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182cdc: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x182cdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x182ce0: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x182ce0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x182ce4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x182ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ce8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x182CE8u;
    {
        const bool branch_taken_0x182ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ce8) {
            ctx->pc = 0x182D34u;
            goto label_182d34;
        }
    }
    ctx->pc = 0x182CF0u;
    // 0x182cf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182cf4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x182cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x182cf8: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x182cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x182cfc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x182cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d00: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x182D00u;
    {
        const bool branch_taken_0x182d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d00) {
            ctx->pc = 0x182D34u;
            goto label_182d34;
        }
    }
    ctx->pc = 0x182D08u;
    // 0x182d08: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x182d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182d0c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x182d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182d10: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x182d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x182d14: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x182d14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x182d18: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x182D1Cu;
    {
        const bool branch_taken_0x182d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d1c) {
            ctx->pc = 0x182D34u;
            goto label_182d34;
        }
    }
    ctx->pc = 0x182D24u;
    // 0x182d24: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x182d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x182d28: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x182d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d2c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x182D2Cu;
    {
        const bool branch_taken_0x182d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d2c) {
            ctx->pc = 0x182D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182D2Cu;
            // 0x182d30: 0x46021840  add.s       $f1, $f3, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182D40u;
            goto label_182d40;
        }
    }
    ctx->pc = 0x182D34u;
label_182d34:
    // 0x182d34: 0x3e00008  jr          $ra
    ctx->pc = 0x182D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D34u;
        // 0x182d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182D3Cu;
    // 0x182d3c: 0x0  nop
    ctx->pc = 0x182d3cu;
    // NOP
label_182d40:
    // 0x182d40: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x182d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x182d44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x182D48u;
    {
        const bool branch_taken_0x182d48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D48u;
        // 0x182d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d48) {
            ctx->pc = 0x182D60u;
            goto label_182d60;
        }
    }
    ctx->pc = 0x182D50u;
    // 0x182d50: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x182d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x182D54u;
    {
        const bool branch_taken_0x182d54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D54u;
        // 0x182d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d54) {
            ctx->pc = 0x182D60u;
            goto label_182d60;
        }
    }
    ctx->pc = 0x182D5Cu;
    // 0x182d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182d60:
    // 0x182d60: 0x3e00008  jr          $ra
    ctx->pc = 0x182D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182D68u;
}

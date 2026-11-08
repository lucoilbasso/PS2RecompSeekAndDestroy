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

// Function: entry_00180ed8
// Address: 0x180ed8 - 0x180f94
void entry_00180ed8_0x180ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180ed8_0x180ed8");
#endif

    ctx->pc = 0x180ed8u;

    // 0x180ed8: 0x4503012f  bc1tl       . + 4 + (0x12F << 2)
    ctx->pc = 0x180ED8u;
    {
        const bool branch_taken_0x180ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180ed8) {
            ctx->pc = 0x180EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180ED8u;
            // 0x180edc: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            return;
        }
    }
    ctx->pc = 0x180EE0u;
    // 0x180ee0: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x180ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180ee4: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x180ee4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x180ee8: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x180ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180eec: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x180eecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180ef0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x180ef0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180ef4: 0xd9470000  lqc2        $vf7, 0x0($t2)
    ctx->pc = 0x180ef4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x180ef8: 0xd9c40000  lqc2        $vf4, 0x0($t6)
    ctx->pc = 0x180ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x180efc: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x180efcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180f00: 0x4bc6296c  vsub.xyz    $vf5, $vf5, $vf6
    ctx->pc = 0x180f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180f04: 0x4bc639ec  vsub.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x180f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x180f08: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x180f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x180f0c: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x180f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180f10: 0x4bc542fe  vopmula.xyz $ACC, $vf8, $vf5
    ctx->pc = 0x180f10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180f14: 0x4bc82aae  vopmsub.xyz $vf10, $vf5, $vf8
    ctx->pc = 0x180f14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x180f18: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x180f18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180f1c: 0x4bc53aee  vopmsub.xyz $vf11, $vf7, $vf5
    ctx->pc = 0x180f1cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x180f20: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x180f20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180f24: 0x4bc7426e  vopmsub.xyz $vf9, $vf8, $vf7
    ctx->pc = 0x180f24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x180f28: 0x4bcb432a  vmul.xyz    $vf12, $vf8, $vf11
    ctx->pc = 0x180f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180f2c: 0x4bcb23ea  vmul.xyz    $vf15, $vf4, $vf11
    ctx->pc = 0x180f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x180f30: 0x4bca23aa  vmul.xyz    $vf14, $vf4, $vf10
    ctx->pc = 0x180f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x180f34: 0x4bc9236a  vmul.xyz    $vf13, $vf4, $vf9
    ctx->pc = 0x180f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x180f38: 0x4b0c09bc  vmulax.x    $ACC, $vf1, $vf12x
    ctx->pc = 0x180f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f3c: 0x4b0c08bd  vmadday.x   $ACC, $vf1, $vf12y
    ctx->pc = 0x180f3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f40: 0x4b0c0b0a  vmaddz.x    $vf12, $vf1, $vf12z
    ctx->pc = 0x180f40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180f44: 0x4a8e09bc  vmulax.y    $ACC, $vf1, $vf14x
    ctx->pc = 0x180f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x180f48: 0x4a8e08bd  vmadday.y   $ACC, $vf1, $vf14y
    ctx->pc = 0x180f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x180f4c: 0x4a8e088a  vmaddz.y    $vf2, $vf1, $vf14z
    ctx->pc = 0x180f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f50: 0x4a6c03bc  vdiv        $Q, $vf0w, $vf12x
    ctx->pc = 0x180f50u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x180f54: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x180f54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x180f58: 0x4b0d09bc  vmulax.x    $ACC, $vf1, $vf13x
    ctx->pc = 0x180f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f5c: 0x4b0d08bd  vmadday.x   $ACC, $vf1, $vf13y
    ctx->pc = 0x180f5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f60: 0x4b0d088a  vmaddz.x    $vf2, $vf1, $vf13z
    ctx->pc = 0x180f60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f64: 0x4a4f09bc  vmulax.z    $ACC, $vf1, $vf15x
    ctx->pc = 0x180f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x180f68: 0x4a4f08bd  vmadday.z   $ACC, $vf1, $vf15y
    ctx->pc = 0x180f68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x180f6c: 0x4a4f088a  vmaddz.z    $vf2, $vf1, $vf15z
    ctx->pc = 0x180f6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f70: 0x4a0003bf  vwaitq
    ctx->pc = 0x180f70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x180f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180f78: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x180f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f7c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x180f7cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x180f80: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x180f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180f84: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x180F84u;
    {
        const bool branch_taken_0x180f84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F84u;
        // 0x180f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f84) {
            ctx->pc = 0x180F94u;
            return;
        }
    }
    ctx->pc = 0x180F8Cu;
    // 0x180f8c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x180f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x180f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x180f94u;
}

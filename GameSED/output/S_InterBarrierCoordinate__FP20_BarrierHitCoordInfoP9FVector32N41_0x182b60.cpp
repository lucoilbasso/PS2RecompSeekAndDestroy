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

// Function: S_InterBarrierCoordinate__FP20_BarrierHitCoordInfoP9FVector32N41
// Address: 0x182b60 - 0x182c14
void S_InterBarrierCoordinate__FP20_BarrierHitCoordInfoP9FVector32N41_0x182b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_InterBarrierCoordinate__FP20_BarrierHitCoordInfoP9FVector32N41_0x182b60");
#endif

    ctx->pc = 0x182b60u;

    // 0x182b60: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x182b60u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x182b64: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x182b64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182b68: 0xd9070000  lqc2        $vf7, 0x0($t0)
    ctx->pc = 0x182b68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x182b6c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x182b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182b70: 0xd9280000  lqc2        $vf8, 0x0($t1)
    ctx->pc = 0x182b70u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182b74: 0x4bc6296c  vsub.xyz    $vf5, $vf5, $vf6
    ctx->pc = 0x182b74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x182b78: 0x4bc639ec  vsub.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x182b78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182b7c: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x182b7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x182b80: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x182b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x182b84: 0x4bc542fe  vopmula.xyz $ACC, $vf8, $vf5
    ctx->pc = 0x182b84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x182b88: 0x4bc82aae  vopmsub.xyz $vf10, $vf5, $vf8
    ctx->pc = 0x182b88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x182b8c: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x182b8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x182b90: 0x4bc53aee  vopmsub.xyz $vf11, $vf7, $vf5
    ctx->pc = 0x182b90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x182b94: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x182b94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x182b98: 0x4bc7426e  vopmsub.xyz $vf9, $vf8, $vf7
    ctx->pc = 0x182b98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x182b9c: 0x4bcb432a  vmul.xyz    $vf12, $vf8, $vf11
    ctx->pc = 0x182b9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x182ba0: 0x4bcb23ea  vmul.xyz    $vf15, $vf4, $vf11
    ctx->pc = 0x182ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x182ba4: 0x4bca23aa  vmul.xyz    $vf14, $vf4, $vf10
    ctx->pc = 0x182ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x182ba8: 0x4bc9236a  vmul.xyz    $vf13, $vf4, $vf9
    ctx->pc = 0x182ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x182bac: 0x4b0c09bc  vmulax.x    $ACC, $vf1, $vf12x
    ctx->pc = 0x182bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182bb0: 0x4b0c08bd  vmadday.x   $ACC, $vf1, $vf12y
    ctx->pc = 0x182bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182bb4: 0x4b0c0b0a  vmaddz.x    $vf12, $vf1, $vf12z
    ctx->pc = 0x182bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x182bb8: 0x4a8e09bc  vmulax.y    $ACC, $vf1, $vf14x
    ctx->pc = 0x182bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x182bbc: 0x4a8e08bd  vmadday.y   $ACC, $vf1, $vf14y
    ctx->pc = 0x182bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x182bc0: 0x4a8e088a  vmaddz.y    $vf2, $vf1, $vf14z
    ctx->pc = 0x182bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182bc4: 0x4a6c03bc  vdiv        $Q, $vf0w, $vf12x
    ctx->pc = 0x182bc4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x182bc8: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x182bc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x182bcc: 0x4b0d09bc  vmulax.x    $ACC, $vf1, $vf13x
    ctx->pc = 0x182bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182bd0: 0x4b0d08bd  vmadday.x   $ACC, $vf1, $vf13y
    ctx->pc = 0x182bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x182bd4: 0x4b0d088a  vmaddz.x    $vf2, $vf1, $vf13z
    ctx->pc = 0x182bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182bd8: 0x4a4f09bc  vmulax.z    $ACC, $vf1, $vf15x
    ctx->pc = 0x182bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x182bdc: 0x4a4f08bd  vmadday.z   $ACC, $vf1, $vf15y
    ctx->pc = 0x182bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x182be0: 0x4a4f088a  vmaddz.z    $vf2, $vf1, $vf15z
    ctx->pc = 0x182be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182be4: 0x4a0003bf  vwaitq
    ctx->pc = 0x182be4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x182be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182bec: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x182becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x182bf0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x182bf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x182bf4: 0xc7818580  lwc1        $f1, -0x7A80($gp)
    ctx->pc = 0x182bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182bf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182bfc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x182BFCu;
    {
        const bool branch_taken_0x182bfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BFCu;
        // 0x182c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bfc) {
            ctx->pc = 0x182C0Cu;
            goto label_182c0c;
        }
    }
    ctx->pc = 0x182C04u;
    // 0x182c04: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x182c04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x182c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182c0c:
    // 0x182c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x182C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182C14u;
}

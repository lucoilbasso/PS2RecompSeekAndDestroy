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

// Function: entry_00122ae0
// Address: 0x122ae0 - 0x122c10
void entry_00122ae0_0x122ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122ae0_0x122ae0");
#endif

    ctx->pc = 0x122ae0u;

    // 0x122ae0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x122ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x122ae4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x122ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x122ae8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122aec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x122aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x122af0: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x122af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x122af4: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x122af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    // 0x122af8: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x122af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x122afc: 0x24c65c80  addiu       $a2, $a2, 0x5C80
    ctx->pc = 0x122afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23680));
    // 0x122b00: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x122b00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x122b04: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x122b04u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x122b08: 0x4be7433d  vmr32.xyzw  $vf7, $vf8
    ctx->pc = 0x122b08u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x122b0c: 0x4be63b3d  vmr32.xyzw  $vf6, $vf7
    ctx->pc = 0x122b0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x122b10: 0xda690020  lqc2        $vf9, 0x20($s3)
    ctx->pc = 0x122b10u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x122b14: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x122b14u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x122b18: 0xd8b50010  lqc2        $vf21, 0x10($a1)
    ctx->pc = 0x122b18u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x122b1c: 0xd8b60020  lqc2        $vf22, 0x20($a1)
    ctx->pc = 0x122b1cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x122b20: 0xd8b70030  lqc2        $vf23, 0x30($a1)
    ctx->pc = 0x122b20u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x122b24: 0x4be9a1bc  vmulax.xyzw $ACC, $vf20, $vf9x
    ctx->pc = 0x122b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b28: 0x4be9a8bd  vmadday.xyzw $ACC, $vf21, $vf9y
    ctx->pc = 0x122b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b2c: 0x4be9b0be  vmaddaz.xyzw $ACC, $vf22, $vf9z
    ctx->pc = 0x122b2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b30: 0x4be9bdcb  vmaddw.xyzw $vf23, $vf23, $vf9w
    ctx->pc = 0x122b30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x122b34: 0x4bec033c  vmove.xyzw  $vf12, $vf0
    ctx->pc = 0x122b34u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x122b38: 0x4beca1bc  vmulax.xyzw $ACC, $vf20, $vf12x
    ctx->pc = 0x122b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b3c: 0x4beca8bd  vmadday.xyzw $ACC, $vf21, $vf12y
    ctx->pc = 0x122b3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b40: 0x4becb0be  vmaddaz.xyzw $ACC, $vf22, $vf12z
    ctx->pc = 0x122b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b44: 0x4becbacb  vmaddw.xyzw $vf11, $vf23, $vf12w
    ctx->pc = 0x122b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x122b48: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x122b48u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122b4c: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x122b4cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122b50: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x122b50u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x122b54: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x122b54u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x122b58: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x122b58u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122b5c: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x122b5cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122b60: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x122b60u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x122b64: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x122b64u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x122b68: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x122b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b6c: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x122b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b70: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x122b70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b74: 0x4bebfc0b  vmaddw.xyzw $vf16, $vf31, $vf11w
    ctx->pc = 0x122b74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x122b78: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x122b78u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x122b7c: 0x4bd081ff  .word       0x4BD081FF                   # vclipw.xyz  $vf16, $vf16w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x122b7cu;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x122b80: 0xda6c0000  lqc2        $vf12, 0x0($s3)
    ctx->pc = 0x122b80u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122b84: 0xda6d0010  lqc2        $vf13, 0x10($s3)
    ctx->pc = 0x122b84u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x122b88: 0x7a6d0010  lq          $t5, 0x10($s3)
    ctx->pc = 0x122b88u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x122b8c: 0x700d7f89  pexew       $t7, $t5
    ctx->pc = 0x122b8cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXEW(GPR_VEC(ctx, 13)));
    // 0x122b90: 0x48af7800  qmtc2.ni    $t7, $vf15
    ctx->pc = 0x122b90u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x122b94: 0x4bee7b3d  vmr32.xyzw  $vf14, $vf15
    ctx->pc = 0x122b94u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x122b98: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x122b98u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x122b9c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x122B9Cu;
    {
        const bool branch_taken_0x122b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122b9c) {
            ctx->pc = 0x122CC8u;
            return;
        }
    }
    ctx->pc = 0x122BA4u;
    // 0x122ba4: 0x0  nop
    ctx->pc = 0x122ba4u;
    // NOP
    // 0x122ba8: 0x4be9333c  vmove.xyzw  $vf9, $vf6
    ctx->pc = 0x122ba8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x122bac: 0x4b8c7258  vmulx.xy    $vf9, $vf14, $vf12x
    ctx->pc = 0x122bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x122bb0: 0x4b0d0344  vsubx.x     $vf13, $vf0, $vf13x
    ctx->pc = 0x122bb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x122bb4: 0x4beb633d  vmr32.xyzw  $vf11, $vf12
    ctx->pc = 0x122bb4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x122bb8: 0x4bea3b3c  vmove.xyzw  $vf10, $vf7
    ctx->pc = 0x122bb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[7], _mm_castsi128_ps(mask)); }
    // 0x122bbc: 0x4b8b6a98  vmulx.xy    $vf10, $vf13, $vf11x
    ctx->pc = 0x122bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x122bc0: 0x4be9c1bc  vmulax.xyzw $ACC, $vf24, $vf9x
    ctx->pc = 0x122bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bc4: 0x4be9c8bd  vmadday.xyzw $ACC, $vf25, $vf9y
    ctx->pc = 0x122bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bc8: 0x4be9d0be  vmaddaz.xyzw $ACC, $vf26, $vf9z
    ctx->pc = 0x122bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bcc: 0x4be9df0b  vmaddw.xyzw $vf28, $vf27, $vf9w
    ctx->pc = 0x122bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x122bd0: 0x4beac1bc  vmulax.xyzw $ACC, $vf24, $vf10x
    ctx->pc = 0x122bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bd4: 0x4beac8bd  vmadday.xyzw $ACC, $vf25, $vf10y
    ctx->pc = 0x122bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bd8: 0x4bead0be  vmaddaz.xyzw $ACC, $vf26, $vf10z
    ctx->pc = 0x122bd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bdc: 0x4beadf4b  vmaddw.xyzw $vf29, $vf27, $vf10w
    ctx->pc = 0x122bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x122be0: 0x4be8c1bc  vmulax.xyzw $ACC, $vf24, $vf8x
    ctx->pc = 0x122be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122be4: 0x4be8c8bd  vmadday.xyzw $ACC, $vf25, $vf8y
    ctx->pc = 0x122be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122be8: 0x4be8d0be  vmaddaz.xyzw $ACC, $vf26, $vf8z
    ctx->pc = 0x122be8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bec: 0x4be8df8b  vmaddw.xyzw $vf30, $vf27, $vf8w
    ctx->pc = 0x122becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x122bf0: 0x4bf7c1bc  vmulax.xyzw $ACC, $vf24, $vf23x
    ctx->pc = 0x122bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bf4: 0x4bf7c8bd  vmadday.xyzw $ACC, $vf25, $vf23y
    ctx->pc = 0x122bf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bf8: 0x4bf7d0be  vmaddaz.xyzw $ACC, $vf26, $vf23z
    ctx->pc = 0x122bf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bfc: 0x4bf7dfcb  vmaddw.xyzw $vf31, $vf27, $vf23w
    ctx->pc = 0x122bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x122c00: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x122c00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c04: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x122c04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c08: 0x6021  addu        $t4, $zero, $zero
    ctx->pc = 0x122c08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x122c0c: 0x218c0004  addi        $t4, $t4, 0x4
    ctx->pc = 0x122c0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    ctx->pc = 0x122c10u;
}

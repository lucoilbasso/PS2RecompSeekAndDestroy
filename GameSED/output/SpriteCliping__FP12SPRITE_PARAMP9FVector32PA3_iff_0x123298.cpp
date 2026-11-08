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

// Function: SpriteCliping__FP12SPRITE_PARAMP9FVector32PA3_iff
// Address: 0x123298 - 0x123480
void SpriteCliping__FP12SPRITE_PARAMP9FVector32PA3_iff_0x123298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteCliping__FP12SPRITE_PARAMP9FVector32PA3_iff_0x123298");
#endif

    switch (ctx->pc) {
        case 0x1233c0u: goto label_1233c0;
        default: break;
    }

    ctx->pc = 0x123298u;

    // 0x123298: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x123298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12329c: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x12329cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1232a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1232a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1232a4: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x1232a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x1232a8: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x1232a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
    // 0x1232ac: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x1232acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x1232b0: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x1232b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1232b4: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x1232b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1232b8: 0x4be7433d  vmr32.xyzw  $vf7, $vf8
    ctx->pc = 0x1232b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1232bc: 0x4be63b3d  vmr32.xyzw  $vf6, $vf7
    ctx->pc = 0x1232bcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1232c0: 0xd8890020  lqc2        $vf9, 0x20($a0)
    ctx->pc = 0x1232c0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1232c4: 0xd8f40000  lqc2        $vf20, 0x0($a3)
    ctx->pc = 0x1232c4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1232c8: 0xd8f50010  lqc2        $vf21, 0x10($a3)
    ctx->pc = 0x1232c8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1232cc: 0xd8f60020  lqc2        $vf22, 0x20($a3)
    ctx->pc = 0x1232ccu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1232d0: 0xd8f70030  lqc2        $vf23, 0x30($a3)
    ctx->pc = 0x1232d0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1232d4: 0x4be9a1bc  vmulax.xyzw $ACC, $vf20, $vf9x
    ctx->pc = 0x1232d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1232d8: 0x4be9a8bd  vmadday.xyzw $ACC, $vf21, $vf9y
    ctx->pc = 0x1232d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1232dc: 0x4be9b0be  vmaddaz.xyzw $ACC, $vf22, $vf9z
    ctx->pc = 0x1232dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1232e0: 0x4be9bdcb  vmaddw.xyzw $vf23, $vf23, $vf9w
    ctx->pc = 0x1232e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x1232e4: 0x4bec033c  vmove.xyzw  $vf12, $vf0
    ctx->pc = 0x1232e4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1232e8: 0x4beca1bc  vmulax.xyzw $ACC, $vf20, $vf12x
    ctx->pc = 0x1232e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1232ec: 0x4beca8bd  vmadday.xyzw $ACC, $vf21, $vf12y
    ctx->pc = 0x1232ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1232f0: 0x4becb0be  vmaddaz.xyzw $ACC, $vf22, $vf12z
    ctx->pc = 0x1232f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1232f4: 0x4becbacb  vmaddw.xyzw $vf11, $vf23, $vf12w
    ctx->pc = 0x1232f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1232f8: 0xd8780000  lqc2        $vf24, 0x0($v1)
    ctx->pc = 0x1232f8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1232fc: 0xd8790010  lqc2        $vf25, 0x10($v1)
    ctx->pc = 0x1232fcu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x123300: 0xd87a0020  lqc2        $vf26, 0x20($v1)
    ctx->pc = 0x123300u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x123304: 0xd87b0030  lqc2        $vf27, 0x30($v1)
    ctx->pc = 0x123304u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x123308: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x123308u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12330c: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x12330cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x123310: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x123310u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x123314: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x123314u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x123318: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x123318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12331c: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x12331cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123320: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x123320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123324: 0x4bebfc0b  vmaddw.xyzw $vf16, $vf31, $vf11w
    ctx->pc = 0x123324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x123328: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x123328u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x12332c: 0x4bd081ff  .word       0x4BD081FF                   # vclipw.xyz  $vf16, $vf16w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12332cu;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x123330: 0xd88c0000  lqc2        $vf12, 0x0($a0)
    ctx->pc = 0x123330u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123334: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x123334u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x123338: 0x788d0010  lq          $t5, 0x10($a0)
    ctx->pc = 0x123338u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12333c: 0x700d7f89  pexew       $t7, $t5
    ctx->pc = 0x12333cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXEW(GPR_VEC(ctx, 13)));
    // 0x123340: 0x48af7800  qmtc2.ni    $t7, $vf15
    ctx->pc = 0x123340u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x123344: 0x4bee7b3d  vmr32.xyzw  $vf14, $vf15
    ctx->pc = 0x123344u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x123348: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x123348u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x12334c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x12334Cu;
    {
        const bool branch_taken_0x12334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12334c) {
            ctx->pc = 0x123478u;
            goto label_123478;
        }
    }
    ctx->pc = 0x123354u;
    // 0x123354: 0x0  nop
    ctx->pc = 0x123354u;
    // NOP
    // 0x123358: 0x4be9333c  vmove.xyzw  $vf9, $vf6
    ctx->pc = 0x123358u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x12335c: 0x4b8c7258  vmulx.xy    $vf9, $vf14, $vf12x
    ctx->pc = 0x12335cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x123360: 0x4b0d0344  vsubx.x     $vf13, $vf0, $vf13x
    ctx->pc = 0x123360u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x123364: 0x4beb633d  vmr32.xyzw  $vf11, $vf12
    ctx->pc = 0x123364u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x123368: 0x4bea3b3c  vmove.xyzw  $vf10, $vf7
    ctx->pc = 0x123368u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[7], _mm_castsi128_ps(mask)); }
    // 0x12336c: 0x4b8b6a98  vmulx.xy    $vf10, $vf13, $vf11x
    ctx->pc = 0x12336cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x123370: 0x4be9c1bc  vmulax.xyzw $ACC, $vf24, $vf9x
    ctx->pc = 0x123370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123374: 0x4be9c8bd  vmadday.xyzw $ACC, $vf25, $vf9y
    ctx->pc = 0x123374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123378: 0x4be9d0be  vmaddaz.xyzw $ACC, $vf26, $vf9z
    ctx->pc = 0x123378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12337c: 0x4be9df0b  vmaddw.xyzw $vf28, $vf27, $vf9w
    ctx->pc = 0x12337cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x123380: 0x4beac1bc  vmulax.xyzw $ACC, $vf24, $vf10x
    ctx->pc = 0x123380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123384: 0x4beac8bd  vmadday.xyzw $ACC, $vf25, $vf10y
    ctx->pc = 0x123384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123388: 0x4bead0be  vmaddaz.xyzw $ACC, $vf26, $vf10z
    ctx->pc = 0x123388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12338c: 0x4beadf4b  vmaddw.xyzw $vf29, $vf27, $vf10w
    ctx->pc = 0x12338cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x123390: 0x4be8c1bc  vmulax.xyzw $ACC, $vf24, $vf8x
    ctx->pc = 0x123390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123394: 0x4be8c8bd  vmadday.xyzw $ACC, $vf25, $vf8y
    ctx->pc = 0x123394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x123398: 0x4be8d0be  vmaddaz.xyzw $ACC, $vf26, $vf8z
    ctx->pc = 0x123398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12339c: 0x4be8df8b  vmaddw.xyzw $vf30, $vf27, $vf8w
    ctx->pc = 0x12339cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1233a0: 0x4bf7c1bc  vmulax.xyzw $ACC, $vf24, $vf23x
    ctx->pc = 0x1233a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233a4: 0x4bf7c8bd  vmadday.xyzw $ACC, $vf25, $vf23y
    ctx->pc = 0x1233a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233a8: 0x4bf7d0be  vmaddaz.xyzw $ACC, $vf26, $vf23z
    ctx->pc = 0x1233a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233ac: 0x4bf7dfcb  vmaddw.xyzw $vf31, $vf27, $vf23w
    ctx->pc = 0x1233acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1233b0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1233b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233b4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1233b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233b8: 0x6021  addu        $t4, $zero, $zero
    ctx->pc = 0x1233b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x1233bc: 0x218c0004  addi        $t4, $t4, 0x4
    ctx->pc = 0x1233bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_1233c0:
    // 0x1233c0: 0xd94a0000  lqc2        $vf10, 0x0($t2)
    ctx->pc = 0x1233c0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1233c4: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x1233c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233c8: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x1233c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233cc: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x1233ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233d0: 0x4beafb4b  vmaddw.xyzw $vf13, $vf31, $vf10w
    ctx->pc = 0x1233d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1233d4: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x1233d4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1233d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1233d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1233dc: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x1233dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1233e0: 0x4bee697d  vftoi4.xyzw $vf14, $vf13
    ctx->pc = 0x1233e0u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1233e4: 0xf96e0000  sqc2        $vf14, 0x0($t3)
    ctx->pc = 0x1233e4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1233e8: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x1233e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x1233ec: 0x216b0010  addi        $t3, $t3, 0x10
    ctx->pc = 0x1233ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x1233f0: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1233f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1233f4: 0x1580fff2  bnez        $t4, . + 4 + (-0xE << 2)
    ctx->pc = 0x1233F4u;
    {
        const bool branch_taken_0x1233f4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233f4) {
            ctx->pc = 0x1233C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1233c0;
        }
    }
    ctx->pc = 0x1233FCu;
    // 0x1233fc: 0x0  nop
    ctx->pc = 0x1233fcu;
    // NOP
    // 0x123400: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x123404: 0xa5903  sra         $t3, $t2, 4
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 4));
    // 0x123408: 0x448b4000  mtc1        $t3, $f8
    ctx->pc = 0x123408u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12340c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x12340cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x123410: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x123410u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x123414: 0x46086241  sub.s       $f9, $f12, $f8
    ctx->pc = 0x123414u;
    ctx->f[9] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x123418: 0x46004a24  .word       0x46004A24                   # cvt.w.s     $f8, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x123418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[8], &tmp, sizeof(tmp)); }
    // 0x12341c: 0x440b4000  mfc1        $t3, $f8
    ctx->pc = 0x12341cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x123420: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x123420u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x123424: 0x716c58e8  pminw       $t3, $t3, $t4
    ctx->pc = 0x123424u;
    SET_GPR_VEC(ctx, 11, PS2_PMINW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x123428: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x123428u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12342c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x12342cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123430: 0x5620011  bltzl       $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x123430u;
    {
        const bool branch_taken_0x123430 = (GPR_S32(ctx, 11) < 0);
        if (branch_taken_0x123430) {
            ctx->pc = 0x123478u;
            goto label_123478;
        }
    }
    ctx->pc = 0x123438u;
    // 0x123438: 0x0  nop
    ctx->pc = 0x123438u;
    // NOP
    // 0x12343c: 0x240f0000  addiu       $t7, $zero, 0x0
    ctx->pc = 0x12343cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x123440: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x123440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123444: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x123444u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x123448: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x123448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
    // 0x12344c: 0xacca001c  sw          $t2, 0x1C($a2)
    ctx->pc = 0x12344cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 10));
    // 0x123450: 0xacca002c  sw          $t2, 0x2C($a2)
    ctx->pc = 0x123450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 10));
    // 0x123454: 0xacca003c  sw          $t2, 0x3C($a2)
    ctx->pc = 0x123454u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 10));
    // 0x123458: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x123458u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12345c: 0x16c6818  mult        $t5, $t3, $t4
    ctx->pc = 0x12345cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x123460: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x123460u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x123464: 0x71ae68e8  pminw       $t5, $t5, $t6
    ctx->pc = 0x123464u;
    SET_GPR_VEC(ctx, 13, PS2_PMINW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x123468: 0x908a0043  lbu         $t2, 0x43($a0)
    ctx->pc = 0x123468u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 67)));
    // 0x12346c: 0x1aa6818  mult        $t5, $t5, $t2
    ctx->pc = 0x12346cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x123470: 0xd69c3  sra         $t5, $t5, 7
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 7));
    // 0x123474: 0xa08d0043  sb          $t5, 0x43($a0)
    ctx->pc = 0x123474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 13));
label_123478:
    // 0x123478: 0x3e00008  jr          $ra
    ctx->pc = 0x123478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123480u;
}

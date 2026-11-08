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

// Function: EffectShipSprayDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x12b548 - 0x12bc60
void EffectShipSprayDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x12b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectShipSprayDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x12b548");
#endif

    switch (ctx->pc) {
        case 0x12b718u: goto label_12b718;
        case 0x12b728u: goto label_12b728;
        case 0x12b760u: goto label_12b760;
        case 0x12b858u: goto label_12b858;
        case 0x12b878u: goto label_12b878;
        case 0x12b900u: goto label_12b900;
        case 0x12b930u: goto label_12b930;
        case 0x12bb94u: goto label_12bb94;
        case 0x12bba0u: goto label_12bba0;
        case 0x12bbc0u: goto label_12bbc0;
        case 0x12bbc8u: goto label_12bbc8;
        case 0x12bbf0u: goto label_12bbf0;
        default: break;
    }

    ctx->pc = 0x12b548u;

    // 0x12b548: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x12b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x12b54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b550: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x12b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x12b554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b558: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x12b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x12b55c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x12b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x12b560: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x12b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x12b564: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x12b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x12b568: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x12b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x12b56c: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x12b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x12b570: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x12b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x12b574: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x12b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x12b578: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x12b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x12b57c: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12b57cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x12b580: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x12b580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x12b584: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x12b588: 0x144301a7  bne         $v0, $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x12B588u;
    {
        const bool branch_taken_0x12b588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B588u;
        // 0x12b58c: 0x263401b0  addiu       $s4, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b588) {
            ctx->pc = 0x12BC28u;
            goto label_12bc28;
        }
    }
    ctx->pc = 0x12B590u;
    // 0x12b590: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12b594: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x12b594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x12b598: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12b598u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12b59c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12b59cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b5a0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12b5a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12b5a4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12b5a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12b5a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b5ac: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b5b0: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b5b4: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b5b8: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x12b5bc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12b5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b5c0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x12b5c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12b5c4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x12b5c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12b5c8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x12b5c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12b5cc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b5d0: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b5d4: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b5d8: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b5dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12b5e0: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x12b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x12b5e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12b5e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x12b5e8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12b5e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x12b5ec: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12b5ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x12b5f0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12b5f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x12b5f4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12b5f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b5f8: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12b5f8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b5fc: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12b5fcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b600: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12b600u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b604: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b608: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b60c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b60cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b610: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b614: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12b614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b618: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12b618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b61c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12b61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b620: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12b620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12b624: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12b624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b628: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12b628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b62c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12b62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b630: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12b630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12b634: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12b634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b638: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12b638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b63c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12b63cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b640: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12b640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12b644: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b648: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12b64c: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12b650: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12b654: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12b654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12b658: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x12b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x12b65c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12b65cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x12b660: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x12b660u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x12b664: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x12b664u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x12b668: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x12b668u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x12b66c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12b66cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b670: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12b670u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b674: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12b674u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b678: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12b678u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b67c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b680: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b684: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b688: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b68c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12b68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b690: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12b690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b694: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12b694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b698: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12b698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12b69c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12b69cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b6a0: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12b6a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b6a4: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12b6a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b6a8: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12b6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12b6ac: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12b6acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b6b0: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12b6b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b6b4: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12b6b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b6b8: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12b6b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12b6bc: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b6c0: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12b6c4: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12b6c8: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12b6cc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x12b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x12b6d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12b6d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6d4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x12b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12b6d8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x12b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x12b6dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12B6DCu;
    {
        const bool branch_taken_0x12b6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6DCu;
        // 0x12b6e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6dc) {
            ctx->pc = 0x12B708u;
            goto label_12b708;
        }
    }
    ctx->pc = 0x12B6E4u;
    // 0x12b6e4: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x12b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x12b6e8: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x12b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x12b6ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b6f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12b6f4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12b6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12b6f8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x12b6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12b6fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12B6FCu;
    {
        const bool branch_taken_0x12b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6FCu;
        // 0x12b700: 0xac830098  sw          $v1, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6fc) {
            ctx->pc = 0x12B760u;
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B704u;
    // 0x12b704: 0x0  nop
    ctx->pc = 0x12b704u;
    // NOP
label_12b708:
    // 0x12b708: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12b70c: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x12b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x12b710: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12B710u;
    SET_GPR_U32(ctx, 31, 0x12B718u);
    ctx->pc = 0x12B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B710u;
    // 0x12b714: 0x8ca40084  lw          $a0, 0x84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12B710u, 0x12B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B718u;
label_12b718:
    // 0x12b718: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x12b71c: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x12b720: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12B720u;
    SET_GPR_U32(ctx, 31, 0x12B728u);
    ctx->pc = 0x12B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B720u;
    // 0x12b724: 0x8cc40088  lw          $a0, 0x88($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12B720u, 0x12B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B728u;
label_12b728:
    // 0x12b728: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12b72c: 0x2442d650  addiu       $v0, $v0, -0x29B0
    ctx->pc = 0x12b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x12b730: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x12b730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x12b734: 0x8c50008c  lw          $s0, 0x8C($v0)
    ctx->pc = 0x12b734u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D6DCu));
    // 0x12b738: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12b738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b73c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x12b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6D0u));
    // 0x12b740: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x12b740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x12b744: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12b748: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12b74c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12b750: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6D8u));
    // 0x12b754: 0xacc5008c  sw          $a1, 0x8C($a2)
    ctx->pc = 0x12b754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6DCu, _value); } while (0);
    // 0x12b758: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12B758u;
    SET_GPR_U32(ctx, 31, 0x12B760u);
    ctx->pc = 0x12B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B758u;
    // 0x12b75c: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12B758u, 0x12B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B760u;
label_12b760:
    // 0x12b760: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x12b760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x12b764: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x12b764u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x12b768: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x12b768u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x12b76c: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x12b76cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x12b770: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x12b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x12b774: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12b774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12b778: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b77c: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x12b77cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x12b780: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x12b780u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x12b784: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x12b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x12b788: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x12b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12b78c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b790: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x12b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12b794: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12b794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12b798: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x12b79c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x12b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x12b7a0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12b7a4: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x12b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x12b7a8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12b7ac: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x12b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x12b7b0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x12b7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12b7b4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x12b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x12b7b8: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x12b7b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12b7bc: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x12b7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12b7c0: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x12b7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12b7c4: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x12b7c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12b7c8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x12b7cc: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x12b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x12b7d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b7d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7d4: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x12b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x12b7d8: 0x246c0050  addiu       $t4, $v1, 0x50
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x12b7dc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x12b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x12b7e0: 0x246d0060  addiu       $t5, $v1, 0x60
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x12b7e4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x12b7e8: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x12b7e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12b7ec: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x12b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x12b7f0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x12b7f0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7f4: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x12b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x12b7f8: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12b7fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12b800: 0x27af00b0  addiu       $t7, $sp, 0xB0
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12b804: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x12b804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x12b808: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b80c: 0xfd8b0000  sd          $t3, 0x0($t4)
    ctx->pc = 0x12b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 11));
    // 0x12b810: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12b814: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x12b814u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x12b818: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12b818u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b81c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12b820: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b824: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x12b824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12b828: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x12b82c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x12b830: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12b830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12b834: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x12b834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x12b838: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x12b838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b83c: 0x94850030  lhu         $a1, 0x30($a0)
    ctx->pc = 0x12b83cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12b840: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x12b840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12b844: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12b844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x12b848: 0xfdae0008  sd          $t6, 0x8($t5)
    ctx->pc = 0x12b848u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 14));
    // 0x12b84c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x12b84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x12b850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12b854: 0xfda20000  sd          $v0, 0x0($t5)
    ctx->pc = 0x12b854u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
label_12b858:
    // 0x12b858: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x12b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12b85c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x12b85cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b864: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12b864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b868: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x12b868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x12b86c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b870: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x12b870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b874: 0x0  nop
    ctx->pc = 0x12b874u;
    // NOP
label_12b878:
    // 0x12b878: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x12b87c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b880: 0x24848f40  addiu       $a0, $a0, -0x70C0
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938432));
    // 0x12b884: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x12b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b888: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x12b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x12b88c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12b88cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b890: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12b890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12b894: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12b894u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12b898: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12b898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b89c: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x12b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b8a0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x12b8a4: 0x24a58f50  addiu       $a1, $a1, -0x70B0
    ctx->pc = 0x12b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
    // 0x12b8a8: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x12b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x12b8ac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x12b8acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b8b0: 0x7de20000  sq          $v0, 0x0($t7)
    ctx->pc = 0x12b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 2));
    // 0x12b8b4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b8b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8b8: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b8b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b8bc: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b8bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b8c0: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b8c0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b8c4: 0xfae40000  sqc2        $vf4, 0x0($s7)
    ctx->pc = 0x12b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b8c8: 0xfae50010  sqc2        $vf5, 0x10($s7)
    ctx->pc = 0x12b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b8cc: 0xfae60020  sqc2        $vf6, 0x20($s7)
    ctx->pc = 0x12b8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b8d0: 0xfae70030  sqc2        $vf7, 0x30($s7)
    ctx->pc = 0x12b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b8d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12b8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b8d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12b8dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12b8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12b8e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e8: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x12b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x12b8ec: 0x7faa0110  sq          $t2, 0x110($sp)
    ctx->pc = 0x12b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 10));
    // 0x12b8f0: 0x7fab0120  sq          $t3, 0x120($sp)
    ctx->pc = 0x12b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 11));
    // 0x12b8f4: 0x7faf0130  sq          $t7, 0x130($sp)
    ctx->pc = 0x12b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 15));
    // 0x12b8f8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x12B8F8u;
    SET_GPR_U32(ctx, 31, 0x12B900u);
    ctx->pc = 0x12B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8F8u;
    // 0x12b8fc: 0x7fb90140  sq          $t9, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x12B8F8u, 0x12B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B900u;
label_12b900:
    // 0x12b900: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x12b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12b904: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b908: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12b90c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x12b910: 0x7bb90140  lq          $t9, 0x140($sp)
    ctx->pc = 0x12b910u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12b914: 0x7baf0130  lq          $t7, 0x130($sp)
    ctx->pc = 0x12b914u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x12b918: 0xc2282b  sltu        $a1, $a2, $v0
    ctx->pc = 0x12b918u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12b91c: 0x7bab0120  lq          $t3, 0x120($sp)
    ctx->pc = 0x12b91cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12b920: 0x7baa0110  lq          $t2, 0x110($sp)
    ctx->pc = 0x12b920u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12b924: 0x7ba90100  lq          $t1, 0x100($sp)
    ctx->pc = 0x12b924u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12b928: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12b92c: 0x0  nop
    ctx->pc = 0x12b92cu;
    // NOP
label_12b930:
    // 0x12b930: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x12b934: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b938: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12b93c: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12b93cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12b940: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B940u;
    {
        const bool branch_taken_0x12b940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b940) {
            ctx->pc = 0x12B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B940u;
            // 0x12b944: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B960u;
            goto label_12b960;
        }
    }
    ctx->pc = 0x12B948u;
    // 0x12b948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12b94c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12b950: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12b950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12b954: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B954u;
    {
        const bool branch_taken_0x12b954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b954) {
            ctx->pc = 0x12B970u;
            goto label_12b970;
        }
    }
    ctx->pc = 0x12B95Cu;
    // 0x12b95c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12b960:
    // 0x12b960: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12b960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12b964: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B964u;
    {
        const bool branch_taken_0x12b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B964u;
        // 0x12b968: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b964) {
            ctx->pc = 0x12B984u;
            goto label_12b984;
        }
    }
    ctx->pc = 0x12B96Cu;
    // 0x12b96c: 0x0  nop
    ctx->pc = 0x12b96cu;
    // NOP
label_12b970:
    // 0x12b970: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B970u;
    {
        const bool branch_taken_0x12b970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B970u;
        // 0x12b974: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b970) {
            ctx->pc = 0x12B988u;
            goto label_12b988;
        }
    }
    ctx->pc = 0x12B978u;
    // 0x12b978: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12b97c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12b97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12b984:
    // 0x12b984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12b988:
    // 0x12b988: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x12b988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b98c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12B98Cu;
    {
        const bool branch_taken_0x12b98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B98Cu;
        // 0x12b990: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b98c) {
            ctx->pc = 0x12B930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b930;
        }
    }
    ctx->pc = 0x12B994u;
    // 0x12b994: 0x16200045  bnez        $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x12B994u;
    {
        const bool branch_taken_0x12b994 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B994u;
        // 0x12b998: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b994) {
            ctx->pc = 0x12BAACu;
            goto label_12baac;
        }
    }
    ctx->pc = 0x12B99Cu;
    // 0x12b99c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x12b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x12b9a0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x12b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x12b9a4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x12B9A4u;
    {
        const bool branch_taken_0x12b9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A4u;
        // 0x12b9a8: 0xa3a000c7  sb          $zero, 0xC7($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a4) {
            ctx->pc = 0x12BA28u;
            goto label_12ba28;
        }
    }
    ctx->pc = 0x12B9ACu;
    // 0x12b9ac: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x12b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x12b9b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9b4: 0xfc560008  sd          $s6, 0x8($v0)
    ctx->pc = 0x12b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 22));
    // 0x12b9b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x12b9c0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12b9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9c4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x12b9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12b9c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12b9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9d4: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9dc: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12b9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12b9e0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12b9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12b9e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9ec: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x12b9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12b9f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12b9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9f8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9fc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x12b9fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ba00: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ba04: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ba08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12ba0c: 0xfc960008  sd          $s6, 0x8($a0)
    ctx->pc = 0x12ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 22));
    // 0x12ba10: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x12ba10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12ba14: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba18: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x12ba18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ba1c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12ba1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12ba20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12BA20u;
    {
        const bool branch_taken_0x12ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA20u;
        // 0x12ba24: 0xe4b40000  swc1        $f20, 0x0($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba20) {
            ctx->pc = 0x12BAA0u;
            goto label_12baa0;
        }
    }
    ctx->pc = 0x12BA28u;
label_12ba28:
    // 0x12ba28: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x12ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x12ba2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ba2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba30: 0xfc560008  sd          $s6, 0x8($v0)
    ctx->pc = 0x12ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 22));
    // 0x12ba34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x12ba3c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12ba3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba40: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x12ba40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ba44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba4c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba50: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba58: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12ba58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12ba5c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba60: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12ba64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba68: 0xe4750000  swc1        $f21, 0x0($v1)
    ctx->pc = 0x12ba68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12ba6c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12ba70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba74: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba78: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x12ba78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ba7c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ba80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ba84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12ba88: 0xfc960008  sd          $s6, 0x8($a0)
    ctx->pc = 0x12ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 22));
    // 0x12ba8c: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x12ba8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12ba90: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba94: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x12ba94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ba98: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12ba98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12ba9c: 0xe4b50000  swc1        $f21, 0x0($a1)
    ctx->pc = 0x12ba9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_12baa0:
    // 0x12baa0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x12baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12baa4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x12baa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12baa8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12baa8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_12baac:
    // 0x12baac: 0x5aa0000a  blezl       $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x12BAACu;
    {
        const bool branch_taken_0x12baac = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x12baac) {
            ctx->pc = 0x12BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BAACu;
            // 0x12bab0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BAD8u;
            goto label_12bad8;
        }
    }
    ctx->pc = 0x12BAB4u;
    // 0x12bab4: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x12bab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x12bab8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x12bab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12babc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BABCu;
    {
        const bool branch_taken_0x12babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BABCu;
        // 0x12bac0: 0x246200f6  addiu       $v0, $v1, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12babc) {
            ctx->pc = 0x12BAD0u;
            goto label_12bad0;
        }
    }
    ctx->pc = 0x12BAC4u;
    // 0x12bac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BAC4u;
    {
        const bool branch_taken_0x12bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAC4u;
        // 0x12bac8: 0xa3a000c3  sb          $zero, 0xC3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bac4) {
            ctx->pc = 0x12BAD4u;
            goto label_12bad4;
        }
    }
    ctx->pc = 0x12BACCu;
    // 0x12bacc: 0x0  nop
    ctx->pc = 0x12baccu;
    // NOP
label_12bad0:
    // 0x12bad0: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x12bad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
label_12bad4:
    // 0x12bad4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12bad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12bad8:
    // 0x12bad8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x12bad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x12badc: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12bae0: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE0u;
        // 0x12bae4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12B878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b878;
        }
    }
    ctx->pc = 0x12BAE8u;
    // 0x12bae8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12baec: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x12baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x12baf0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x12baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x12baf4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x12baf8: 0x3404b800  ori         $a0, $zero, 0xB800
    ctx->pc = 0x12baf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x12bafc: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x12bafcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x12bb00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12bb04: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12bb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12bb08: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x12bb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x12bb0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12bb10: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x12bb10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x12bb14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12bb18: 0x2b230002  slti        $v1, $t9, 0x2
    ctx->pc = 0x12bb18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12bb1c: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x12bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x12bb20: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12bb24: 0x3442e42e  ori         $v0, $v0, 0xE42E
    ctx->pc = 0x12bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58414);
    // 0x12bb28: 0x254a0140  addiu       $t2, $t2, 0x140
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    // 0x12bb2c: 0x1460ff4a  bnez        $v1, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x12BB2Cu;
    {
        const bool branch_taken_0x12bb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB2Cu;
        // 0x12bb30: 0xfd220008  sd          $v0, 0x8($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb2c) {
            ctx->pc = 0x12B858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b858;
        }
    }
    ctx->pc = 0x12BB34u;
    // 0x12bb34: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x12bb34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x12bb38: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x12bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12bb3c: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12bb40: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12bb40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12bb44: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x12bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12bb48: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12bb48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12bb4c: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x12bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x12bb50: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x12bb54: 0x2610d650  addiu       $s0, $s0, -0x29B0
    ctx->pc = 0x12bb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956624));
    // 0x12bb58: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12bb5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12bb60: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x12bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x12bb64: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x12bb64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12bb68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12bb6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12bb70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12bb74: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12bb78: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12bb7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x12bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12bb80: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12bb84: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12bb88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12bb8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12BB8Cu;
    SET_GPR_U32(ctx, 31, 0x12BB94u);
    ctx->pc = 0x12BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB8Cu;
    // 0x12bb90: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12BB8Cu, 0x12BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB94u;
label_12bb94:
    // 0x12bb94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12bb98: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12bb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12bb9c: 0x0  nop
    ctx->pc = 0x12bb9cu;
    // NOP
label_12bba0:
    // 0x12bba0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12bba4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12bba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12bba8: 0x0  nop
    ctx->pc = 0x12bba8u;
    // NOP
    // 0x12bbac: 0x0  nop
    ctx->pc = 0x12bbacu;
    // NOP
    // 0x12bbb0: 0x0  nop
    ctx->pc = 0x12bbb0u;
    // NOP
    // 0x12bbb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BBB4u;
    {
        const bool branch_taken_0x12bbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bbb4) {
            ctx->pc = 0x12BBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bba0;
        }
    }
    ctx->pc = 0x12BBBCu;
    // 0x12bbbc: 0x0  nop
    ctx->pc = 0x12bbbcu;
    // NOP
label_12bbc0:
    // 0x12bbc0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12BBC0u;
    SET_GPR_U32(ctx, 31, 0x12BBC8u);
    ctx->pc = 0x12BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBC0u;
    // 0x12bbc4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12BBC0u, 0x12BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBC8u;
label_12bbc8:
    // 0x12bbc8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12bbcc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12BBCCu;
    {
        const bool branch_taken_0x12bbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBCCu;
        // 0x12bbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbcc) {
            ctx->pc = 0x12BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbc0;
        }
    }
    ctx->pc = 0x12BBD4u;
    // 0x12bbd4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x12bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x12bbd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12bbdc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BBDCu;
    {
        const bool branch_taken_0x12bbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBDCu;
        // 0x12bbe0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbdc) {
            ctx->pc = 0x12BBF0u;
            goto label_12bbf0;
        }
    }
    ctx->pc = 0x12BBE4u;
    // 0x12bbe4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x12bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x12bbe8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12BBE8u;
    SET_GPR_U32(ctx, 31, 0x12BBF0u);
    ctx->pc = 0x12BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBE8u;
    // 0x12bbec: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12BBE8u, 0x12BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBF0u;
label_12bbf0:
    // 0x12bbf0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x12bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12bbf4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12bbf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12bbfc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12bbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12bc00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12bc04: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12bc08: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12bc0c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12bc10: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12bc14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12bc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12bc18: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12bc1c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x12bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x12bc20: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x12bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x12bc24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_12bc28:
    // 0x12bc28: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x12bc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x12bc2c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x12bc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x12bc30: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x12bc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12bc34: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x12bc34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12bc38: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x12bc38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12bc3c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x12bc3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x12bc40: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x12bc40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x12bc44: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x12bc44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x12bc48: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x12bc48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x12bc4c: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x12bc50: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12bc54: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x12bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC58u;
        // 0x12bc5c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BC60u;
}

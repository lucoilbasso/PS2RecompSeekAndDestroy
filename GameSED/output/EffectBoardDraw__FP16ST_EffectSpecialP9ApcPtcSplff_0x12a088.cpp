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

// Function: EffectBoardDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x12a088 - 0x12a730
void EffectBoardDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x12a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectBoardDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x12a088");
#endif

    switch (ctx->pc) {
        case 0x12a204u: goto label_12a204;
        case 0x12a358u: goto label_12a358;
        case 0x12a360u: goto label_12a360;
        case 0x12a384u: goto label_12a384;
        case 0x12a664u: goto label_12a664;
        case 0x12a670u: goto label_12a670;
        case 0x12a690u: goto label_12a690;
        case 0x12a698u: goto label_12a698;
        case 0x12a6c0u: goto label_12a6c0;
        default: break;
    }

    ctx->pc = 0x12a088u;

    // 0x12a088: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12a08c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a090: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x12a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x12a094: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12a094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a098: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x12a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x12a09c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12a09cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0a0: 0xe7b50100  swc1        $f21, 0x100($sp)
    ctx->pc = 0x12a0a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x12a0a4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x12a0a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x12a0a8: 0xe7b400f8  swc1        $f20, 0xF8($sp)
    ctx->pc = 0x12a0a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x12a0ac: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x12a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x12a0b0: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x12a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x12a0b4: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x12a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x12a0b8: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x12a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x12a0bc: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x12a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x12a0c0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x12a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x12a0c4: 0x1443018f  bne         $v0, $v1, . + 4 + (0x18F << 2)
    ctx->pc = 0x12A0C4u;
    {
        const bool branch_taken_0x12a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0C4u;
        // 0x12a0c8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0c4) {
            ctx->pc = 0x12A704u;
            goto label_12a704;
        }
    }
    ctx->pc = 0x12A0CCu;
    // 0x12a0cc: 0x269501b0  addiu       $s5, $s4, 0x1B0
    ctx->pc = 0x12a0ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 432));
    // 0x12a0d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12a0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0d4: 0x26830120  addiu       $v1, $s4, 0x120
    ctx->pc = 0x12a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x12a0d8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12a0d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a0dc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x12a0dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12a0e0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x12a0e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12a0e4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x12a0e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12a0e8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a0ec: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a0f0: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12a0f4: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12a0f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12a0fc: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x12a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x12a100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12a100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x12a104: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12a104u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x12a108: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12a108u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x12a10c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12a10cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x12a110: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12a110u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a114: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12a114u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a118: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12a118u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a11c: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12a11cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a120: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12a120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a124: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12a124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a128: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12a128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a12c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12a12cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12a130: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12a130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a134: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12a134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a138: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12a138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a13c: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12a13cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12a140: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12a140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a144: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12a144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a148: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12a148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a14c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12a14cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12a150: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12a150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a154: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12a154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a158: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12a158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a15c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12a15cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12a160: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12a164: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12a168: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12a16c: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12a170: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12a170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12a174: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x12a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x12a178: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12a178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x12a17c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x12a17cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x12a180: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x12a180u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x12a184: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x12a184u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x12a188: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12a188u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a18c: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12a18cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a190: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12a190u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a194: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12a194u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a198: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12a198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a19c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12a19cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1a0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12a1a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1a4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12a1a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12a1a8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12a1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1ac: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12a1acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1b0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12a1b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1b4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12a1b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12a1b8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12a1b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1bc: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12a1bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1c0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12a1c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1c4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12a1c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12a1c8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12a1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1cc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12a1ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1d0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12a1d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a1d4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12a1d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12a1d8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12a1dc: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12a1e0: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12a1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12a1e4: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12a1e8: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x12a1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x12a1ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12a1f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12a1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1f4: 0x24c68ee0  addiu       $a2, $a2, -0x7120
    ctx->pc = 0x12a1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938336));
    // 0x12a1f8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x12a1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12a1fc: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x12A1FCu;
    SET_GPR_U32(ctx, 31, 0x12A204u);
    ctx->pc = 0x12A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1FCu;
    // 0x12a200: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x12A1FCu, 0x12A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A204u;
label_12a204:
    // 0x12a204: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x12a204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x12a208: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a20c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12a20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x12a210: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a214: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x12a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12a218: 0x2484f000  addiu       $a0, $a0, -0x1000
    ctx->pc = 0x12a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
    // 0x12a21c: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a220: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x12a220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12a224: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a228: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A228u;
    {
        const bool branch_taken_0x12a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A228u;
        // 0x12a22c: 0xa3800b  movn        $s0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a228) {
            ctx->pc = 0x12A244u;
            goto label_12a244;
        }
    }
    ctx->pc = 0x12A230u;
    // 0x12a230: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x12a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12a234: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a238: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a23c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x12A23Cu;
    {
        const bool branch_taken_0x12a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A23Cu;
        // 0x12a240: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a23c) {
            ctx->pc = 0x12A2C4u;
            goto label_12a2c4;
        }
    }
    ctx->pc = 0x12A244u;
label_12a244:
    // 0x12a244: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x12a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a248: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a24c: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a250: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A250u;
    {
        const bool branch_taken_0x12a250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A250u;
        // 0x12a254: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a250) {
            ctx->pc = 0x12A270u;
            goto label_12a270;
        }
    }
    ctx->pc = 0x12A258u;
    // 0x12a258: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x12a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12a25c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a260: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a264: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12A264u;
    {
        const bool branch_taken_0x12a264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A264u;
        // 0x12a268: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a264) {
            ctx->pc = 0x12A2C4u;
            goto label_12a2c4;
        }
    }
    ctx->pc = 0x12A26Cu;
    // 0x12a26c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_12a270:
    // 0x12a270: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a274: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a278: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A278u;
    {
        const bool branch_taken_0x12a278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A278u;
        // 0x12a27c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a278) {
            ctx->pc = 0x12A298u;
            goto label_12a298;
        }
    }
    ctx->pc = 0x12A280u;
    // 0x12a280: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x12a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x12a284: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a288: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a28c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12A28Cu;
    {
        const bool branch_taken_0x12a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A28Cu;
        // 0x12a290: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a28c) {
            ctx->pc = 0x12A2C4u;
            goto label_12a2c4;
        }
    }
    ctx->pc = 0x12A294u;
    // 0x12a294: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_12a298:
    // 0x12a298: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a29c: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a2a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A2A0u;
    {
        const bool branch_taken_0x12a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a2a0) {
            ctx->pc = 0x12A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A2A0u;
            // 0x12a2a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A2C0u;
            goto label_12a2c0;
        }
    }
    ctx->pc = 0x12A2A8u;
    // 0x12a2a8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x12a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x12a2ac: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a2b0: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a2b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A2B4u;
    {
        const bool branch_taken_0x12a2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2B4u;
        // 0x12a2b8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2b4) {
            ctx->pc = 0x12A2C4u;
            goto label_12a2c4;
        }
    }
    ctx->pc = 0x12A2BCu;
    // 0x12a2bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12a2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a2c0:
    // 0x12a2c0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12a2c4:
    // 0x12a2c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x12a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12a2cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12a2ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12a2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a2d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12a2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12a2d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12a2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12a2dc: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x12a2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x12a2e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a2e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12a2e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12a2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12a2e8: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x12a2e8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12a2ec: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x12a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12a2f0: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x12a2f0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a2f4: 0x29000  sll         $s2, $v0, 0
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12a2f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a2fc: 0x92202a  slt         $a0, $a0, $s2
    ctx->pc = 0x12a2fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12a300: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x12a300u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x12a304: 0x560000b0  bnel        $s0, $zero, . + 4 + (0xB0 << 2)
    ctx->pc = 0x12A304u;
    {
        const bool branch_taken_0x12a304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a304) {
            ctx->pc = 0x12A308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A304u;
            // 0x12a308: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A5C8u;
            goto label_12a5c8;
        }
    }
    ctx->pc = 0x12A30Cu;
    // 0x12a30c: 0x8f8289f8  lw          $v0, -0x7608($gp)
    ctx->pc = 0x12a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x12a310: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x12A310u;
    {
        const bool branch_taken_0x12a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a310) {
            ctx->pc = 0x12A314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A310u;
            // 0x12a314: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A438u;
            goto label_12a438;
        }
    }
    ctx->pc = 0x12A318u;
    // 0x12a318: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12a31c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x12a31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a320: 0x2451d650  addiu       $s1, $v0, -0x29B0
    ctx->pc = 0x12a320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x12a324: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12a324u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x12a328: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A328u;
    {
        const bool branch_taken_0x12a328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A328u;
        // 0x12a32c: 0xaf9189ec  sw          $s1, -0x7614($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937068), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a328) {
            ctx->pc = 0x12A350u;
            goto label_12a350;
        }
    }
    ctx->pc = 0x12A330u;
    // 0x12a330: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x12a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x12a334: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12a338: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12a33c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12a33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12a340: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x12a340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12a344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12A344u;
    {
        const bool branch_taken_0x12a344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A344u;
        // 0x12a348: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a344) {
            ctx->pc = 0x12A384u;
            goto label_12a384;
        }
    }
    ctx->pc = 0x12A34Cu;
    // 0x12a34c: 0x0  nop
    ctx->pc = 0x12a34cu;
    // NOP
label_12a350:
    // 0x12a350: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12A350u;
    SET_GPR_U32(ctx, 31, 0x12A358u);
    ctx->pc = 0x12A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A350u;
    // 0x12a354: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12A350u, 0x12A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A358u;
label_12a358:
    // 0x12a358: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12A358u;
    SET_GPR_U32(ctx, 31, 0x12A360u);
    ctx->pc = 0x12A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A358u;
    // 0x12a35c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12A358u, 0x12A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A360u;
label_12a360:
    // 0x12a360: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x12a360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x12a364: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x12a368: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12a36c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12a370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a374: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x12a374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x12a378: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x12a378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x12a37c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12A37Cu;
    SET_GPR_U32(ctx, 31, 0x12A384u);
    ctx->pc = 0x12A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A37Cu;
    // 0x12a380: 0xae25008c  sw          $a1, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12A37Cu, 0x12A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A384u;
label_12a384:
    // 0x12a384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12a388: 0x278789f4  addiu       $a3, $gp, -0x760C
    ctx->pc = 0x12a388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937076));
    // 0x12a38c: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x12a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x12a390: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x12a390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x12a394: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12a394u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12a398: 0x35088004  ori         $t0, $t0, 0x8004
    ctx->pc = 0x12a398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32772);
    // 0x12a39c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12a3a0: 0xaf9089f0  sw          $s0, -0x7610($gp)
    ctx->pc = 0x12a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 16));
    // 0x12a3a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12a3a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12a3b4: 0xaf8389f4  sw          $v1, -0x760C($gp)
    ctx->pc = 0x12a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 3));
    // 0x12a3b8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12a3bc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12a3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12a3c0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12a3c4: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x12a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12a3c8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x12a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12a3cc: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x12a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x12a3d0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x12a3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12a3d4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a3d8: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12a3dc: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x12a3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12a3e0: 0x3c0d0007  lui         $t5, 0x7
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)7 << 16));
    // 0x12a3e4: 0x35ad000d  ori         $t5, $t5, 0xD
    ctx->pc = 0x12a3e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)13);
    // 0x12a3e8: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x12a3e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12a3ec: 0x240b0047  addiu       $t3, $zero, 0x47
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12a3f0: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x12a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x12a3f4: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12a3f8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x12a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x12a3fc: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x12a3fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12a400: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12a400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12a404: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12a408: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x12a408u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x12a40c: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12a410: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x12a410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x12a414: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x12a414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x12a418: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x12a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x12a41c: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x12a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x12a420: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12a420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12a424: 0xacae0004  sw          $t6, 0x4($a1)
    ctx->pc = 0x12a424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 14));
    // 0x12a428: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x12a428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x12a42c: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x12a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x12a430: 0xfccf0000  sd          $t7, 0x0($a2)
    ctx->pc = 0x12a430u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 15));
    // 0x12a434: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_12a438:
    // 0x12a438: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x12a438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x12a43c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x12a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12a440: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12a440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12a444: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x12a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x12a448: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12a44c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x12a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x12a450: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x12a450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x12a454: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x12a454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x12a458: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x12a458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x12a45c: 0x706418e8  pminw       $v1, $v1, $a0
    ctx->pc = 0x12a45cu;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12a460: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x12a460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x12a464: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A464u;
    {
        const bool branch_taken_0x12a464 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A464u;
        // 0x12a468: 0x93a20083  lbu         $v0, 0x83($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a464) {
            ctx->pc = 0x12A478u;
            goto label_12a478;
        }
    }
    ctx->pc = 0x12A46Cu;
    // 0x12a46c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x12a46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12a470: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x12a470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x12a474: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x12a474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
label_12a478:
    // 0x12a478: 0x278789f4  addiu       $a3, $gp, -0x760C
    ctx->pc = 0x12a478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937076));
    // 0x12a47c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x12a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12a480: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x12a480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x12a484: 0x34634242  ori         $v1, $v1, 0x4242
    ctx->pc = 0x12a484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16962);
    // 0x12a488: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x12a488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x12a48c: 0x34634e26  ori         $v1, $v1, 0x4E26
    ctx->pc = 0x12a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20006);
    // 0x12a490: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a494: 0x3c04a03a  lui         $a0, 0xA03A
    ctx->pc = 0x12a494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41018 << 16));
    // 0x12a498: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x12a498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x12a49c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12a49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12a4a0: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x12a4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x12a4a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a4a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a4ac: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x12a4acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12a4b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12a4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4b4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12a4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a4b8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12a4bc: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a4c0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x12a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x12a4c4: 0x24a90020  addiu       $t1, $a1, 0x20
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12a4c8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x12a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x12a4cc: 0x24aa0030  addiu       $t2, $a1, 0x30
    ctx->pc = 0x12a4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12a4d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a4d4: 0x24ad0040  addiu       $t5, $a1, 0x40
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x12a4d8: 0x8e8300d0  lw          $v1, 0xD0($s4)
    ctx->pc = 0x12a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x12a4dc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12a4dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a4e0: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x12a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x12a4e4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12a4e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a4e8: 0x94660030  lhu         $a2, 0x30($v1)
    ctx->pc = 0x12a4e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12a4ec: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x12a4ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12a4f0: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x12a4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x12a4f4: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x12a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x12a4f8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x12a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x12a4fc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x12a4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x12a500: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x12a500u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x12a504: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x12a504u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x12a508: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x12a508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x12a50c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x12a50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12a510: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x12a510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x12a514: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x12a514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x12a518: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x12a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a51c: 0xfd2c0008  sd          $t4, 0x8($t1)
    ctx->pc = 0x12a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 12));
    // 0x12a520: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x12a520u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x12a524: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x12a524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x12a528: 0xaced0000  sw          $t5, 0x0($a3)
    ctx->pc = 0x12a528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 13));
    // 0x12a52c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12a52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a530: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x12a530u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x12a534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a538: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a53c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12a540: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12a544: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a548: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12a548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12a54c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x12a54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12a550: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12a550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12a554: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x12a554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x12a558: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12a558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a55c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12a560: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x12a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a564: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a568: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12a56c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x12a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12a570: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x12a570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x12a574: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12a574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12a578: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12a578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12a57c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12a57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12a580: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a584: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x12a584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a588: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12a588u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12a58c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x12a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a590: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12a590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a594: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12a594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a598: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x12a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a59c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12a5a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12a5a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12a5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12a5a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12a5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12a5ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a5b0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x12a5b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a5b4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12a5b8: 0x8f8389f8  lw          $v1, -0x7608($gp)
    ctx->pc = 0x12a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x12a5bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12a5c0: 0xaf8389f8  sw          $v1, -0x7608($gp)
    ctx->pc = 0x12a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937080), GPR_U32(ctx, 3));
    // 0x12a5c4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x12a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12a5c8:
    // 0x12a5c8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x12A5C8u;
    {
        const bool branch_taken_0x12a5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5C8u;
        // 0x12a5cc: 0x8f8289f8  lw          $v0, -0x7608($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5c8) {
            ctx->pc = 0x12A5FCu;
            goto label_12a5fc;
        }
    }
    ctx->pc = 0x12A5D0u;
    // 0x12a5d0: 0x2c420015  sltiu       $v0, $v0, 0x15
    ctx->pc = 0x12a5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x12a5d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A5D4u;
    {
        const bool branch_taken_0x12a5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5D4u;
        // 0x12a5d8: 0x8f8289f8  lw          $v0, -0x7608($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5d4) {
            ctx->pc = 0x12A600u;
            goto label_12a600;
        }
    }
    ctx->pc = 0x12A5DCu;
    // 0x12a5dc: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x12a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x12a5e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12a5e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A5E4u;
    {
        const bool branch_taken_0x12a5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5E4u;
        // 0x12a5e8: 0x8f8289f8  lw          $v0, -0x7608($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5e4) {
            ctx->pc = 0x12A600u;
            goto label_12a600;
        }
    }
    ctx->pc = 0x12A5ECu;
    // 0x12a5ec: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x12a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x12a5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a5f4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x12A5F4u;
    {
        const bool branch_taken_0x12a5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5F4u;
        // 0x12a5f8: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5f4) {
            ctx->pc = 0x12A708u;
            goto label_12a708;
        }
    }
    ctx->pc = 0x12A5FCu;
label_12a5fc:
    // 0x12a5fc: 0x8f8289f8  lw          $v0, -0x7608($gp)
    ctx->pc = 0x12a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_12a600:
    // 0x12a600: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x12A600u;
    {
        const bool branch_taken_0x12a600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A600u;
        // 0x12a604: 0x8f9089f0  lw          $s0, -0x7610($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a600) {
            ctx->pc = 0x12A704u;
            goto label_12a704;
        }
    }
    ctx->pc = 0x12A608u;
    // 0x12a608: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x12a608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12a60c: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x12a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x12a610: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12a614: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12a614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a618: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12a618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12a61c: 0x8f9189ec  lw          $s1, -0x7614($gp)
    ctx->pc = 0x12a61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x12a620: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12a620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12a624: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12a628: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12a628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12a62c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12a630: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x12a634: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12a634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a638: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12a638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12a63c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12a640: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12a640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12a644: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a648: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12a648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12a64c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a650: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a654: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12a654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12a658: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12a658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12a65c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12A65Cu;
    SET_GPR_U32(ctx, 31, 0x12A664u);
    ctx->pc = 0x12A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A65Cu;
    // 0x12a660: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12A65Cu, 0x12A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A664u;
label_12a664:
    // 0x12a664: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a668: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12a66c: 0x0  nop
    ctx->pc = 0x12a66cu;
    // NOP
label_12a670:
    // 0x12a670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a674: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12a674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12a678: 0x0  nop
    ctx->pc = 0x12a678u;
    // NOP
    // 0x12a67c: 0x0  nop
    ctx->pc = 0x12a67cu;
    // NOP
    // 0x12a680: 0x0  nop
    ctx->pc = 0x12a680u;
    // NOP
    // 0x12a684: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A684u;
    {
        const bool branch_taken_0x12a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a684) {
            ctx->pc = 0x12A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a670;
        }
    }
    ctx->pc = 0x12A68Cu;
    // 0x12a68c: 0x0  nop
    ctx->pc = 0x12a68cu;
    // NOP
label_12a690:
    // 0x12a690: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12A690u;
    SET_GPR_U32(ctx, 31, 0x12A698u);
    ctx->pc = 0x12A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A690u;
    // 0x12a694: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12A690u, 0x12A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A698u;
label_12a698:
    // 0x12a698: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12a69c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12A69Cu;
    {
        const bool branch_taken_0x12a69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A69Cu;
        // 0x12a6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a69c) {
            ctx->pc = 0x12A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a690;
        }
    }
    ctx->pc = 0x12A6A4u;
    // 0x12a6a4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x12a6a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a6ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A6ACu;
    {
        const bool branch_taken_0x12a6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6ACu;
        // 0x12a6b0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6ac) {
            ctx->pc = 0x12A6C0u;
            goto label_12a6c0;
        }
    }
    ctx->pc = 0x12A6B4u;
    // 0x12a6b4: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x12a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12a6b8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12A6B8u;
    SET_GPR_U32(ctx, 31, 0x12A6C0u);
    ctx->pc = 0x12A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6B8u;
    // 0x12a6bc: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12A6B8u, 0x12A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6C0u;
label_12a6c0:
    // 0x12a6c0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x12a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12a6c4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12a6c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a6cc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12a6d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a6d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12a6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12a6d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x12a6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12a6dc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12a6e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12a6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12a6e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12a6e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12a6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12a6ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x12a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x12a6f0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x12a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x12a6f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12a6f8: 0xaf8089f0  sw          $zero, -0x7610($gp)
    ctx->pc = 0x12a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
    // 0x12a6fc: 0xaf8089f4  sw          $zero, -0x760C($gp)
    ctx->pc = 0x12a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 0));
    // 0x12a700: 0xaf8089f8  sw          $zero, -0x7608($gp)
    ctx->pc = 0x12a700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937080), GPR_U32(ctx, 0));
label_12a704:
    // 0x12a704: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x12a704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_12a708:
    // 0x12a708: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x12a708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x12a70c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x12a70cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a710: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x12a710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x12a714: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x12a714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12a718: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x12a718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12a71c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x12a71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12a720: 0xc7b50100  lwc1        $f21, 0x100($sp)
    ctx->pc = 0x12a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a724: 0xc7b400f8  lwc1        $f20, 0xF8($sp)
    ctx->pc = 0x12a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a728: 0x3e00008  jr          $ra
    ctx->pc = 0x12A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A728u;
        // 0x12a72c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A730u;
}

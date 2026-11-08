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

// Function: EffectLazerDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x128bc8 - 0x1294c4
void EffectLazerDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x128bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLazerDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x128bc8");
#endif

    switch (ctx->pc) {
        case 0x128d80u: goto label_128d80;
        case 0x128df8u: goto label_128df8;
        case 0x128e00u: goto label_128e00;
        case 0x128e24u: goto label_128e24;
        case 0x128f18u: goto label_128f18;
        case 0x128f9cu: goto label_128f9c;
        case 0x128fb8u: goto label_128fb8;
        case 0x129128u: goto label_129128;
        case 0x129310u: goto label_129310;
        case 0x129338u: goto label_129338;
        case 0x129340u: goto label_129340;
        case 0x129350u: goto label_129350;
        case 0x1293d4u: goto label_1293d4;
        case 0x1293e0u: goto label_1293e0;
        case 0x129400u: goto label_129400;
        case 0x129408u: goto label_129408;
        case 0x12942cu: goto label_12942c;
        default: break;
    }

    ctx->pc = 0x128bc8u;

    // 0x128bc8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x128bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x128bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128bd0: 0xe7ba01a0  swc1        $f26, 0x1A0($sp)
    ctx->pc = 0x128bd0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x128bd4: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x128bd4u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x128bd8: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x128bd8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x128bdc: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x128bdcu;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x128be0: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x128be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x128be4: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x128be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x128be8: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x128be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x128bec: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x128becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x128bf0: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x128bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x128bf4: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x128bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x128bf8: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x128bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x128bfc: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x128bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x128c00: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x128c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x128c04: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x128c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
    // 0x128c08: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x128c08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x128c0c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x128c0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x128c10: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x128c10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x128c14: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x128c14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x128c18: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x128c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x128c1c: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x128c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x128c20: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x128c24: 0x14430214  bne         $v0, $v1, . + 4 + (0x214 << 2)
    ctx->pc = 0x128C24u;
    {
        const bool branch_taken_0x128c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x128C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C24u;
        // 0x128c28: 0xafa500b8  sw          $a1, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c24) {
            ctx->pc = 0x129478u;
            goto label_129478;
        }
    }
    ctx->pc = 0x128C2Cu;
    // 0x128c2c: 0x249501b0  addiu       $s5, $a0, 0x1B0
    ctx->pc = 0x128c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x128c30: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x128c30u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c34: 0xc6b70010  lwc1        $f23, 0x10($s5)
    ctx->pc = 0x128c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x128c38: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x128c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x128c3c: 0xc6b60014  lwc1        $f22, 0x14($s5)
    ctx->pc = 0x128c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x128c40: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x128c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x128c44: 0x24830120  addiu       $v1, $a0, 0x120
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x128c48: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x128c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x128c4c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x128c4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128c50: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x128c50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128c54: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x128c54u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x128c58: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x128c58u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x128c5c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x128c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x128c60: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x128c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128c64: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x128c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x128c68: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x128c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x128c6c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x128c70: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x128c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x128c74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x128c74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x128c78: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x128c78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x128c7c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x128c7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x128c80: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x128c80u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x128c84: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x128c84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c88: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x128c88u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128c8c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x128c8cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128c90: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x128c90u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128c94: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x128c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128c98: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x128c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128c9c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x128c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128ca0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x128ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x128ca4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x128ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128ca8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x128ca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cac: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x128cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cb0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x128cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x128cb4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x128cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cb8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x128cb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cbc: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x128cbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cc0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x128cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x128cc4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x128cc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cc8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x128cc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128ccc: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x128cccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128cd0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x128cd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x128cd4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x128cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x128cd8: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x128cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x128cdc: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x128cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x128ce0: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x128ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x128ce4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x128ce8: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x128ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x128cec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x128cecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x128cf0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x128cf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x128cf4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x128cf4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x128cf8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x128cf8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x128cfc: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x128cfcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d00: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x128d00u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d04: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x128d04u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128d08: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x128d08u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128d0c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x128d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d10: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x128d10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d14: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x128d14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d18: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x128d18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x128d1c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x128d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d20: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x128d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d24: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x128d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d28: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x128d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x128d2c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x128d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d30: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x128d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d34: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x128d34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d38: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x128d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x128d3c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x128d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d40: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x128d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d44: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x128d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128d48: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x128d48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x128d4c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x128d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x128d50: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x128d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x128d54: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x128d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x128d58: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x128d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x128d5c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x128d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x128d60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128d64: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x128d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x128d68: 0xafaf00c0  sw          $t7, 0xC0($sp)
    ctx->pc = 0x128d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 15));
    // 0x128d6c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x128d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x128d70: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x128d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x128d74: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x128d74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x128d78: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x128d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x128d7c: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x128d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_128d80:
    // 0x128d80: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x128d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128d88: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x128D88u;
    {
        const bool branch_taken_0x128d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D88u;
        // 0x128d8c: 0x8fb700d0  lw          $s7, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d88) {
            ctx->pc = 0x128DBCu;
            goto label_128dbc;
        }
    }
    ctx->pc = 0x128D90u;
    // 0x128d90: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x128d94: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x128d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128d98: 0x144001b3  bnez        $v0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D98u;
        // 0x128d9c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d98) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x128DA0u;
    // 0x128da0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x128da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128da4: 0x12e201b0  beq         $s7, $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x128DA4u;
    {
        const bool branch_taken_0x128da4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DA4u;
        // 0x128da8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128da4) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x128DACu;
    // 0x128dac: 0x12e201ae  beq         $s7, $v0, . + 4 + (0x1AE << 2)
    ctx->pc = 0x128DACu;
    {
        const bool branch_taken_0x128dac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DACu;
        // 0x128db0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dac) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x128DB4u;
    // 0x128db4: 0x12e201ad  beq         $s7, $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x128DB4u;
    {
        const bool branch_taken_0x128db4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DB4u;
        // 0x128db8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128db4) {
            ctx->pc = 0x12946Cu;
            goto label_12946c;
        }
    }
    ctx->pc = 0x128DBCu;
label_128dbc:
    // 0x128dbc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x128dc0: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x128dc4: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x128dc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128DC8u;
    {
        const bool branch_taken_0x128dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DC8u;
        // 0x128dcc: 0x8fb100b8  lw          $s1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dc8) {
            ctx->pc = 0x128DF0u;
            goto label_128df0;
        }
    }
    ctx->pc = 0x128DD0u;
    // 0x128dd0: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x128dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x128dd4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128dd8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x128dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x128ddc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x128ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x128de0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x128de4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128DE4u;
    {
        const bool branch_taken_0x128de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DE4u;
        // 0x128de8: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128de4) {
            ctx->pc = 0x128E24u;
            goto label_128e24;
        }
    }
    ctx->pc = 0x128DECu;
    // 0x128dec: 0x0  nop
    ctx->pc = 0x128decu;
    // NOP
label_128df0:
    // 0x128df0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128DF0u;
    SET_GPR_U32(ctx, 31, 0x128DF8u);
    ctx->pc = 0x128DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF0u;
    // 0x128df4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128DF0u, 0x128DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DF8u;
label_128df8:
    // 0x128df8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128DF8u;
    SET_GPR_U32(ctx, 31, 0x128E00u);
    ctx->pc = 0x128DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF8u;
    // 0x128dfc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128DF8u, 0x128E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E00u;
label_128e00:
    // 0x128e00: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x128e04: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x128e08: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x128e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128e0c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x128e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128e10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x128e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x128e14: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x128e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x128e18: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x128e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x128e1c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x128E1Cu;
    SET_GPR_U32(ctx, 31, 0x128E24u);
    ctx->pc = 0x128E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E1Cu;
    // 0x128e20: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x128E1Cu, 0x128E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E24u;
label_128e24:
    // 0x128e24: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x128e24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e28: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x128e28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x128e2c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x128e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x128e30: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x128e30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x128e34: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x128e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x128e38: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x128e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x128e3c: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x128e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x128e40: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x128e40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x128e44: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x128e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x128e48: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x128e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x128e4c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x128e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128e50: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x128e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x128e54: 0x24500070  addiu       $s0, $v0, 0x70
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x128e58: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x128e58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x128e5c: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x128e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x128e60: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x128e60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x128e64: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x128e68: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x128e68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x128e6c: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x128e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x128e70: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x128e70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x128e74: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x128e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x128e78: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x128e78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x128e7c: 0x244b0060  addiu       $t3, $v0, 0x60
    ctx->pc = 0x128e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x128e80: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x128e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x128e84: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x128e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x128e88: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x128e88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x128e8c: 0x244c0050  addiu       $t4, $v0, 0x50
    ctx->pc = 0x128e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x128e90: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x128e90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x128e94: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128e98: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x128e98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x128e9c: 0x240d0006  addiu       $t5, $zero, 0x6
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128ea0: 0x3c0e0007  lui         $t6, 0x7
    ctx->pc = 0x128ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)7 << 16));
    // 0x128ea4: 0xc7988108  lwc1        $f24, -0x7EF8($gp)
    ctx->pc = 0x128ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x128ea8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x128ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x128eac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x128eacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128eb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x128eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x128eb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ebc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x128ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x128ec0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x128ec0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ec4: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x128ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x128ec8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x128ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ecc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x128eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x128ed0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x128ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x128ed4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x128ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x128ed8: 0x35cef000  ori         $t6, $t6, 0xF000
    ctx->pc = 0x128ed8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)61440);
    // 0x128edc: 0xfd890000  sd          $t1, 0x0($t4)
    ctx->pc = 0x128edcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 9));
    // 0x128ee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x128ee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ee4: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x128ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x128ee8: 0x8c4400d0  lw          $a0, 0xD0($v0)
    ctx->pc = 0x128ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x128eec: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x128eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x128ef0: 0x94850030  lhu         $a1, 0x30($a0)
    ctx->pc = 0x128ef0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x128ef4: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x128ef4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x128ef8: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x128ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x128efc: 0xfd6d0008  sd          $t5, 0x8($t3)
    ctx->pc = 0x128efcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 13));
    // 0x128f00: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x128f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x128f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x128f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128f08: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x128f08u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x128f0c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x128f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x128f10: 0xa3a40083  sb          $a0, 0x83($sp)
    ctx->pc = 0x128f10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x128f14: 0xc6b4001c  lwc1        $f20, 0x1C($s5)
    ctx->pc = 0x128f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_128f18:
    // 0x128f18: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x128f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x128f1c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x128f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x128f20: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x128f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x128f24: 0x24a583a0  addiu       $a1, $a1, -0x7C60
    ctx->pc = 0x128f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935456));
    // 0x128f28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f30: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x128f34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x128f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x128f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128f3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x128f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f40: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x128f40u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x128f44: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x128f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x128f48: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x128f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x128f4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x128f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x128f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128f54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x128f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x128f58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128f5c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x128f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x128f60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x128f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x128f64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x128f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128f68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x128f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f6c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x128f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x128f70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x128f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128f74: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x128f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x128f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f80: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f88: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x128f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x128f8c: 0x7faa00f0  sq          $t2, 0xF0($sp)
    ctx->pc = 0x128f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 10));
    // 0x128f90: 0x7fae0100  sq          $t6, 0x100($sp)
    ctx->pc = 0x128f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 14));
    // 0x128f94: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x128F94u;
    SET_GPR_U32(ctx, 31, 0x128F9Cu);
    ctx->pc = 0x128F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F94u;
    // 0x128f98: 0x7faf0110  sq          $t7, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x128F94u, 0x128F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F9Cu;
label_128f9c:
    // 0x128f9c: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x128f9cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x128fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x128fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fa4: 0x7bae0100  lq          $t6, 0x100($sp)
    ctx->pc = 0x128fa4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x128fa8: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x128fa8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128fac: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x128facu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x128fb0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x128fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128fb4: 0x0  nop
    ctx->pc = 0x128fb4u;
    // NOP
label_128fb8:
    // 0x128fb8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x128fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x128fbc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x128fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128fc4: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x128fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x128fc8: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x128fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x128fcc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x128FCCu;
    {
        const bool branch_taken_0x128fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128fcc) {
            ctx->pc = 0x128FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FCCu;
            // 0x128fd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FECu;
            goto label_128fec;
        }
    }
    ctx->pc = 0x128FD4u;
    // 0x128fd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x128fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x128fd8: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x128fdc: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x128fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x128fe0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x128FE0u;
    {
        const bool branch_taken_0x128fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128fe0) {
            ctx->pc = 0x128FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FE0u;
            // 0x128fe4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FF8u;
            goto label_128ff8;
        }
    }
    ctx->pc = 0x128FE8u;
    // 0x128fe8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_128fec:
    // 0x128fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128FECu;
    {
        const bool branch_taken_0x128fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FECu;
        // 0x128ff0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fec) {
            ctx->pc = 0x129010u;
            goto label_129010;
        }
    }
    ctx->pc = 0x128FF4u;
    // 0x128ff4: 0x0  nop
    ctx->pc = 0x128ff4u;
    // NOP
label_128ff8:
    // 0x128ff8: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x128ffc: 0x1c2102b  sltu        $v0, $t6, $v0
    ctx->pc = 0x128ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129000u;
    {
        const bool branch_taken_0x129000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129000u;
        // 0x129004: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129000) {
            ctx->pc = 0x129014u;
            goto label_129014;
        }
    }
    ctx->pc = 0x129008u;
    // 0x129008: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x129008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12900c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129010:
    // 0x129010: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_129014:
    // 0x129014: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129018: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129018u;
        // 0x12901c: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129018) {
            ctx->pc = 0x128FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128fb8;
        }
    }
    ctx->pc = 0x129020u;
    // 0x129020: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x129020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x129024: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x129024u;
    {
        const bool branch_taken_0x129024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129024) {
            ctx->pc = 0x129028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129024u;
            // 0x129028: 0x8ea20024  lw          $v0, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1290DCu;
            goto label_1290dc;
        }
    }
    ctx->pc = 0x12902Cu;
    // 0x12902c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x129030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129034: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x129034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x129038: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x129038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12903c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12903cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x129040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x129044: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x129044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x129048: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x129048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x12904c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12904cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x129050: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x129050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x129054: 0x704910c8  pmaxw       $v0, $v0, $t1
    ctx->pc = 0x129054u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x129058: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x129058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12905c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x12905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x129060: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x129060u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129064: 0x22000  sll         $a0, $v0, 0
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129068: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x129068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x12906c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x12906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x129070: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x129070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x129074: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x129074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x129078: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x129078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12907c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129080: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x129080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x129084: 0xa3880a  movz        $s1, $a1, $v1
    ctx->pc = 0x129084u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x129088: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x129088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x12908c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129094: 0x704418e8  pminw       $v1, $v0, $a0
    ctx->pc = 0x129094u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x129098: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x129098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x12909c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12909Cu;
    {
        const bool branch_taken_0x12909c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1290A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12909Cu;
        // 0x1290a0: 0x93a50083  lbu         $a1, 0x83($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12909c) {
            ctx->pc = 0x1290B8u;
            goto label_1290b8;
        }
    }
    ctx->pc = 0x1290A4u;
    // 0x1290a4: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x1290a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x1290a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1290a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1290ac: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1290b0: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x1290b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x1290b4: 0x93a50083  lbu         $a1, 0x83($sp)
    ctx->pc = 0x1290b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
label_1290b8:
    // 0x1290b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1290bc: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x1290bcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1290c0: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1290c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x1290c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1290C4u;
    {
        const bool branch_taken_0x1290c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1290c4) {
            ctx->pc = 0x1290C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290C4u;
            // 0x1290c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1290CCu;
            goto label_1290cc;
        }
    }
    ctx->pc = 0x1290CCu;
label_1290cc:
    // 0x1290cc: 0x1012  mflo        $v0
    ctx->pc = 0x1290ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1290d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1290d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1290d4: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1290d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1290d8: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_1290dc:
    // 0x1290dc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1290DCu;
    {
        const bool branch_taken_0x1290dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290dc) {
            ctx->pc = 0x1290E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290DCu;
            // 0x1290e0: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129104u;
            goto label_129104;
        }
    }
    ctx->pc = 0x1290E4u;
    // 0x1290e4: 0x2a82000d  slti        $v0, $s4, 0xD
    ctx->pc = 0x1290e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1290e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1290E8u;
    {
        const bool branch_taken_0x1290e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290e8) {
            ctx->pc = 0x1290ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290E8u;
            // 0x1290ec: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129104u;
            goto label_129104;
        }
    }
    ctx->pc = 0x1290F0u;
    // 0x1290f0: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x1290f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x1290f4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1290f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1290f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1290f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1290fc: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x1290fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x129100: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_129104:
    // 0x129104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129108: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x129108u;
    {
        const bool branch_taken_0x129108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129108u;
        // 0x12910c: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129108) {
            ctx->pc = 0x129140u;
            goto label_129140;
        }
    }
    ctx->pc = 0x129110u;
    // 0x129110: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x129110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x129114: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x129114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x129118: 0x7faa00f0  sq          $t2, 0xF0($sp)
    ctx->pc = 0x129118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 10));
    // 0x12911c: 0x7fae0100  sq          $t6, 0x100($sp)
    ctx->pc = 0x12911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 14));
    // 0x129120: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x129120u;
    SET_GPR_U32(ctx, 31, 0x129128u);
    ctx->pc = 0x129124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129120u;
    // 0x129124: 0x7faf0110  sq          $t7, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x129120u, 0x129128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129128u;
label_129128:
    // 0x129128: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x129128u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12912c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12912cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129130: 0x7bae0100  lq          $t6, 0x100($sp)
    ctx->pc = 0x129130u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x129134: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x129134u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x129138: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x129138u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12913c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x12913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_129140:
    // 0x129140: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x129140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x129144: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x129144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x129148: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x129148u;
    {
        const bool branch_taken_0x129148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129148u;
        // 0x12914c: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129148) {
            ctx->pc = 0x1291D0u;
            goto label_1291d0;
        }
    }
    ctx->pc = 0x129150u;
    // 0x129150: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x129150u;
    {
        const bool branch_taken_0x129150 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x129154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129150u;
        // 0x129154: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129150) {
            ctx->pc = 0x129160u;
            goto label_129160;
        }
    }
    ctx->pc = 0x129158u;
    // 0x129158: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x129158u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12915c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12915cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_129160:
    // 0x129160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129164: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12916c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12916cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129170: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129174: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x129174u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x129178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12917c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12917cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x129180: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129184: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x129184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12918c: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x12918cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129190: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129194: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12919c: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x12919cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1291a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1291a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1291a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1291a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1291a8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1291ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1291acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1291b0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1291b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1291b4: 0xe4950008  swc1        $f21, 0x8($a0)
    ctx->pc = 0x1291b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1291b8: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x1291b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1291bc: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x1291bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1291c0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1291c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1291c4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1291C4u;
    {
        const bool branch_taken_0x1291c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291C4u;
        // 0x1291c8: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291c4) {
            ctx->pc = 0x1292A4u;
            goto label_1292a4;
        }
    }
    ctx->pc = 0x1291CCu;
    // 0x1291cc: 0x0  nop
    ctx->pc = 0x1291ccu;
    // NOP
label_1291d0:
    // 0x1291d0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1291D0u;
    {
        const bool branch_taken_0x1291d0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1291D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291D0u;
        // 0x1291d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291d0) {
            ctx->pc = 0x129218u;
            goto label_129218;
        }
    }
    ctx->pc = 0x1291D8u;
    // 0x1291d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1291d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1291dc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1291dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1291e0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1291e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1291e4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1291e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1291e8: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x1291e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x1291ec: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1291ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1291f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1291f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1291f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1291f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1291f8: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x1291f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x1291fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1291fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129200: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x129200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x129204: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129208: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12920c: 0xffc30008  sd          $v1, 0x8($fp)
    ctx->pc = 0x12920cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 3));
    // 0x129210: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x129210u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x129214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129218:
    // 0x129218: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12921c: 0x3c03503a  lui         $v1, 0x503A
    ctx->pc = 0x12921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20538 << 16));
    // 0x129220: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x129220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x129224: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x129224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x129228: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x129228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x12922c: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x129230: 0x34842c2e  ori         $a0, $a0, 0x2C2E
    ctx->pc = 0x129230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11310);
    // 0x129234: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x129234u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x129238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12923c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x12923cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x129240: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129244: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129248: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12924c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x12924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129254: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x129254u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x129258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12925c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12925cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x129260: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129264: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x129264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x129268: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x129268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12926c: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x12926cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x129270: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129274: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x129274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x129278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12927c: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x12927cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x129280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129284: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129288: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x129288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12928c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12928cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x129290: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x129290u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129294: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129298: 0xe4770004  swc1        $f23, 0x4($v1)
    ctx->pc = 0x129298u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12929c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12929cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1292a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1292a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1292a4:
    // 0x1292a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1292a8: 0x2a820014  slti        $v0, $s4, 0x14
    ctx->pc = 0x1292a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1292ac: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x1292ACu;
    {
        const bool branch_taken_0x1292ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292ACu;
        // 0x1292b0: 0x4618a500  add.s       $f20, $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292ac) {
            ctx->pc = 0x128F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128f18;
        }
    }
    ctx->pc = 0x1292B4u;
    // 0x1292b4: 0x1a60000f  blez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1292B4u;
    {
        const bool branch_taken_0x1292b4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1292B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B4u;
        // 0x1292b8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292b4) {
            ctx->pc = 0x1292F4u;
            goto label_1292f4;
        }
    }
    ctx->pc = 0x1292BCu;
    // 0x1292bc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1292bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1292c0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1292c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1292c4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1292c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1292c8: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x1292c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x1292cc: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1292ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1292d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1292d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1292d4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1292d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1292d8: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x1292d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x1292dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1292dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1292e0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x1292e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1292e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1292e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1292e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1292ec: 0xffc30008  sd          $v1, 0x8($fp)
    ctx->pc = 0x1292ecu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 3));
    // 0x1292f0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x1292f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
label_1292f4:
    // 0x1292f4: 0x15e00020  bnez        $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292F4u;
        // 0x1292f8: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x129378u;
            goto label_129378;
        }
    }
    ctx->pc = 0x1292FCu;
    // 0x1292fc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x129300: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129300u;
    {
        const bool branch_taken_0x129300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129300u;
        // 0x129304: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129300) {
            ctx->pc = 0x129348u;
            goto label_129348;
        }
    }
    ctx->pc = 0x129308u;
    // 0x129308: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129308u;
    SET_GPR_U32(ctx, 31, 0x129310u);
    ctx->pc = 0x12930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129308u;
    // 0x12930c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129308u, 0x129310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129310u;
label_129310:
    // 0x129310: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x129314: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x129318: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x129318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x12931c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12931cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129320: 0xaec30018  sw          $v1, 0x18($s6)
    ctx->pc = 0x129320u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
    // 0x129324: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x129324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x129328: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x129328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x12932c: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x12932cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x129330: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129330u;
    SET_GPR_U32(ctx, 31, 0x129338u);
    ctx->pc = 0x129334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129330u;
    // 0x129334: 0xae56008c  sw          $s6, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129330u, 0x129338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129338u;
label_129338:
    // 0x129338: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129338u;
    SET_GPR_U32(ctx, 31, 0x129340u);
    ctx->pc = 0x12933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129338u;
    // 0x12933c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129338u, 0x129340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129340u;
label_129340:
    // 0x129340: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129340u;
        // 0x129344: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129340) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x129348u;
label_129348:
    // 0x129348: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x129348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12934c: 0x0  nop
    ctx->pc = 0x12934cu;
    // NOP
label_129350:
    // 0x129350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129354: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x129358: 0x0  nop
    ctx->pc = 0x129358u;
    // NOP
    // 0x12935c: 0x0  nop
    ctx->pc = 0x12935cu;
    // NOP
    // 0x129360: 0x0  nop
    ctx->pc = 0x129360u;
    // NOP
    // 0x129364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129364u;
    {
        const bool branch_taken_0x129364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129364u;
        // 0x129368: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129364) {
            ctx->pc = 0x129350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129350;
        }
    }
    ctx->pc = 0x12936Cu;
    // 0x12936c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12936Cu;
    {
        const bool branch_taken_0x12936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12936Cu;
        // 0x129370: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12936c) {
            ctx->pc = 0x12946Cu;
            goto label_12946c;
        }
    }
    ctx->pc = 0x129374u;
    // 0x129374: 0x0  nop
    ctx->pc = 0x129374u;
    // NOP
label_129378:
    // 0x129378: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x129378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12937c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x12937cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x129380: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x129380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x129384: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x129384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x129388: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x129388u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12938c: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x12938cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x129390: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x129390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129394: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x129394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x129398: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12939c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12939cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293a0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1293a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1293a4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x1293a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1293a8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1293a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1293ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1293acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1293b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1293b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1293b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1293b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1293b8: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1293b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1293bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1293bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1293c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1293c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1293c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1293c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1293c8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1293c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1293cc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1293CCu;
    SET_GPR_U32(ctx, 31, 0x1293D4u);
    ctx->pc = 0x1293D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293CCu;
    // 0x1293d0: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1293CCu, 0x1293D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293D4u;
label_1293d4:
    // 0x1293d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1293d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1293d8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1293d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1293dc: 0x0  nop
    ctx->pc = 0x1293dcu;
    // NOP
label_1293e0:
    // 0x1293e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1293e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1293e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1293e8: 0x0  nop
    ctx->pc = 0x1293e8u;
    // NOP
    // 0x1293ec: 0x0  nop
    ctx->pc = 0x1293ecu;
    // NOP
    // 0x1293f0: 0x0  nop
    ctx->pc = 0x1293f0u;
    // NOP
    // 0x1293f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1293F4u;
    {
        const bool branch_taken_0x1293f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1293f4) {
            ctx->pc = 0x1293E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1293e0;
        }
    }
    ctx->pc = 0x1293FCu;
    // 0x1293fc: 0x0  nop
    ctx->pc = 0x1293fcu;
    // NOP
label_129400:
    // 0x129400: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x129400u;
    SET_GPR_U32(ctx, 31, 0x129408u);
    ctx->pc = 0x129404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129400u;
    // 0x129404: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x129400u, 0x129408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129408u;
label_129408:
    // 0x129408: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x129408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12940c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12940Cu;
    {
        const bool branch_taken_0x12940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x129410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12940Cu;
        // 0x129410: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12940c) {
            ctx->pc = 0x129400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129400;
        }
    }
    ctx->pc = 0x129414u;
    // 0x129414: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x129414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x129418: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x129418u;
    {
        const bool branch_taken_0x129418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129418u;
        // 0x12941c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129418) {
            ctx->pc = 0x12942Cu;
            goto label_12942c;
        }
    }
    ctx->pc = 0x129420u;
    // 0x129420: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x129420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x129424: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129424u;
    SET_GPR_U32(ctx, 31, 0x12942Cu);
    ctx->pc = 0x129428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129424u;
    // 0x129428: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129424u, 0x12942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12942Cu;
label_12942c:
    // 0x12942c: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x12942cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x129430: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x129434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129438: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x129438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12943c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129440: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x129440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x129444: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x129444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x129448: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x129448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x12944c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x129450: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129454: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x129454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x129458: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x129458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x12945c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x12945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x129460: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x129460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x129464: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x129464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_129468:
    // 0x129468: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12946c:
    // 0x12946c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x12946cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129470: 0x1440fe43  bnez        $v0, . + 4 + (-0x1BD << 2)
    ctx->pc = 0x129470u;
    {
        const bool branch_taken_0x129470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129470u;
        // 0x129474: 0xafa400d0  sw          $a0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129470) {
            ctx->pc = 0x128D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d80;
        }
    }
    ctx->pc = 0x129478u;
label_129478:
    // 0x129478: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x129478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12947c: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x12947cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x129480: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x129480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x129484: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x129484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x129488: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x129488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12948c: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x12948cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x129490: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x129490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x129494: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x129498: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x129498u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12949c: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x12949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1294a0: 0xc7ba01a0  lwc1        $f26, 0x1A0($sp)
    ctx->pc = 0x1294a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1294a4: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x1294a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1294a8: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x1294a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1294ac: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x1294acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1294b0: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1294b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1294b4: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1294b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1294b8: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1294b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1294bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1294BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294BCu;
        // 0x1294c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1294BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1294C4u;
}

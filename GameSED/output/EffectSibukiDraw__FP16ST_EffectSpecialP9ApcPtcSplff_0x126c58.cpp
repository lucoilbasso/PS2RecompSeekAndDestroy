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

// Function: EffectSibukiDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x126c58 - 0x1272f8
void EffectSibukiDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x126c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSibukiDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x126c58");
#endif

    switch (ctx->pc) {
        case 0x126e48u: goto label_126e48;
        case 0x126e58u: goto label_126e58;
        case 0x126e90u: goto label_126e90;
        case 0x126f70u: goto label_126f70;
        case 0x126f88u: goto label_126f88;
        case 0x12702cu: goto label_12702c;
        case 0x127058u: goto label_127058;
        case 0x127228u: goto label_127228;
        case 0x127230u: goto label_127230;
        case 0x127250u: goto label_127250;
        case 0x127258u: goto label_127258;
        case 0x127280u: goto label_127280;
        default: break;
    }

    ctx->pc = 0x126c58u;

    // 0x126c58: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x126c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126c60: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x126c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x126c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c68: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x126c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x126c6c: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x126c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x126c70: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x126c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x126c74: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x126c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x126c78: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x126c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x126c7c: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x126c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x126c80: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x126c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x126c84: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x126c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x126c88: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x126c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
    // 0x126c8c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x126c8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x126c90: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x126c90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x126c94: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x126c94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x126c98: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x126c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x126c9c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x126ca0: 0x14430185  bne         $v0, $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x126CA0u;
    {
        const bool branch_taken_0x126ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x126CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CA0u;
        // 0x126ca4: 0x263401b0  addiu       $s4, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ca0) {
            ctx->pc = 0x1272B8u;
            goto label_1272b8;
        }
    }
    ctx->pc = 0x126CA8u;
    // 0x126ca8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x126ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x126cac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x126cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x126cb0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x126cb0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x126cb4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x126cb4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x126cb8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x126cb8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x126cbc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x126cbcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x126cc0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x126cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126cc4: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x126cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126cc8: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x126cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x126ccc: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x126cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126cd0: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x126cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x126cd4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x126cd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126cd8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x126cd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x126cdc: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x126cdcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x126ce0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x126ce0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x126ce4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126ce8: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126cec: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x126cf0: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x126cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126cf4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x126cf8: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x126cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x126cfc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x126cfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x126d00: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x126d00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x126d04: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x126d04u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x126d08: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x126d08u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x126d0c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x126d0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126d10: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x126d10u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126d14: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x126d14u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126d18: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x126d18u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d1c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x126d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d20: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x126d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d24: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x126d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d28: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x126d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x126d2c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x126d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d30: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x126d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d34: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x126d34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d38: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x126d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x126d3c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x126d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d40: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x126d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d44: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x126d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d48: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x126d48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x126d4c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x126d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d50: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x126d50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d54: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x126d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d58: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x126d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x126d5c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x126d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x126d60: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x126d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x126d64: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x126d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x126d68: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x126d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x126d6c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x126d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x126d70: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x126d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x126d74: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x126d74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x126d78: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x126d78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x126d7c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x126d7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x126d80: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x126d80u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x126d84: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x126d84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126d88: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x126d88u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126d8c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x126d8cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126d90: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x126d90u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d94: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x126d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d98: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x126d98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126d9c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x126d9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126da0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x126da0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x126da4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x126da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126da8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x126da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126dac: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x126dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126db0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x126db0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x126db4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x126db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126db8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x126db8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126dbc: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x126dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126dc0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x126dc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x126dc4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x126dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126dc8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x126dc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126dcc: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x126dccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x126dd0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x126dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x126dd4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x126dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x126dd8: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x126dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x126ddc: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x126ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x126de0: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x126de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x126de4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x126de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x126de8: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x126de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126df0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x126df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126df8: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x126df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x126dfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x126dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e00: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x126e00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x126e04: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x126e04u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x126e08: 0xc7978100  lwc1        $f23, -0x7F00($gp)
    ctx->pc = 0x126e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x126e0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x126E0Cu;
    {
        const bool branch_taken_0x126e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E0Cu;
        // 0x126e10: 0xc6940014  lwc1        $f20, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e0c) {
            ctx->pc = 0x126E38u;
            goto label_126e38;
        }
    }
    ctx->pc = 0x126E14u;
    // 0x126e14: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x126e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x126e18: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x126e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x126e1c: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x126e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x126e20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x126e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x126e24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x126e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x126e28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x126e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x126e2c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x126e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x126e30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x126E30u;
    {
        const bool branch_taken_0x126e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E30u;
        // 0x126e34: 0xac830098  sw          $v1, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e30) {
            ctx->pc = 0x126E90u;
            goto label_126e90;
        }
    }
    ctx->pc = 0x126E38u;
label_126e38:
    // 0x126e38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x126e3c: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x126e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x126e40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126E40u;
    SET_GPR_U32(ctx, 31, 0x126E48u);
    ctx->pc = 0x126E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E40u;
    // 0x126e44: 0x8ca40084  lw          $a0, 0x84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126E40u, 0x126E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E48u;
label_126e48:
    // 0x126e48: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x126e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x126e4c: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x126e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x126e50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126E50u;
    SET_GPR_U32(ctx, 31, 0x126E58u);
    ctx->pc = 0x126E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E50u;
    // 0x126e54: 0x8cc40088  lw          $a0, 0x88($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126E50u, 0x126E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E58u;
label_126e58:
    // 0x126e58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x126e5c: 0x2442d650  addiu       $v0, $v0, -0x29B0
    ctx->pc = 0x126e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x126e60: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x126e64: 0x8c50008c  lw          $s0, 0x8C($v0)
    ctx->pc = 0x126e64u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D6DCu));
    // 0x126e68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e6c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x126e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6D0u));
    // 0x126e70: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x126e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x126e74: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x126e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x126e78: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x126e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x126e7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x126e80: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x126e80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6D8u));
    // 0x126e84: 0xacc5008c  sw          $a1, 0x8C($a2)
    ctx->pc = 0x126e84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6DCu, _value); } while (0);
    // 0x126e88: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x126E88u;
    SET_GPR_U32(ctx, 31, 0x126E90u);
    ctx->pc = 0x126E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E88u;
    // 0x126e8c: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x126E88u, 0x126E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E90u;
label_126e90:
    // 0x126e90: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x126e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x126e94: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x126e94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x126e98: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x126e98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x126e9c: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x126e9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x126ea0: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x126ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x126ea4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x126ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x126ea8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126eac: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x126eacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x126eb0: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x126eb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x126eb4: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x126eb8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x126ebc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x126ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x126ec0: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x126ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x126ec4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x126ec8: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x126ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x126ecc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x126eccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x126ed0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x126ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x126ed4: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x126ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x126ed8: 0x24690060  addiu       $t1, $v1, 0x60
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x126edc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x126edcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x126ee0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x126ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126ee4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x126ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x126ee8: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x126ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x126eec: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x126eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x126ef0: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x126ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x126ef4: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x126ef4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x126ef8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x126ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x126efc: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x126efcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x126f00: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x126f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126f04: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x126f04u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x126f08: 0x244f0e00  addiu       $t7, $v0, 0xE00
    ctx->pc = 0x126f08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x126f0c: 0x246c0050  addiu       $t4, $v1, 0x50
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x126f10: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x126f10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x126f14: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x126f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x126f18: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x126f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x126f1c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x126f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x126f20: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x126f20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126f24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126f28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x126f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f2c: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x126f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
    // 0x126f30: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x126f30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x126f34: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x126f34u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x126f38: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x126f3c: 0xfd8b0000  sd          $t3, 0x0($t4)
    ctx->pc = 0x126f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 11));
    // 0x126f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126f44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x126f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x126f48: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x126f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x126f4c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x126f4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x126f50: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x126f50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x126f54: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x126f54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x126f58: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x126f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x126f5c: 0xfd2e0008  sd          $t6, 0x8($t1)
    ctx->pc = 0x126f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 14));
    // 0x126f60: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x126f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x126f64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x126f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126f68: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x126f68u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x126f6c: 0x0  nop
    ctx->pc = 0x126f6cu;
    // NOP
label_126f70:
    // 0x126f70: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x126f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x126f74: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x126f74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f80: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x126f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x126f84: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_126f88:
    // 0x126f88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f8c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126f8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126f90: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126f90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126f94: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126f94u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126f98: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x126f98u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126f9c: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x126f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126fa0: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x126fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126fa4: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x126fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x126fa8: 0xfac70030  sqc2        $vf7, 0x30($s6)
    ctx->pc = 0x126fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126fac: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x126facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x126fb0: 0x6f2021  addu        $a0, $v1, $t7
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x126fb4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x126fb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126fb8: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x126fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x126fbc: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x126fc0: 0x24c60e10  addiu       $a2, $a2, 0xE10
    ctx->pc = 0x126fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3600));
    // 0x126fc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x126fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x126fc8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x126fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126fcc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x126fccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x126fd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126fd4: 0x16e40008  bne         $s7, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126FD4u;
    {
        const bool branch_taken_0x126fd4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        ctx->pc = 0x126FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FD4u;
        // 0x126fd8: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fd4) {
            ctx->pc = 0x126FF8u;
            goto label_126ff8;
        }
    }
    ctx->pc = 0x126FDCu;
    // 0x126fdc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x126fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126fe0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x126fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126fe4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x126fe4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x126fe8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x126fe8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x126fec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x126fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x126ff0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x126ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x126ff4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x126ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126ff8:
    // 0x126ff8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x126ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x126ffc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x126ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127000: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x127000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127004: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x127004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x127008: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x127008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12700c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x12700cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x127010: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x127010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127014: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127018: 0x7faa0100  sq          $t2, 0x100($sp)
    ctx->pc = 0x127018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 10));
    // 0x12701c: 0x7faf0110  sq          $t7, 0x110($sp)
    ctx->pc = 0x12701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    // 0x127020: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x127020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x127024: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x127024u;
    SET_GPR_U32(ctx, 31, 0x12702Cu);
    ctx->pc = 0x127028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127024u;
    // 0x127028: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x127024u, 0x12702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12702Cu;
label_12702c:
    // 0x12702c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x127030: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x127034: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x127034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x127038: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x127038u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12703c: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x127040: 0x7baa0100  lq          $t2, 0x100($sp)
    ctx->pc = 0x127040u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x127044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127048: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12704c: 0x43282b  sltu        $a1, $v0, $v1
    ctx->pc = 0x12704cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x127050: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x127050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x127054: 0x0  nop
    ctx->pc = 0x127054u;
    // NOP
label_127058:
    // 0x127058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x127058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12705c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127060: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x127064: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x127064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x127068: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x127068u;
    {
        const bool branch_taken_0x127068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127068) {
            ctx->pc = 0x12706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127068u;
            // 0x12706c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127088u;
            goto label_127088;
        }
    }
    ctx->pc = 0x127070u;
    // 0x127070: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x127074: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x127074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x127078: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x127078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12707c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12707Cu;
    {
        const bool branch_taken_0x12707c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12707c) {
            ctx->pc = 0x127098u;
            goto label_127098;
        }
    }
    ctx->pc = 0x127084u;
    // 0x127084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x127084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_127088:
    // 0x127088: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x127088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x12708c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12708Cu;
    {
        const bool branch_taken_0x12708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12708Cu;
        // 0x127090: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12708c) {
            ctx->pc = 0x1270ACu;
            goto label_1270ac;
        }
    }
    ctx->pc = 0x127094u;
    // 0x127094: 0x0  nop
    ctx->pc = 0x127094u;
    // NOP
label_127098:
    // 0x127098: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127098u;
    {
        const bool branch_taken_0x127098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127098u;
        // 0x12709c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127098) {
            ctx->pc = 0x1270B0u;
            goto label_1270b0;
        }
    }
    ctx->pc = 0x1270A0u;
    // 0x1270a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1270a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1270a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1270a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1270ac:
    // 0x1270ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1270acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1270b0:
    // 0x1270b0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1270b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1270b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1270B4u;
    {
        const bool branch_taken_0x1270b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270B4u;
        // 0x1270b8: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270b4) {
            ctx->pc = 0x127058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127058;
        }
    }
    ctx->pc = 0x1270BCu;
    // 0x1270bc: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1270BCu;
    {
        const bool branch_taken_0x1270bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270BCu;
        // 0x1270c0: 0x2a62000c  slti        $v0, $s3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270bc) {
            ctx->pc = 0x127134u;
            goto label_127134;
        }
    }
    ctx->pc = 0x1270C4u;
    // 0x1270c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1270c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1270c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1270c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1270ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1270d0: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x1270d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1270d4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1270d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1270d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1270d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1270dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1270dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1270e0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1270e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1270e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1270e8: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x1270e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1270ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1270ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270f0: 0xe4760008  swc1        $f22, 0x8($v1)
    ctx->pc = 0x1270f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1270f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1270f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1270f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1270f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1270fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1270fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127100: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x127100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x127104: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x127108: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x127108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12710c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12710cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x127110: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x127110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127114: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x127114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127118: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x127118u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12711c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x12711cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x127120: 0xe4960008  swc1        $f22, 0x8($a0)
    ctx->pc = 0x127120u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x127124: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x127124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x127128: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x127128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12712c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12712cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127130: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x127130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
label_127134:
    // 0x127134: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x127134u;
    {
        const bool branch_taken_0x127134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127134) {
            ctx->pc = 0x127138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127134u;
            // 0x127138: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127160u;
            goto label_127160;
        }
    }
    ctx->pc = 0x12713Cu;
    // 0x12713c: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x12713cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x127140: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x127140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x127144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127144u;
    {
        const bool branch_taken_0x127144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127144u;
        // 0x127148: 0x246200f6  addiu       $v0, $v1, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127144) {
            ctx->pc = 0x127158u;
            goto label_127158;
        }
    }
    ctx->pc = 0x12714Cu;
    // 0x12714c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12714Cu;
    {
        const bool branch_taken_0x12714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12714Cu;
        // 0x127150: 0xa3a000c3  sb          $zero, 0xC3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12714c) {
            ctx->pc = 0x12715Cu;
            goto label_12715c;
        }
    }
    ctx->pc = 0x127154u;
    // 0x127154: 0x0  nop
    ctx->pc = 0x127154u;
    // NOP
label_127158:
    // 0x127158: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x127158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
label_12715c:
    // 0x12715c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12715cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_127160:
    // 0x127160: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x127164: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x127164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x127168: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x127168u;
    {
        const bool branch_taken_0x127168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127168u;
        // 0x12716c: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127168) {
            ctx->pc = 0x126F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126f88;
        }
    }
    ctx->pc = 0x127170u;
    // 0x127170: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x127170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127174: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x127174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x127178: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x127178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x12717c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x12717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x127180: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x127180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x127184: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x127188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12718c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127190: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x127190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x127194: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127198: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x127198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12719c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1271a0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1271a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1271a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1271a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1271a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1271ac: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x1271acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x1271b0: 0x2ae40002  slti        $a0, $s7, 0x2
    ctx->pc = 0x1271b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1271b4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1271b8: 0x3442242e  ori         $v0, $v0, 0x242E
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9262);
    // 0x1271bc: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x1271bcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1271c0: 0x1480ff6b  bnez        $a0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x1271C0u;
    {
        const bool branch_taken_0x1271c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C0u;
        // 0x1271c4: 0xffc20008  sd          $v0, 0x8($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271c0) {
            ctx->pc = 0x126F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126f70;
        }
    }
    ctx->pc = 0x1271C8u;
    // 0x1271c8: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x1271c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1271cc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1271ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1271d0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1271d4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1271d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1271d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1271d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1271dc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1271dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1271e0: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1271e4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1271e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1271e8: 0x2610d650  addiu       $s0, $s0, -0x29B0
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956624));
    // 0x1271ec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1271ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1271f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1271f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1271f4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1271f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1271f8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x1271f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1271fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1271fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x127200: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x127200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x127204: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x127204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127208: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x127208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12720c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12720cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x127210: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x127210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x127214: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x127214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x127218: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12721c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12721cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x127220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x127220u;
    SET_GPR_U32(ctx, 31, 0x127228u);
    ctx->pc = 0x127224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127220u;
    // 0x127224: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x127220u, 0x127228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127228u;
label_127228:
    // 0x127228: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12722c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_127230:
    // 0x127230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127234: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x127238: 0x0  nop
    ctx->pc = 0x127238u;
    // NOP
    // 0x12723c: 0x0  nop
    ctx->pc = 0x12723cu;
    // NOP
    // 0x127240: 0x0  nop
    ctx->pc = 0x127240u;
    // NOP
    // 0x127244: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127244u;
    {
        const bool branch_taken_0x127244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127244) {
            ctx->pc = 0x127230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127230;
        }
    }
    ctx->pc = 0x12724Cu;
    // 0x12724c: 0x0  nop
    ctx->pc = 0x12724cu;
    // NOP
label_127250:
    // 0x127250: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x127250u;
    SET_GPR_U32(ctx, 31, 0x127258u);
    ctx->pc = 0x127254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127250u;
    // 0x127254: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x127250u, 0x127258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127258u;
label_127258:
    // 0x127258: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x127258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12725c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12725Cu;
    {
        const bool branch_taken_0x12725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x127260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12725Cu;
        // 0x127260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12725c) {
            ctx->pc = 0x127250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127250;
        }
    }
    ctx->pc = 0x127264u;
    // 0x127264: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x127264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x127268: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x127268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12726c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12726Cu;
    {
        const bool branch_taken_0x12726c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12726Cu;
        // 0x127270: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12726c) {
            ctx->pc = 0x127280u;
            goto label_127280;
        }
    }
    ctx->pc = 0x127274u;
    // 0x127274: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x127274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x127278: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x127278u;
    SET_GPR_U32(ctx, 31, 0x127280u);
    ctx->pc = 0x12727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127278u;
    // 0x12727c: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x127278u, 0x127280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127280u;
label_127280:
    // 0x127280: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x127280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x127284: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x127284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x127288: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12728c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x127290: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x127290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127294: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x127294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x127298: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x127298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12729c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12729cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1272a0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1272a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1272a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1272a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1272a8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1272a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1272ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1272acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1272b0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1272b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1272b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1272b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1272b8:
    // 0x1272b8: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x1272b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1272bc: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x1272bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1272c0: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x1272c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1272c4: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x1272c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1272c8: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x1272c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1272cc: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x1272ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1272d0: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x1272d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1272d4: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x1272d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1272d8: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x1272d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1272dc: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x1272dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1272e0: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x1272e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1272e4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1272e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1272e8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1272e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1272ec: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1272ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1272f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1272F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272F0u;
        // 0x1272f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272F8u;
}

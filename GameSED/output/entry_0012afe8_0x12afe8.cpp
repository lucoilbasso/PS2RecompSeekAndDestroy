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

// Function: entry_0012afe8
// Address: 0x12afe8 - 0x12b1e8
void entry_0012afe8_0x12afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012afe8_0x12afe8");
#endif

    switch (ctx->pc) {
        case 0x12b1c0u: goto label_12b1c0;
        default: break;
    }

    ctx->pc = 0x12afe8u;

    // 0x12afe8: 0x26030240  addiu       $v1, $s0, 0x240
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x12afec: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12aff0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x12aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12aff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12aff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12aff8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x12aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12affc: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x12affcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b000: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b004: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12b004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b008: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x12b008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12b00c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b010: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x12b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b018: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x12b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12b01c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x12b01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b020: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12b020u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x12b024: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12b024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b028: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x12b028u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x12b02c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12b02cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12b030: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12b030u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b034: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12b034u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12b038: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12b038u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12b03c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b040: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b044: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b048: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b04c: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x12b04cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b050: 0xd9650010  lqc2        $vf5, 0x10($t3)
    ctx->pc = 0x12b050u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x12b054: 0xd9660020  lqc2        $vf6, 0x20($t3)
    ctx->pc = 0x12b054u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x12b058: 0xd9670030  lqc2        $vf7, 0x30($t3)
    ctx->pc = 0x12b058u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x12b05c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12b05cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b060: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12b060u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b064: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12b064u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b068: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12b068u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b06c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b070: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b074: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b074u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b078: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b07c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12b07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b080: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12b080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b084: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12b084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b088: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12b088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12b08c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12b08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b090: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12b090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b094: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12b094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b098: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12b098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12b09c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12b09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0a0: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12b0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0a4: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12b0a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0a8: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12b0a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12b0ac: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b0b0: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12b0b4: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12b0b8: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12b0bc: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x12b0bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b0c0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b0c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0c4: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b0c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0c8: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b0c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b0cc: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b0ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b0d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b0d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b0d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0dc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b0dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b0e0: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x12b0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b0e4: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x12b0e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b0e8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0ec: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0f0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b0f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b0f4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b0f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b0f8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0fc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b100: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b104: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b108: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x12b108u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b10c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12b10cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12b110: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12b110u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b114: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12b114u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12b118: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12b118u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12b11c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b120: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b124: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b128: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b12c: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x12b12cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12b130: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x12b130u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x12b134: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x12b134u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x12b138: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x12b138u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x12b13c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12b13cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b140: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12b140u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b144: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12b144u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b148: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12b148u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b14c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b14cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b150: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b154: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b158: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b15c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12b15cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b160: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12b160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b164: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12b164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b168: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12b168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12b16c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12b16cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b170: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12b170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b174: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12b174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b178: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12b178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12b17c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12b17cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b180: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12b180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b184: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12b184u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b188: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12b188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12b18c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b190: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12b194: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12b198: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12b19c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12b19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b1a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b1a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12b1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12b1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12b1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1b0: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x12b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x12b1b4: 0x7faa0110  sq          $t2, 0x110($sp)
    ctx->pc = 0x12b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 10));
    // 0x12b1b8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x12B1B8u;
    SET_GPR_U32(ctx, 31, 0x12B1C0u);
    ctx->pc = 0x12B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1B8u;
    // 0x12b1bc: 0x7fab0120  sq          $t3, 0x120($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x12B1B8u, 0x12B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1C0u;
label_12b1c0:
    // 0x12b1c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1c4: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x12b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x12b1c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12b1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x12b1cc: 0x7bab0120  lq          $t3, 0x120($sp)
    ctx->pc = 0x12b1ccu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12b1d0: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x12b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x12b1d4: 0x7baa0110  lq          $t2, 0x110($sp)
    ctx->pc = 0x12b1d4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12b1d8: 0x7ba90100  lq          $t1, 0x100($sp)
    ctx->pc = 0x12b1d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12b1dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1e0: 0x62282b  sltu        $a1, $v1, $v0
    ctx->pc = 0x12b1e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12b1e4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x12b1e8u;
}

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

// Function: entry_0016e080
// Address: 0x16e080 - 0x16e0f4
void entry_0016e080_0x16e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e080_0x16e080");
#endif

    switch (ctx->pc) {
        case 0x16e088u: goto label_16e088;
        default: break;
    }

    ctx->pc = 0x16e080u;

    // 0x16e080: 0xc061422  jal         func_185088
    ctx->pc = 0x16E080u;
    SET_GPR_U32(ctx, 31, 0x16E088u);
    ctx->pc = 0x16E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E080u;
    // 0x16e084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E080u, 0x16E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E088u;
label_16e088:
    // 0x16e088: 0x260700e0  addiu       $a3, $s0, 0xE0
    ctx->pc = 0x16e088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x16e08c: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x16e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e090: 0x26460300  addiu       $a2, $s2, 0x300
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x16e094: 0xc78384dc  lwc1        $f3, -0x7B24($gp)
    ctx->pc = 0x16e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e098: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16e098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x16e09c: 0xc78284e0  lwc1        $f2, -0x7B20($gp)
    ctx->pc = 0x16e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e0a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e0a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16e0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16e0a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16e0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16e0ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e0b0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x16e0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16e0b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16e0b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e0b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16e0bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e0bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16e0c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e0c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16e0c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16e0c8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x16e0c8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e0cc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x16e0ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16e0d0: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x16e0d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16e0d4: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x16e0d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x16e0d8: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x16e0d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x16e0dc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16e0dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e0e0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16e0e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e0e4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16e0e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e0e8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16e0e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16e0ec: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x16e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16e0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16e0f4u;
}

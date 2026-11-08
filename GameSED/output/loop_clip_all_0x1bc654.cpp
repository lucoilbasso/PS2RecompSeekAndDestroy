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

// Function: loop_clip_all
// Address: 0x1bc654 - 0x1bc6b4
void loop_clip_all_0x1bc654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loop_clip_all_0x1bc654");
#endif

    ctx->pc = 0x1bc654u;

label_1bc654:
    // 0x1bc654: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1bc654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1bc658: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1bc658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1bc65c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1bc65cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1bc660: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1bc660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1bc664: 0x4bc84adb  vmulw.xyz   $vf11, $vf9, $vf8w
    ctx->pc = 0x1bc664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1bc668: 0x4bc8531b  vmulw.xyz   $vf12, $vf10, $vf8w
    ctx->pc = 0x1bc668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1bc66c: 0x4a0002ff  vnop
    ctx->pc = 0x1bc66cu;
    // NOP operation, no action needed for VU0
    // 0x1bc670: 0x4a0002ff  vnop
    ctx->pc = 0x1bc670u;
    // NOP operation, no action needed for VU0
    // 0x1bc674: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x1bc674u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x1bc678: 0x4bab42ec  vsub.xyw    $vf11, $vf8, $vf11
    ctx->pc = 0x1bc678u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1bc67c: 0x4ba8632c  vsub.xyw    $vf12, $vf12, $vf8
    ctx->pc = 0x1bc67cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1bc680: 0x4a2b4b3c  vmove.w     $vf11, $vf9
    ctx->pc = 0x1bc680u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
    // 0x1bc684: 0x4a2c533c  vmove.w     $vf12, $vf10
    ctx->pc = 0x1bc684u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
    // 0x1bc688: 0x4a0002ff  vnop
    ctx->pc = 0x1bc688u;
    // NOP operation, no action needed for VU0
    // 0x1bc68c: 0x20e70010  addi        $a3, $a3, 0x10
    ctx->pc = 0x1bc68cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bc690: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x1bc690u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bc694: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x1bc694u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1bc698: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x1bc698u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x1bc69c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1bc69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1bc6a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC6A0u;
    {
        const bool branch_taken_0x1bc6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6a0) {
            ctx->pc = 0x1BC6B4u;
            return;
        }
    }
    ctx->pc = 0x1BC6A8u;
    // 0x1bc6a8: 0x1408ffea  bne         $zero, $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BC6A8u;
    {
        const bool branch_taken_0x1bc6a8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        if (branch_taken_0x1bc6a8) {
            ctx->pc = 0x1BC654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc654;
        }
    }
    ctx->pc = 0x1BC6B0u;
    // 0x1bc6b0: 0x20020001  addi        $v0, $zero, 0x1
    ctx->pc = 0x1bc6b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    ctx->pc = 0x1bc6b4u;
}

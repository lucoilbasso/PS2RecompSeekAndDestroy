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

// Function: SnowSpriteCliping__FP9FVector32
// Address: 0x12c1d0 - 0x12c22c
void SnowSpriteCliping__FP9FVector32_0x12c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SnowSpriteCliping__FP9FVector32_0x12c1d0");
#endif

    ctx->pc = 0x12c1d0u;

    // 0x12c1d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12c1d4: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x12c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x12c1d8: 0xd88b0000  lqc2        $vf11, 0x0($a0)
    ctx->pc = 0x12c1d8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c1dc: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x12c1dcu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(FAST_READ128(0x21EC30u));
    // 0x12c1e0: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x12c1e0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x21EC40u));
    // 0x12c1e4: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x12c1e4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(FAST_READ128(0x21EC50u));
    // 0x12c1e8: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x12c1e8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x21EC60u));
    // 0x12c1ec: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x12c1ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12c1f0: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x12c1f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12c1f4: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x12c1f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12c1f8: 0x4bebfc0b  vmaddw.xyzw $vf16, $vf31, $vf11w
    ctx->pc = 0x12c1f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x12c1fc: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x12c1fcu;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x12c200: 0x4bd081ff  .word       0x4BD081FF                   # vclipw.xyz  $vf16, $vf16w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12c200u;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x12c204: 0x4a0002ff  vnop
    ctx->pc = 0x12c204u;
    // NOP operation, no action needed for VU0
    // 0x12c208: 0x4a0002ff  vnop
    ctx->pc = 0x12c208u;
    // NOP operation, no action needed for VU0
    // 0x12c20c: 0x4a0002ff  vnop
    ctx->pc = 0x12c20cu;
    // NOP operation, no action needed for VU0
    // 0x12c210: 0x4a0002ff  vnop
    ctx->pc = 0x12c210u;
    // NOP operation, no action needed for VU0
    // 0x12c214: 0x4a0002ff  vnop
    ctx->pc = 0x12c214u;
    // NOP operation, no action needed for VU0
    // 0x12c218: 0x4a0002ff  vnop
    ctx->pc = 0x12c218u;
    // NOP operation, no action needed for VU0
    // 0x12c21c: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x12c21cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x12c220: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x12c220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x12c224: 0x3e00008  jr          $ra
    ctx->pc = 0x12C224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C22Cu;
}

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

// Function: BUtilityLimitVector__FP9FVector32f
// Address: 0x19eee0 - 0x19ef2c
void BUtilityLimitVector__FP9FVector32f_0x19eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityLimitVector__FP9FVector32f_0x19eee0");
#endif

    ctx->pc = 0x19eee0u;

    // 0x19eee0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19eee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19eee4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19eee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19eee8: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x19eee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19eeec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19eeecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19eef0: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19eef0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19eef4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19eef4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19eef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19eef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19eefc: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x19eefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19ef00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ef00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ef04: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x19EF04u;
    {
        const bool branch_taken_0x19ef04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ef04) {
            ctx->pc = 0x19EF24u;
            goto label_19ef24;
        }
    }
    ctx->pc = 0x19EF0Cu;
    // 0x19ef0c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19ef0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19ef10: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x19ef10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19ef14: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19ef14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19ef18: 0x4a0003bf  vwaitq
    ctx->pc = 0x19ef18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19ef1c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19ef1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19ef20: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_19ef24:
    // 0x19ef24: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF2Cu;
}

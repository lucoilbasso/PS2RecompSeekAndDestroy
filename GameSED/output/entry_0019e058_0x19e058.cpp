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

// Function: entry_0019e058
// Address: 0x19e058 - 0x19e0ac
void entry_0019e058_0x19e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e058_0x19e058");
#endif

    ctx->pc = 0x19e058u;

    // 0x19e058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e05c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19e05cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e060: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x19E060u;
    {
        const bool branch_taken_0x19e060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E060u;
        // 0x19e064: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e060) {
            ctx->pc = 0x19E0ACu;
            return;
        }
    }
    ctx->pc = 0x19E068u;
    // 0x19e068: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19e068u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e06c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19e06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e070: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x19e070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e074: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19e074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e078: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19e078u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19e07c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19e07cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19e080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e084: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x19e084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19e088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19e088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e08c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19E08Cu;
    {
        const bool branch_taken_0x19e08c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E08Cu;
        // 0x19e090: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e08c) {
            ctx->pc = 0x19E0B0u;
            return;
        }
    }
    ctx->pc = 0x19E094u;
    // 0x19e094: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19e094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e098: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x19e098u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e09c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19e09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e0a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e0a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19e0a4: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19e0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e0a8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x19e0acu;
}

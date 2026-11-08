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

// Function: entry_0019e1a8
// Address: 0x19e1a8 - 0x19e1fc
void entry_0019e1a8_0x19e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e1a8_0x19e1a8");
#endif

    ctx->pc = 0x19e1a8u;

    // 0x19e1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e1ac: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19e1acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e1b0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x19E1B0u;
    {
        const bool branch_taken_0x19e1b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B0u;
        // 0x19e1b4: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1b0) {
            ctx->pc = 0x19E1FCu;
            return;
        }
    }
    ctx->pc = 0x19E1B8u;
    // 0x19e1b8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19e1b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e1bc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19e1bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e1c0: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x19e1c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e1c4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19e1c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e1c8: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19e1c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19e1cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19e1ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19e1d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e1d4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x19e1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19e1d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19e1d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e1dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19E1DCu;
    {
        const bool branch_taken_0x19e1dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1DCu;
        // 0x19e1e0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1dc) {
            ctx->pc = 0x19E200u;
            return;
        }
    }
    ctx->pc = 0x19E1E4u;
    // 0x19e1e4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19e1e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e1e8: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x19e1e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e1ec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19e1ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e1f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e1f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19e1f4: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19e1f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e1f8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x19e1fcu;
}

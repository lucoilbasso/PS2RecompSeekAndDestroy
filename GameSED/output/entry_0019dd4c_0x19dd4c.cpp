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

// Function: entry_0019dd4c
// Address: 0x19dd4c - 0x19dda0
void entry_0019dd4c_0x19dd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd4c_0x19dd4c");
#endif

    ctx->pc = 0x19dd4cu;

    // 0x19dd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19dd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd50: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19dd50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd54: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x19DD54u;
    {
        const bool branch_taken_0x19dd54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD54u;
        // 0x19dd58: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd54) {
            ctx->pc = 0x19DDA0u;
            return;
        }
    }
    ctx->pc = 0x19DD5Cu;
    // 0x19dd5c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19dd5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19dd60: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19dd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dd64: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x19dd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dd68: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19dd68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dd6c: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19dd6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19dd70: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19dd70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19dd74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19dd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dd78: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x19dd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19dd7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19dd7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x19DD80u;
    {
        const bool branch_taken_0x19dd80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd80) {
            ctx->pc = 0x19DDA0u;
            return;
        }
    }
    ctx->pc = 0x19DD88u;
    // 0x19dd88: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19dd88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19dd8c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x19dd8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19dd90: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19dd90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dd94: 0x4a0003bf  vwaitq
    ctx->pc = 0x19dd94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19dd98: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19dd98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dd9c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x19dda0u;
}

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

// Function: entry_00182dd0
// Address: 0x182dd0 - 0x182e34
void entry_00182dd0_0x182dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182dd0_0x182dd0");
#endif

    ctx->pc = 0x182dd0u;

    // 0x182dd0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x182dd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182dd4: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x182dd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182dd8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x182dd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182ddc: 0x4a421946  vsubz.z     $vf5, $vf3, $vf2z
    ctx->pc = 0x182ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x182de0: 0x4b6503bc  vdiv        $Q, $vf0w, $vf5z
    ctx->pc = 0x182de0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x182de4: 0x4b03119a  vmulz.x     $vf6, $vf2, $vf3z
    ctx->pc = 0x182de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x182de8: 0x4b0219da  vmulz.x     $vf7, $vf3, $vf2z
    ctx->pc = 0x182de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182dec: 0x4b073284  vsubx.x     $vf10, $vf6, $vf7x
    ctx->pc = 0x182decu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x182df0: 0x4a83121a  vmulz.y     $vf8, $vf2, $vf3z
    ctx->pc = 0x182df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x182df4: 0x4a821a5a  vmulz.y     $vf9, $vf3, $vf2z
    ctx->pc = 0x182df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x182df8: 0x4a8942c5  vsuby.y     $vf11, $vf8, $vf9y
    ctx->pc = 0x182df8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x182dfc: 0x4a0003bf  vwaitq
    ctx->pc = 0x182dfcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x182e00: 0x4b00511c  vmulq.x     $vf4, $vf10, $Q
    ctx->pc = 0x182e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x182e04: 0x4a80591c  vmulq.y     $vf4, $vf11, $Q
    ctx->pc = 0x182e04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x182e08: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x182e08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x182e0c: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x182e10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x182e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x182e14: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x182e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182e18: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x182e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e1c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x182E1Cu;
    {
        const bool branch_taken_0x182e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e1c) {
            ctx->pc = 0x182E50u;
            return;
        }
    }
    ctx->pc = 0x182E24u;
    // 0x182e24: 0xc7828588  lwc1        $f2, -0x7A78($gp)
    ctx->pc = 0x182e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182e28: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x182e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e2c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x182E2Cu;
    {
        const bool branch_taken_0x182e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e2c) {
            ctx->pc = 0x182E50u;
            return;
        }
    }
    ctx->pc = 0x182E34u;
}

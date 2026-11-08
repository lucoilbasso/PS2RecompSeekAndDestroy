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

// Function: entry_00181fa0
// Address: 0x181fa0 - 0x181fe8
void entry_00181fa0_0x181fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181fa0_0x181fa0");
#endif

    ctx->pc = 0x181fa0u;

    // 0x181fa0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x181fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181fa4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x181fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181fa8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x181fa8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181fac: 0x4a41112c  vsub.z      $vf4, $vf2, $vf1
    ctx->pc = 0x181facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181fb0: 0x4b6403bc  vdiv        $Q, $vf0w, $vf4z
    ctx->pc = 0x181fb0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181fb4: 0x4b0209be  vmulaz.x    $ACC, $vf1, $vf2z
    ctx->pc = 0x181fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181fb8: 0x4b01110e  vmsubz.x    $vf4, $vf2, $vf1z
    ctx->pc = 0x181fb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181fbc: 0x4a0003bf  vwaitq
    ctx->pc = 0x181fbcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181fc0: 0x4b0020dc  vmulq.x     $vf3, $vf4, $Q
    ctx->pc = 0x181fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x181fc4: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x181fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x181fc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x181fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181fcc: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x181fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181fd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x181FD0u;
    {
        const bool branch_taken_0x181fd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FD0u;
        // 0x181fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fd0) {
            ctx->pc = 0x181FE8u;
            return;
        }
    }
    ctx->pc = 0x181FD8u;
    // 0x181fd8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x181fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181fdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x181FDCu;
    {
        const bool branch_taken_0x181fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FDCu;
        // 0x181fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fdc) {
            ctx->pc = 0x181FE8u;
            return;
        }
    }
    ctx->pc = 0x181FE4u;
    // 0x181fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181fe8u;
}

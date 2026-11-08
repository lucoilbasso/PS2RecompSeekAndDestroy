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

// Function: S_InterWallCoordinate__FP17_WallHitCoordInfoP9FVector32N31
// Address: 0x1830b0 - 0x183120
void S_InterWallCoordinate__FP17_WallHitCoordInfoP9FVector32N31_0x1830b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_InterWallCoordinate__FP17_WallHitCoordInfoP9FVector32N31_0x1830b0");
#endif

    ctx->pc = 0x1830b0u;

    // 0x1830b0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1830b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1830b4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1830b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1830b8: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x1830b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1830bc: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x1830bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1830c0: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x1830c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1830c4: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x1830c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1830c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1830c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1830cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1830ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1830d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1830d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1830d4: 0xc781858c  lwc1        $f1, -0x7A74($gp)
    ctx->pc = 0x1830d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1830d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1830d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1830dc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1830DCu;
    {
        const bool branch_taken_0x1830dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1830E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830DCu;
        // 0x1830e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830dc) {
            ctx->pc = 0x183118u;
            goto label_183118;
        }
    }
    ctx->pc = 0x1830E4u;
    // 0x1830e4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1830e4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1830e8: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1830e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1830ec: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x1830ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1830f0: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1830f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1830f4: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x1830f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1830f8: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x1830f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1830fc: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x1830fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x183100: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x183100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x183104: 0x4a0003bf  vwaitq
    ctx->pc = 0x183104u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x183108: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x183108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18310c: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x18310cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x183110: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x183110u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x183114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183118:
    // 0x183118: 0x3e00008  jr          $ra
    ctx->pc = 0x183118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183120u;
}

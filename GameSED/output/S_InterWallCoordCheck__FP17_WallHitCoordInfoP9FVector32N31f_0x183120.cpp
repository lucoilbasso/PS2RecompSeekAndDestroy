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

// Function: S_InterWallCoordCheck__FP17_WallHitCoordInfoP9FVector32N31f
// Address: 0x183120 - 0x1831e0
void S_InterWallCoordCheck__FP17_WallHitCoordInfoP9FVector32N31f_0x183120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_InterWallCoordCheck__FP17_WallHitCoordInfoP9FVector32N31f_0x183120");
#endif

    ctx->pc = 0x183120u;

    // 0x183120: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x183120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183124: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x183124u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183128: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x183128u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18312c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x18312cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183130: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x183130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x183134: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x183134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x183138: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x183138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18313c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18313cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x183140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183144: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x183144u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x183148: 0xc7818590  lwc1        $f1, -0x7A70($gp)
    ctx->pc = 0x183148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18314c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18314cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183150: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x183150u;
    {
        const bool branch_taken_0x183150 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183150u;
        // 0x183154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183150) {
            ctx->pc = 0x18318Cu;
            goto label_18318c;
        }
    }
    ctx->pc = 0x183158u;
    // 0x183158: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x183158u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18315c: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x18315cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183160: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x183160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x183164: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x183164u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183168: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x183168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18316c: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x18316cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x183170: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x183170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x183174: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x183174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x183178: 0x4a0003bf  vwaitq
    ctx->pc = 0x183178u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18317c: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x18317cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x183180: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x183180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x183184: 0xf8680000  sqc2        $vf8, 0x0($v1)
    ctx->pc = 0x183184u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x183188: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18318c:
    // 0x18318c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x183190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18318Cu;
        // 0x183190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18318c) {
            ctx->pc = 0x1831D8u;
            goto label_1831d8;
        }
    }
    ctx->pc = 0x183194u;
    // 0x183194: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183198: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x183198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x18319c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1831a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1831a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1831A4u;
    {
        const bool branch_taken_0x1831a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1831a4) {
            ctx->pc = 0x1831BCu;
            goto label_1831bc;
        }
    }
    ctx->pc = 0x1831ACu;
    // 0x1831ac: 0xc7808594  lwc1        $f0, -0x7A6C($gp)
    ctx->pc = 0x1831acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1831b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1831b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831b4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1831B4u;
    {
        const bool branch_taken_0x1831b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1831b4) {
            ctx->pc = 0x1831B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1831B4u;
            // 0x1831b8: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1831C8u;
            goto label_1831c8;
        }
    }
    ctx->pc = 0x1831BCu;
label_1831bc:
    // 0x1831bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1831BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1831C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831BCu;
        // 0x1831c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1831C4u;
    // 0x1831c4: 0x0  nop
    ctx->pc = 0x1831c4u;
    // NOP
label_1831c8:
    // 0x1831c8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1831c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1831CCu;
    {
        const bool branch_taken_0x1831cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1831D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831CCu;
        // 0x1831d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831cc) {
            ctx->pc = 0x1831D8u;
            goto label_1831d8;
        }
    }
    ctx->pc = 0x1831D4u;
    // 0x1831d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1831d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1831d8:
    // 0x1831d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1831D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1831E0u;
}

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

// Function: S_InterWallCrossCheck__FP17_WallHitCoordInfoN20
// Address: 0x1831e0 - 0x1832a4
void S_InterWallCrossCheck__FP17_WallHitCoordInfoN20_0x1831e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_InterWallCrossCheck__FP17_WallHitCoordInfoN20_0x1831e0");
#endif

    ctx->pc = 0x1831e0u;

    // 0x1831e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1831e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1831e4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1831e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1831e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1831e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1831ECu;
    {
        const bool branch_taken_0x1831ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1831ec) {
            ctx->pc = 0x183204u;
            goto label_183204;
        }
    }
    ctx->pc = 0x1831F4u;
    // 0x1831f4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1831f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1831f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1831f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1831FCu;
    {
        const bool branch_taken_0x1831fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1831fc) {
            ctx->pc = 0x183220u;
            goto label_183220;
        }
    }
    ctx->pc = 0x183204u;
label_183204:
    // 0x183204: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x183204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183208: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x183208u;
    {
        const bool branch_taken_0x183208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183208) {
            ctx->pc = 0x18320Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183208u;
            // 0x18320c: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x183228u;
            goto label_183228;
        }
    }
    ctx->pc = 0x183210u;
    // 0x183210: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x183210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x183214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183218: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x183218u;
    {
        const bool branch_taken_0x183218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183218) {
            ctx->pc = 0x18321Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183218u;
            // 0x18321c: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18322Cu;
            goto label_18322c;
        }
    }
    ctx->pc = 0x183220u;
label_183220:
    // 0x183220: 0x3e00008  jr          $ra
    ctx->pc = 0x183220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183220u;
        // 0x183224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183228u;
label_183228:
    // 0x183228: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x183228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18322c:
    // 0x18322c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18322cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183230: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x183230u;
    {
        const bool branch_taken_0x183230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183230u;
        // 0x183234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183230) {
            ctx->pc = 0x183248u;
            goto label_183248;
        }
    }
    ctx->pc = 0x183238u;
    // 0x183238: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x183238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18323c: 0x3e00008  jr          $ra
    ctx->pc = 0x18323Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18323Cu;
        // 0x183240: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18323Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183244u;
    // 0x183244: 0x0  nop
    ctx->pc = 0x183244u;
    // NOP
label_183248:
    // 0x183248: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x183248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18324c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18324cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183250: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x183250u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x183254: 0x4a41112c  vsub.z      $vf4, $vf2, $vf1
    ctx->pc = 0x183254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x183258: 0x4b6403bc  vdiv        $Q, $vf0w, $vf4z
    ctx->pc = 0x183258u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18325c: 0x4b0209be  vmulaz.x    $ACC, $vf1, $vf2z
    ctx->pc = 0x18325cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x183260: 0x4b01110e  vmsubz.x    $vf4, $vf2, $vf1z
    ctx->pc = 0x183260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x183264: 0x4a0003bf  vwaitq
    ctx->pc = 0x183264u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x183268: 0x4b0020dc  vmulq.x     $vf3, $vf4, $Q
    ctx->pc = 0x183268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18326c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x18326cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x183270: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x183270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x183274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183278: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x183278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18327c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18327cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183280: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x183280u;
    {
        const bool branch_taken_0x183280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183280u;
        // 0x183284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183280) {
            ctx->pc = 0x18329Cu;
            goto label_18329c;
        }
    }
    ctx->pc = 0x183288u;
    // 0x183288: 0xc7808598  lwc1        $f0, -0x7A68($gp)
    ctx->pc = 0x183288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18328c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18328cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183290: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x183290u;
    {
        const bool branch_taken_0x183290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183290u;
        // 0x183294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183290) {
            ctx->pc = 0x18329Cu;
            goto label_18329c;
        }
    }
    ctx->pc = 0x183298u;
    // 0x183298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18329c:
    // 0x18329c: 0x3e00008  jr          $ra
    ctx->pc = 0x18329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18329Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832A4u;
}

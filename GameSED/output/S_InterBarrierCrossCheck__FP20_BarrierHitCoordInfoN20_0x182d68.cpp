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

// Function: S_InterBarrierCrossCheck__FP20_BarrierHitCoordInfoN20
// Address: 0x182d68 - 0x182e70
void S_InterBarrierCrossCheck__FP20_BarrierHitCoordInfoN20_0x182d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_InterBarrierCrossCheck__FP20_BarrierHitCoordInfoN20_0x182d68");
#endif

    ctx->pc = 0x182d68u;

    // 0x182d68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x182d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182d6c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x182d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182d70: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x182d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x182D74u;
    {
        const bool branch_taken_0x182d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d74) {
            ctx->pc = 0x182D8Cu;
            goto label_182d8c;
        }
    }
    ctx->pc = 0x182D7Cu;
    // 0x182d7c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x182d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d84: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x182D84u;
    {
        const bool branch_taken_0x182d84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d84) {
            ctx->pc = 0x182E50u;
            goto label_182e50;
        }
    }
    ctx->pc = 0x182D8Cu;
label_182d8c:
    // 0x182d8c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x182d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d90: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x182D90u;
    {
        const bool branch_taken_0x182d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d90) {
            ctx->pc = 0x182D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182D90u;
            // 0x182d94: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x182DACu;
            goto label_182dac;
        }
    }
    ctx->pc = 0x182D98u;
    // 0x182d98: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x182d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182da0: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x182DA0u;
    {
        const bool branch_taken_0x182da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182da0) {
            ctx->pc = 0x182E50u;
            goto label_182e50;
        }
    }
    ctx->pc = 0x182DA8u;
    // 0x182da8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x182da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182dac:
    // 0x182dac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x182dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182db0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x182db0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182db4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x182DB4u;
    {
        const bool branch_taken_0x182db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x182DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DB4u;
        // 0x182db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182db4) {
            ctx->pc = 0x182DD0u;
            goto label_182dd0;
        }
    }
    ctx->pc = 0x182DBCu;
    // 0x182dbc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x182dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182dc0: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x182dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x182dc4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x182dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x182DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DC8u;
        // 0x182dcc: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182DD0u;
label_182dd0:
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
            goto label_182e50;
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
            goto label_182e50;
        }
    }
    ctx->pc = 0x182E34u;
    // 0x182e34: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x182e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e38: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x182e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e3c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x182E3Cu;
    {
        const bool branch_taken_0x182e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e3c) {
            ctx->pc = 0x182E50u;
            goto label_182e50;
        }
    }
    ctx->pc = 0x182E44u;
    // 0x182e44: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e48: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x182E48u;
    {
        const bool branch_taken_0x182e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e48) {
            ctx->pc = 0x182E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182E48u;
            // 0x182e4c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182E58u;
            goto label_182e58;
        }
    }
    ctx->pc = 0x182E50u;
label_182e50:
    // 0x182e50: 0x3e00008  jr          $ra
    ctx->pc = 0x182E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E50u;
        // 0x182e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182E58u;
label_182e58:
    // 0x182e58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e5c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x182E5Cu;
    {
        const bool branch_taken_0x182e5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E5Cu;
        // 0x182e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e5c) {
            ctx->pc = 0x182E68u;
            goto label_182e68;
        }
    }
    ctx->pc = 0x182E64u;
    // 0x182e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182e68:
    // 0x182e68: 0x3e00008  jr          $ra
    ctx->pc = 0x182E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182E70u;
}

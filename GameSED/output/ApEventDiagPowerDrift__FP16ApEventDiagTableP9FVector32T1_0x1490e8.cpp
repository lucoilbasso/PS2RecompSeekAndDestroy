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

// Function: ApEventDiagPowerDrift__FP16ApEventDiagTableP9FVector32T1
// Address: 0x1490e8 - 0x149170
void ApEventDiagPowerDrift__FP16ApEventDiagTableP9FVector32T1_0x1490e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventDiagPowerDrift__FP16ApEventDiagTableP9FVector32T1_0x1490e8");
#endif

    ctx->pc = 0x1490e8u;

    // 0x1490e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1490e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1490ec: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x1490ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1490f0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1490f4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1490f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1490f8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1490f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1490fc: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1490fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149100: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x149100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x149104: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x149104u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149108: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x149108u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14910c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x14910cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x149110: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x149110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x149114: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x149114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x149118: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x149118u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14911c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149124: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x149124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149128: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x149128u;
    {
        const bool branch_taken_0x149128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149128u;
        // 0x14912c: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149128) {
            ctx->pc = 0x149164u;
            goto label_149164;
        }
    }
    ctx->pc = 0x149130u;
    // 0x149130: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x149130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x149134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x149138: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x149138u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x14913c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14913cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x149140: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x149140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x149144: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x149144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x149148: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x149148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14914c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x14914cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149150: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x149150u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149154: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x149154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149158: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x149158u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14915c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14915cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149160: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x149160u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_149164:
    // 0x149164: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x149164u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x149168: 0x3e00008  jr          $ra
    ctx->pc = 0x149168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149168u;
        // 0x14916c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149170u;
}

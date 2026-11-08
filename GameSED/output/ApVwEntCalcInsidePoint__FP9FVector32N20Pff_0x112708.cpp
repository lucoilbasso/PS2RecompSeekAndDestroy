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

// Function: ApVwEntCalcInsidePoint__FP9FVector32N20Pff
// Address: 0x112708 - 0x11280c
void ApVwEntCalcInsidePoint__FP9FVector32N20Pff_0x112708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntCalcInsidePoint__FP9FVector32N20Pff_0x112708");
#endif

    ctx->pc = 0x112708u;

    // 0x112708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11270c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x11270cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112710: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x112710u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112714: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x112714u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x112718: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x112718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11271c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x11271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112720: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x112720u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x112724: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x112724u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112728: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x112728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11272c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x11272cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x112730: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x112730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x112734: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x112734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x112738: 0x46066032  c.eq.s      $f12, $f6
    ctx->pc = 0x112738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11273c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x11273Cu;
    {
        const bool branch_taken_0x11273c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x112740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11273Cu;
        // 0x112740: 0xc7a80014  lwc1        $f8, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11273c) {
            ctx->pc = 0x11274Cu;
            goto label_11274c;
        }
    }
    ctx->pc = 0x112744u;
    // 0x112744: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x112744u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x112748: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x112748u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_11274c:
    // 0x11274c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11274cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112750: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x112750u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112754: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x112754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x112758: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x112758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11275c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11275cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x112760: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x112760u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x112764: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x112764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x112768: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x112768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11276c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11276cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112770: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x112770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112774: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x112774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x112778: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x112778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11277c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x11277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x112780: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x112780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x112784: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x112784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x112788: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x112788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11278c: 0x46020900  add.s       $f4, $f1, $f2
    ctx->pc = 0x11278cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x112790: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x112790u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112794: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x112794u;
    {
        const bool branch_taken_0x112794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112794) {
            ctx->pc = 0x112804u;
            goto label_112804;
        }
    }
    ctx->pc = 0x11279Cu;
    // 0x11279c: 0x0  nop
    ctx->pc = 0x11279cu;
    // NOP
    // 0x1127a0: 0x0  nop
    ctx->pc = 0x1127a0u;
    // NOP
    // 0x1127a4: 0x460429c3  div.s       $f7, $f5, $f4
    ctx->pc = 0x1127a4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x1127a8: 0x46074842  mul.s       $f1, $f9, $f7
    ctx->pc = 0x1127a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x1127ac: 0x46080881  sub.s       $f2, $f1, $f8
    ctx->pc = 0x1127acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x1127b0: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1127b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1127b4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1127B4u;
    {
        const bool branch_taken_0x1127b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1127b4) {
            ctx->pc = 0x112804u;
            goto label_112804;
        }
    }
    ctx->pc = 0x1127BCu;
    // 0x1127bc: 0x46006047  neg.s       $f1, $f12
    ctx->pc = 0x1127bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
    // 0x1127c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1127c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1127c4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1127C4u;
    {
        const bool branch_taken_0x1127c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127C4u;
        // 0x1127c8: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127c4) {
            ctx->pc = 0x112804u;
            goto label_112804;
        }
    }
    ctx->pc = 0x1127CCu;
    // 0x1127cc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1127ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1127d0: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x1127d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1127d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1127d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1127d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1127d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1127dc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1127dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1127e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1127e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1127e4: 0x0  nop
    ctx->pc = 0x1127e4u;
    // NOP
    // 0x1127e8: 0x0  nop
    ctx->pc = 0x1127e8u;
    // NOP
    // 0x1127ec: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x1127ecu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x1127f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1127f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1127f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1127f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1127f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1127f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1127fc: 0x46000004  c1          0x4
    ctx->pc = 0x1127fcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x112800: 0xe4e70000  swc1        $f7, 0x0($a3)
    ctx->pc = 0x112800u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_112804:
    // 0x112804: 0x3e00008  jr          $ra
    ctx->pc = 0x112804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112804u;
        // 0x112808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11280Cu;
}

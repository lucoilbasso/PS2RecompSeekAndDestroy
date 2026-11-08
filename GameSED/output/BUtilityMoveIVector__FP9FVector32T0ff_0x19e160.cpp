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

// Function: BUtilityMoveIVector__FP9FVector32T0ff
// Address: 0x19e160 - 0x19e320
void BUtilityMoveIVector__FP9FVector32T0ff_0x19e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveIVector__FP9FVector32T0ff_0x19e160");
#endif

    ctx->pc = 0x19e160u;

    // 0x19e160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e164: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19e164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e168: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x19e168u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e16c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19e16cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e170: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19e170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e178: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19e178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e17c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19E17Cu;
    {
        const bool branch_taken_0x19e17c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E17Cu;
        // 0x19e180: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e17c) {
            ctx->pc = 0x19E1A0u;
            goto label_19e1a0;
        }
    }
    ctx->pc = 0x19E184u;
    // 0x19e184: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19e184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e188: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x19e188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e18c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19e18cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e190: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19e190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e194: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19e194u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19e198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E198u;
    {
        const bool branch_taken_0x19e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e198) {
            ctx->pc = 0x19E1A8u;
            goto label_19e1a8;
        }
    }
    ctx->pc = 0x19E1A0u;
label_19e1a0:
    // 0x19e1a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19e1a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e1a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_19e1a8:
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
            goto label_19e1fc;
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
            goto label_19e200;
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
label_19e1fc:
    // 0x19e1fc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e200:
    // 0x19e200: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19e200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19e204: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e208: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E208u;
    {
        const bool branch_taken_0x19e208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E208u;
        // 0x19e20c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e208) {
            ctx->pc = 0x19E228u;
            goto label_19e228;
        }
    }
    ctx->pc = 0x19E210u;
    // 0x19e210: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e21c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19e21cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x19e220: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19e220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e224: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e228:
    // 0x19e228: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19e228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e22c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E22Cu;
    {
        const bool branch_taken_0x19e22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E22Cu;
        // 0x19e230: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e22c) {
            ctx->pc = 0x19E24Cu;
            goto label_19e24c;
        }
    }
    ctx->pc = 0x19E234u;
    // 0x19e234: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e238: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19e238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19e23c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e240: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x19e240u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x19e244: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19e244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e248: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e24c:
    // 0x19e24c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e250: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E250u;
    {
        const bool branch_taken_0x19e250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E250u;
        // 0x19e254: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e250) {
            ctx->pc = 0x19E270u;
            goto label_19e270;
        }
    }
    ctx->pc = 0x19E258u;
    // 0x19e258: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x19e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e25c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e264: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19e264u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x19e268: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e26c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e270:
    // 0x19e270: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19e270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e274: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E274u;
    {
        const bool branch_taken_0x19e274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E274u;
        // 0x19e278: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e274) {
            ctx->pc = 0x19E294u;
            goto label_19e294;
        }
    }
    ctx->pc = 0x19E27Cu;
    // 0x19e27c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x19e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e280: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19e284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e288: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x19e288u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x19e28c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19e28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e290: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e294:
    // 0x19e294: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e298: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E298u;
    {
        const bool branch_taken_0x19e298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E298u;
        // 0x19e29c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e298) {
            ctx->pc = 0x19E2B8u;
            goto label_19e2b8;
        }
    }
    ctx->pc = 0x19E2A0u;
    // 0x19e2a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e2a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e2a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e2ac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19e2acu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x19e2b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e2b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e2b8:
    // 0x19e2b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19e2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e2bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E2BCu;
    {
        const bool branch_taken_0x19e2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2BCu;
        // 0x19e2c0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2bc) {
            ctx->pc = 0x19E2DCu;
            goto label_19e2dc;
        }
    }
    ctx->pc = 0x19E2C4u;
    // 0x19e2c4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e2c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19e2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19e2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e2d0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x19e2d0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x19e2d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e2d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19e2dc:
    // 0x19e2dc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e2e0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x19e2e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e2e4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19e2e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e2e8: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e2ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19e2ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e2f0: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x19e2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e2f4: 0x4a0002ff  vnop
    ctx->pc = 0x19e2f4u;
    // NOP operation, no action needed for VU0
    // 0x19e2f8: 0x4a0002ff  vnop
    ctx->pc = 0x19e2f8u;
    // NOP operation, no action needed for VU0
    // 0x19e2fc: 0x4a0002ff  vnop
    ctx->pc = 0x19e2fcu;
    // NOP operation, no action needed for VU0
    // 0x19e300: 0x4a0002ff  vnop
    ctx->pc = 0x19e300u;
    // NOP operation, no action needed for VU0
    // 0x19e304: 0x4a0002ff  vnop
    ctx->pc = 0x19e304u;
    // NOP operation, no action needed for VU0
    // 0x19e308: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x19e308u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x19e30c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x19e30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x19e310: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x19e310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x19e314: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19e314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19e318: 0x3e00008  jr          $ra
    ctx->pc = 0x19E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E318u;
        // 0x19e31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E320u;
}

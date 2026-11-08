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

// Function: BUtilityMoveFVector__FP9FVector32T0ff
// Address: 0x19e010 - 0x19e160
void BUtilityMoveFVector__FP9FVector32T0ff_0x19e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveFVector__FP9FVector32T0ff_0x19e010");
#endif

    ctx->pc = 0x19e010u;

    // 0x19e010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e014: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19e014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e018: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x19e018u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e01c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19e01cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e020: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e028: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19e028u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e02c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19E02Cu;
    {
        const bool branch_taken_0x19e02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E02Cu;
        // 0x19e030: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e02c) {
            ctx->pc = 0x19E050u;
            goto label_19e050;
        }
    }
    ctx->pc = 0x19E034u;
    // 0x19e034: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19e034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e038: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x19e038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e03c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19e03cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e040: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19e040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e044: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19e044u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19e048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E048u;
    {
        const bool branch_taken_0x19e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e048) {
            ctx->pc = 0x19E058u;
            goto label_19e058;
        }
    }
    ctx->pc = 0x19E050u;
label_19e050:
    // 0x19e050: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19e050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e054: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19e054u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_19e058:
    // 0x19e058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e05c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19e05cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e060: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x19E060u;
    {
        const bool branch_taken_0x19e060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E060u;
        // 0x19e064: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e060) {
            ctx->pc = 0x19E0ACu;
            goto label_19e0ac;
        }
    }
    ctx->pc = 0x19E068u;
    // 0x19e068: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19e068u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e06c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19e06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e070: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x19e070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e074: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19e074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e078: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19e078u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19e07c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19e07cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19e080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e084: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x19e084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19e088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19e088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e08c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19E08Cu;
    {
        const bool branch_taken_0x19e08c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E08Cu;
        // 0x19e090: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e08c) {
            ctx->pc = 0x19E0B0u;
            goto label_19e0b0;
        }
    }
    ctx->pc = 0x19E094u;
    // 0x19e094: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19e094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e098: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x19e098u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e09c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19e09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e0a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e0a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19e0a4: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19e0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e0a8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_19e0ac:
    // 0x19e0ac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x19e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e0b0:
    // 0x19e0b0: 0xc780860c  lwc1        $f0, -0x79F4($gp)
    ctx->pc = 0x19e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0b8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x19E0B8u;
    {
        const bool branch_taken_0x19e0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0b8) {
            ctx->pc = 0x19E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0B8u;
            // 0x19e0bc: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0D8u;
            goto label_19e0d8;
        }
    }
    ctx->pc = 0x19E0C0u;
    // 0x19e0c0: 0xc7808610  lwc1        $f0, -0x79F0($gp)
    ctx->pc = 0x19e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19E0C8u;
    {
        const bool branch_taken_0x19e0c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0c8) {
            ctx->pc = 0x19E0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0C8u;
            // 0x19e0cc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0D0u;
            goto label_19e0d0;
        }
    }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e0d4: 0xc7808614  lwc1        $f0, -0x79EC($gp)
    ctx->pc = 0x19e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e0d8:
    // 0x19e0d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0dc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x19E0DCu;
    {
        const bool branch_taken_0x19e0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0dc) {
            ctx->pc = 0x19E0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0DCu;
            // 0x19e0e0: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0F8u;
            goto label_19e0f8;
        }
    }
    ctx->pc = 0x19E0E4u;
    // 0x19e0e4: 0xc7808618  lwc1        $f0, -0x79E8($gp)
    ctx->pc = 0x19e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19E0ECu;
    {
        const bool branch_taken_0x19e0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0ec) {
            ctx->pc = 0x19E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0ECu;
            // 0x19e0f0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0F4u;
            goto label_19e0f4;
        }
    }
    ctx->pc = 0x19E0F4u;
label_19e0f4:
    // 0x19e0f4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x19e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e0f8:
    // 0x19e0f8: 0xc780861c  lwc1        $f0, -0x79E4($gp)
    ctx->pc = 0x19e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e100: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19E100u;
    {
        const bool branch_taken_0x19e100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E100u;
        // 0x19e104: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e100) {
            ctx->pc = 0x19E11Cu;
            goto label_19e11c;
        }
    }
    ctx->pc = 0x19E108u;
    // 0x19e108: 0xc7808620  lwc1        $f0, -0x79E0($gp)
    ctx->pc = 0x19e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e10c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e110: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19E110u;
    {
        const bool branch_taken_0x19e110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e110) {
            ctx->pc = 0x19E114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E110u;
            // 0x19e114: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E11Cu;
            goto label_19e11c;
        }
    }
    ctx->pc = 0x19E118u;
    // 0x19e118: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19e11c:
    // 0x19e11c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e11cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e120: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x19e120u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e124: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19e124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e128: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e128u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e12c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19e12cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e130: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x19e130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e134: 0x4a0002ff  vnop
    ctx->pc = 0x19e134u;
    // NOP operation, no action needed for VU0
    // 0x19e138: 0x4a0002ff  vnop
    ctx->pc = 0x19e138u;
    // NOP operation, no action needed for VU0
    // 0x19e13c: 0x4a0002ff  vnop
    ctx->pc = 0x19e13cu;
    // NOP operation, no action needed for VU0
    // 0x19e140: 0x4a0002ff  vnop
    ctx->pc = 0x19e140u;
    // NOP operation, no action needed for VU0
    // 0x19e144: 0x4a0002ff  vnop
    ctx->pc = 0x19e144u;
    // NOP operation, no action needed for VU0
    // 0x19e148: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x19e148u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x19e14c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x19e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x19e150: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x19e150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x19e154: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19e154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19e158: 0x3e00008  jr          $ra
    ctx->pc = 0x19E158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E158u;
        // 0x19e15c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E160u;
}

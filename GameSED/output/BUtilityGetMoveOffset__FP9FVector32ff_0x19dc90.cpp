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

// Function: BUtilityGetMoveOffset__FP9FVector32ff
// Address: 0x19dc90 - 0x19ddd0
void BUtilityGetMoveOffset__FP9FVector32ff_0x19dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityGetMoveOffset__FP9FVector32ff_0x19dc90");
#endif

    ctx->pc = 0x19dc90u;

    // 0x19dc90: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19dc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19dc94: 0x46036832  c.eq.s      $f13, $f3
    ctx->pc = 0x19dc94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc98: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x19DC98u;
    {
        const bool branch_taken_0x19dc98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc98) {
            ctx->pc = 0x19DD4Cu;
            goto label_19dd4c;
        }
    }
    ctx->pc = 0x19DCA0u;
    // 0x19dca0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x19dca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dca4: 0xc78085f4  lwc1        $f0, -0x7A0C($gp)
    ctx->pc = 0x19dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dca8: 0x460d1042  mul.s       $f1, $f2, $f13
    ctx->pc = 0x19dca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x19dcac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19dcacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dcb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DCB0u;
    {
        const bool branch_taken_0x19dcb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dcb0) {
            ctx->pc = 0x19DCC8u;
            goto label_19dcc8;
        }
    }
    ctx->pc = 0x19DCB8u;
    // 0x19dcb8: 0xc78085f8  lwc1        $f0, -0x7A08($gp)
    ctx->pc = 0x19dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19dcbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dcc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DCC0u;
    {
        const bool branch_taken_0x19dcc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dcc0) {
            ctx->pc = 0x19DCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DCC0u;
            // 0x19dcc4: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DCC8u;
            goto label_19dcc8;
        }
    }
    ctx->pc = 0x19DCC8u;
label_19dcc8:
    // 0x19dcc8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dccc: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dcccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dcd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DCD0u;
    {
        const bool branch_taken_0x19dcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dcd0) {
            ctx->pc = 0x19DCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DCD0u;
            // 0x19dcd4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DCD8u;
            goto label_19dcd8;
        }
    }
    ctx->pc = 0x19DCD8u;
label_19dcd8:
    // 0x19dcd8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x19dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dcdc: 0xc78085fc  lwc1        $f0, -0x7A04($gp)
    ctx->pc = 0x19dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dce0: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x19dce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x19dce4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19dce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dce8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DCE8u;
    {
        const bool branch_taken_0x19dce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCE8u;
        // 0x19dcec: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dce8) {
            ctx->pc = 0x19DD00u;
            goto label_19dd00;
        }
    }
    ctx->pc = 0x19DCF0u;
    // 0x19dcf0: 0xc7808600  lwc1        $f0, -0x7A00($gp)
    ctx->pc = 0x19dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcf4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19dcf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dcf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DCF8u;
    {
        const bool branch_taken_0x19dcf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dcf8) {
            ctx->pc = 0x19DCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DCF8u;
            // 0x19dcfc: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD00u;
            goto label_19dd00;
        }
    }
    ctx->pc = 0x19DD00u;
label_19dd00:
    // 0x19dd00: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dd04: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x19dd04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DD08u;
    {
        const bool branch_taken_0x19dd08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd08) {
            ctx->pc = 0x19DD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DD08u;
            // 0x19dd0c: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD10u;
            goto label_19dd10;
        }
    }
    ctx->pc = 0x19DD10u;
label_19dd10:
    // 0x19dd10: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x19dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dd14: 0xc7808604  lwc1        $f0, -0x79FC($gp)
    ctx->pc = 0x19dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dd18: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x19dd18u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x19dd1c: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x19dd1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DD20u;
    {
        const bool branch_taken_0x19dd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD20u;
        // 0x19dd24: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd20) {
            ctx->pc = 0x19DD38u;
            goto label_19dd38;
        }
    }
    ctx->pc = 0x19DD28u;
    // 0x19dd28: 0xc7808608  lwc1        $f0, -0x79F8($gp)
    ctx->pc = 0x19dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dd2c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x19dd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DD30u;
    {
        const bool branch_taken_0x19dd30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd30) {
            ctx->pc = 0x19DD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DD30u;
            // 0x19dd34: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD38u;
            goto label_19dd38;
        }
    }
    ctx->pc = 0x19DD38u;
label_19dd38:
    // 0x19dd38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19dd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd3c: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19dd3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DD40u;
    {
        const bool branch_taken_0x19dd40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd40) {
            ctx->pc = 0x19DD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DD40u;
            // 0x19dd44: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD48u;
            goto label_19dd48;
        }
    }
    ctx->pc = 0x19DD48u;
label_19dd48:
    // 0x19dd48: 0xe48d0008  swc1        $f13, 0x8($a0)
    ctx->pc = 0x19dd48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_19dd4c:
    // 0x19dd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19dd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd50: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19dd50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd54: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x19DD54u;
    {
        const bool branch_taken_0x19dd54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD54u;
        // 0x19dd58: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd54) {
            ctx->pc = 0x19DDA0u;
            goto label_19dda0;
        }
    }
    ctx->pc = 0x19DD5Cu;
    // 0x19dd5c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19dd5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19dd60: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19dd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dd64: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x19dd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dd68: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19dd68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dd6c: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19dd6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19dd70: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19dd70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19dd74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19dd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dd78: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x19dd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19dd7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19dd7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x19DD80u;
    {
        const bool branch_taken_0x19dd80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd80) {
            ctx->pc = 0x19DDA0u;
            goto label_19dda0;
        }
    }
    ctx->pc = 0x19DD88u;
    // 0x19dd88: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19dd88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19dd8c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x19dd8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19dd90: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19dd90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dd94: 0x4a0003bf  vwaitq
    ctx->pc = 0x19dd94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19dd98: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19dd98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dd9c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_19dda0:
    // 0x19dda0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x19dda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19dda4: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x19dda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19dda8: 0x4a0002ff  vnop
    ctx->pc = 0x19dda8u;
    // NOP operation, no action needed for VU0
    // 0x19ddac: 0x4a0002ff  vnop
    ctx->pc = 0x19ddacu;
    // NOP operation, no action needed for VU0
    // 0x19ddb0: 0x4a0002ff  vnop
    ctx->pc = 0x19ddb0u;
    // NOP operation, no action needed for VU0
    // 0x19ddb4: 0x4a0002ff  vnop
    ctx->pc = 0x19ddb4u;
    // NOP operation, no action needed for VU0
    // 0x19ddb8: 0x4a0002ff  vnop
    ctx->pc = 0x19ddb8u;
    // NOP operation, no action needed for VU0
    // 0x19ddbc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x19ddbcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x19ddc0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x19ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x19ddc4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x19ddc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x19ddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDC8u;
        // 0x19ddcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DDD0u;
}

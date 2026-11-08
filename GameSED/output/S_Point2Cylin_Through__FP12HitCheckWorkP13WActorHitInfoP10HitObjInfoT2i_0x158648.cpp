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

// Function: S_Point2Cylin_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i
// Address: 0x158648 - 0x15890c
void S_Point2Cylin_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x158648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Cylin_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x158648");
#endif

    ctx->pc = 0x158648u;

    // 0x158648: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x158648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15864c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x15864cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158650: 0x25230020  addiu       $v1, $t1, 0x20
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x158654: 0x252503e0  addiu       $a1, $t1, 0x3E0
    ctx->pc = 0x158654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 992));
    // 0x158658: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x158658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15865c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x15865cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x158660: 0x252403f0  addiu       $a0, $t1, 0x3F0
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1008));
    // 0x158664: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x158664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x158668: 0x252203b0  addiu       $v0, $t1, 0x3B0
    ctx->pc = 0x158668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 944));
    // 0x15866c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15866cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158670: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x158670u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158674: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x158674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158678: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x158678u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15867c: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x15867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x158680: 0xc52703f4  lwc1        $f7, 0x3F4($t1)
    ctx->pc = 0x158680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x158684: 0xad2003e4  sw          $zero, 0x3E4($t1)
    ctx->pc = 0x158684u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 996), GPR_U32(ctx, 0));
    // 0x158688: 0xad2003f4  sw          $zero, 0x3F4($t1)
    ctx->pc = 0x158688u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1012), GPR_U32(ctx, 0));
    // 0x15868c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15868cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158690: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x158690u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158694: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x158694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158698: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15869c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15869cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1586a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1586a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1586a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1586a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1586a8: 0xc52503e4  lwc1        $f5, 0x3E4($t1)
    ctx->pc = 0x1586a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1586ac: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1586acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1586b0: 0x45010094  bc1t        . + 4 + (0x94 << 2)
    ctx->pc = 0x1586B0u;
    {
        const bool branch_taken_0x1586b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1586B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586B0u;
        // 0x1586b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586b0) {
            ctx->pc = 0x158904u;
            goto label_158904;
        }
    }
    ctx->pc = 0x1586B8u;
    // 0x1586b8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1586b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1586bc: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1586bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1586c0: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1586c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1586c4: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1586c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1586c8: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1586c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1586cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1586ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1586d0: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1586d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1586d4: 0x4501008b  bc1t        . + 4 + (0x8B << 2)
    ctx->pc = 0x1586D4u;
    {
        const bool branch_taken_0x1586d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1586D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586D4u;
        // 0x1586d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586d4) {
            ctx->pc = 0x158904u;
            goto label_158904;
        }
    }
    ctx->pc = 0x1586DCu;
    // 0x1586dc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1586dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1586e0: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1586e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1586e4: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1586e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1586e8: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1586e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1586ec: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1586ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1586f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1586f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1586f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1586f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1586f8: 0xc5220474  lwc1        $f2, 0x474($t1)
    ctx->pc = 0x1586f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1586fc: 0x0  nop
    ctx->pc = 0x1586fcu;
    // NOP
    // 0x158700: 0x0  nop
    ctx->pc = 0x158700u;
    // NOP
    // 0x158704: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x158704u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x158708: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15870c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15870cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158710: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x158710u;
    {
        const bool branch_taken_0x158710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158710u;
        // 0x158714: 0xe5200478  swc1        $f0, 0x478($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158710) {
            ctx->pc = 0x158900u;
            goto label_158900;
        }
    }
    ctx->pc = 0x158718u;
    // 0x158718: 0x46000104  c1          0x104
    ctx->pc = 0x158718u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x15871c: 0x46030004  c1          0x30004
    ctx->pc = 0x15871cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x158720: 0xe52603e4  swc1        $f6, 0x3E4($t1)
    ctx->pc = 0x158720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 996), bits); }
    // 0x158724: 0x25260400  addiu       $a2, $t1, 0x400
    ctx->pc = 0x158724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x158728: 0xe52703f4  swc1        $f7, 0x3F4($t1)
    ctx->pc = 0x158728u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1012), bits); }
    // 0x15872c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x15872cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158730: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x158730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158734: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x158734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x158738: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x158738u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15873c: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x15873cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158740: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x158740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x158744: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x158744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158748: 0x4a0003bf  vwaitq
    ctx->pc = 0x158748u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15874c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x15874cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158750: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x158750u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158754: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x158754u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158758: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x158758u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15875c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15875cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158760: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x158760u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158764: 0xc5210404  lwc1        $f1, 0x404($t1)
    ctx->pc = 0x158764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158768: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x158768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15876c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15876cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x158770: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x158770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158774: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x158774u;
    {
        const bool branch_taken_0x158774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158774u;
        // 0x158778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158774) {
            ctx->pc = 0x158904u;
            goto label_158904;
        }
    }
    ctx->pc = 0x15877Cu;
    // 0x15877c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x15877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158780: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158784: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158784u;
        // 0x158788: 0x252a0120  addiu       $t2, $t1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158784) {
            ctx->pc = 0x158904u;
            goto label_158904;
        }
    }
    ctx->pc = 0x15878Cu;
    // 0x15878c: 0xc5210134  lwc1        $f1, 0x134($t1)
    ctx->pc = 0x15878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158790: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x158790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158794: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x158794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158798: 0x4a0002ff  vnop
    ctx->pc = 0x158798u;
    // NOP operation, no action needed for VU0
    // 0x15879c: 0x4a0002ff  vnop
    ctx->pc = 0x15879cu;
    // NOP operation, no action needed for VU0
    // 0x1587a0: 0x4a0002ff  vnop
    ctx->pc = 0x1587a0u;
    // NOP operation, no action needed for VU0
    // 0x1587a4: 0x4a0002ff  vnop
    ctx->pc = 0x1587a4u;
    // NOP operation, no action needed for VU0
    // 0x1587a8: 0x4a0002ff  vnop
    ctx->pc = 0x1587a8u;
    // NOP operation, no action needed for VU0
    // 0x1587ac: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1587acu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1587b0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1587b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1587b4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1587b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1587b8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1587B8u;
    {
        const bool branch_taken_0x1587b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587b8) {
            ctx->pc = 0x1587BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1587B8u;
            // 0x1587bc: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1587ECu;
            goto label_1587ec;
        }
    }
    ctx->pc = 0x1587C0u;
    // 0x1587c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1587c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1587c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1587c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1587c8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x1587c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1587cc: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x1587ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1587d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1587d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1587d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1587d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1587d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1587d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1587dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1587dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1587e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1587e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1587e4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1587e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1587e8: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1587e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1587ec:
    // 0x1587ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1587ECu;
    {
        const bool branch_taken_0x1587ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587ec) {
            ctx->pc = 0x1587F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1587ECu;
            // 0x1587f0: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158804u;
            goto label_158804;
        }
    }
    ctx->pc = 0x1587F4u;
    // 0x1587f4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1587f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1587f8: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x1587f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1587fc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1587fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158800: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x158800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_158804:
    // 0x158804: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x158804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158808: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x158808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x15880c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x15880cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x158810: 0xace20090  sw          $v0, 0x90($a3)
    ctx->pc = 0x158810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 2));
    // 0x158814: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x158814u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x158818: 0xa0e30020  sb          $v1, 0x20($a3)
    ctx->pc = 0x158818u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x15881c: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x15881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x158820: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x158820u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x158824: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x158824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x158828: 0x25240150  addiu       $a0, $t1, 0x150
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x15882c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15882cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158830: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158830u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158834: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158834u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158838: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x158838u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15883c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15883cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158840: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158840u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158844: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x158844u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158848: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x158848u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15884c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15884cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158850: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x158850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158854: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x158854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158858: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x158858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15885c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x15885cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15886c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15886cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x158870: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x158870u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x158874: 0xc7818308  lwc1        $f1, -0x7CF8($gp)
    ctx->pc = 0x158874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15887c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15887Cu;
    {
        const bool branch_taken_0x15887c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15887Cu;
        // 0x158880: 0x24e30070  addiu       $v1, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15887c) {
            ctx->pc = 0x1588B8u;
            goto label_1588b8;
        }
    }
    ctx->pc = 0x158884u;
    // 0x158884: 0x24e20070  addiu       $v0, $a3, 0x70
    ctx->pc = 0x158884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x158888: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x158888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15888c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15888cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158890: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158894: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x158894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158898: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x158898u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x15889c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15889cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1588a0: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1588a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1588a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1588a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1588a8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1588a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1588ac: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1588acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1588b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1588B0u;
    {
        const bool branch_taken_0x1588b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588B0u;
        // 0x1588b4: 0x24e40080  addiu       $a0, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588b0) {
            ctx->pc = 0x1588C4u;
            goto label_1588c4;
        }
    }
    ctx->pc = 0x1588B8u;
label_1588b8:
    // 0x1588b8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1588b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1588bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1588bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1588c0: 0x24e40080  addiu       $a0, $a3, 0x80
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_1588c4:
    // 0x1588c4: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x1588c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x1588c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1588c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1588cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1588ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1588d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1588d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1588d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1588d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1588d8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1588d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1588dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1588dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1588e0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1588e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1588e4: 0xace5009c  sw          $a1, 0x9C($a3)
    ctx->pc = 0x1588e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 5));
    // 0x1588e8: 0xacea0094  sw          $t2, 0x94($a3)
    ctx->pc = 0x1588e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 10));
    // 0x1588ec: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1588ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588f0: 0xe4e20098  swc1        $f2, 0x98($a3)
    ctx->pc = 0x1588f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
    // 0x1588f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1588F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588F4u;
        // 0x1588f8: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1588F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1588FCu;
    // 0x1588fc: 0x0  nop
    ctx->pc = 0x1588fcu;
    // NOP
label_158900:
    // 0x158900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158904:
    // 0x158904: 0x3e00008  jr          $ra
    ctx->pc = 0x158904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15890Cu;
}

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

// Function: S_Point2Point_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i
// Address: 0x1580a0 - 0x158324
void S_Point2Point_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x1580a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Point_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x1580a0");
#endif

    ctx->pc = 0x1580a0u;

    // 0x1580a0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1580a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580a4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1580a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580a8: 0x252703e0  addiu       $a3, $t1, 0x3E0
    ctx->pc = 0x1580a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 992));
    // 0x1580ac: 0x25230020  addiu       $v1, $t1, 0x20
    ctx->pc = 0x1580acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1580b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1580b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1580b4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1580b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1580b8: 0x252503f0  addiu       $a1, $t1, 0x3F0
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1008));
    // 0x1580bc: 0x252403d0  addiu       $a0, $t1, 0x3D0
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x1580c0: 0x252303b0  addiu       $v1, $t1, 0x3B0
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 944));
    // 0x1580c4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1580c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1580c8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1580c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1580cc: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1580ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1580d0: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1580d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1580d4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1580d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1580d8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1580d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1580dc: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1580dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1580e0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1580e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1580e4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1580e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1580e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1580e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1580ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1580ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1580f0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1580f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1580f4: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x1580f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1580f8: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x1580F8u;
    {
        const bool branch_taken_0x1580f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1580FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580F8u;
        // 0x1580fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580f8) {
            ctx->pc = 0x15831Cu;
            goto label_15831c;
        }
    }
    ctx->pc = 0x158100u;
    // 0x158100: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x158100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158104: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x158104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158108: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x158108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15810c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x15810cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158110: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x158110u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158114: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x158114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x158118: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x158118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15811c: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
    ctx->pc = 0x15811Cu;
    {
        const bool branch_taken_0x15811c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15811Cu;
        // 0x158120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15811c) {
            ctx->pc = 0x15831Cu;
            goto label_15831c;
        }
    }
    ctx->pc = 0x158124u;
    // 0x158124: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x158124u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158128: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x158128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15812c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x15812cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158130: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x158130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158134: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x158134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15813c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x15813cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x158140: 0xc5220474  lwc1        $f2, 0x474($t1)
    ctx->pc = 0x158140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158144: 0x0  nop
    ctx->pc = 0x158144u;
    // NOP
    // 0x158148: 0x0  nop
    ctx->pc = 0x158148u;
    // NOP
    // 0x15814c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x15814cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x158150: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x158154: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x158154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158158: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x158158u;
    {
        const bool branch_taken_0x158158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158158u;
        // 0x15815c: 0xe5200478  swc1        $f0, 0x478($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158158) {
            ctx->pc = 0x158318u;
            goto label_158318;
        }
    }
    ctx->pc = 0x158160u;
    // 0x158160: 0x46000044  c1          0x44
    ctx->pc = 0x158160u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x158164: 0x46030004  c1          0x30004
    ctx->pc = 0x158164u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x158168: 0x25260400  addiu       $a2, $t1, 0x400
    ctx->pc = 0x158168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x15816c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x15816cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158170: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x158170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158174: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x158174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x158178: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x158178u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15817c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15817cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158180: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x158180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x158184: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x158184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158188: 0x4a0003bf  vwaitq
    ctx->pc = 0x158188u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15818c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x15818cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158190: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x158190u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158194: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x158194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158198: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x158198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15819c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15819cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1581a0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1581a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1581a4: 0x252a0120  addiu       $t2, $t1, 0x120
    ctx->pc = 0x1581a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x1581a8: 0xc5220134  lwc1        $f2, 0x134($t1)
    ctx->pc = 0x1581a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1581ac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1581acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1581b0: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x1581b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1581b4: 0x4a0002ff  vnop
    ctx->pc = 0x1581b4u;
    // NOP operation, no action needed for VU0
    // 0x1581b8: 0x4a0002ff  vnop
    ctx->pc = 0x1581b8u;
    // NOP operation, no action needed for VU0
    // 0x1581bc: 0x4a0002ff  vnop
    ctx->pc = 0x1581bcu;
    // NOP operation, no action needed for VU0
    // 0x1581c0: 0x4a0002ff  vnop
    ctx->pc = 0x1581c0u;
    // NOP operation, no action needed for VU0
    // 0x1581c4: 0x4a0002ff  vnop
    ctx->pc = 0x1581c4u;
    // NOP operation, no action needed for VU0
    // 0x1581c8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1581c8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1581cc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1581ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1581d0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1581d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1581d4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1581D4u;
    {
        const bool branch_taken_0x1581d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1581d4) {
            ctx->pc = 0x1581D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1581D4u;
            // 0x1581d8: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158208u;
            goto label_158208;
        }
    }
    ctx->pc = 0x1581DCu;
    // 0x1581dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1581dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1581e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1581e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1581e4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1581e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1581e8: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x1581e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1581ec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1581ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1581f0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1581f4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1581f4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1581f8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1581f8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1581fc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1581fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158200: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158200u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158204: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x158204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_158208:
    // 0x158208: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158208u;
    {
        const bool branch_taken_0x158208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158208) {
            ctx->pc = 0x15820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158208u;
            // 0x15820c: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158220u;
            goto label_158220;
        }
    }
    ctx->pc = 0x158210u;
    // 0x158210: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x158210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158214: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x158214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158218: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x158218u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15821c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x15821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_158220:
    // 0x158220: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x158220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158224: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x158224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x158228: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15822c: 0xace20090  sw          $v0, 0x90($a3)
    ctx->pc = 0x15822cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 2));
    // 0x158230: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x158230u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x158234: 0xa0e30020  sb          $v1, 0x20($a3)
    ctx->pc = 0x158234u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x158238: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x15823c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x15823cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x158240: 0x25240150  addiu       $a0, $t1, 0x150
    ctx->pc = 0x158240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x158244: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158248: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15824c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x15824cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158250: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x158250u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x158254: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x158254u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158258: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158258u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15825c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x15825cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158260: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x158260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158264: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x158264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158268: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x158268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15826c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x15826cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158270: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x158270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158274: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x158274u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15827c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158284: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x158288: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x158288u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x15828c: 0xc78182fc  lwc1        $f1, -0x7D04($gp)
    ctx->pc = 0x15828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158294: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x158294u;
    {
        const bool branch_taken_0x158294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158294u;
        // 0x158298: 0x24e30070  addiu       $v1, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158294) {
            ctx->pc = 0x1582D0u;
            goto label_1582d0;
        }
    }
    ctx->pc = 0x15829Cu;
    // 0x15829c: 0x24e20070  addiu       $v0, $a3, 0x70
    ctx->pc = 0x15829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x1582a0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1582a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1582a4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1582a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1582a8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1582a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1582ac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1582acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1582b0: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1582b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1582b4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1582b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1582b8: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1582b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1582bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1582bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1582c0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1582c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1582c4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1582c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1582c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1582C8u;
    {
        const bool branch_taken_0x1582c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582C8u;
        // 0x1582cc: 0x24e40080  addiu       $a0, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582c8) {
            ctx->pc = 0x1582DCu;
            goto label_1582dc;
        }
    }
    ctx->pc = 0x1582D0u;
label_1582d0:
    // 0x1582d0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1582d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1582d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1582d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1582d8: 0x24e40080  addiu       $a0, $a3, 0x80
    ctx->pc = 0x1582d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_1582dc:
    // 0x1582dc: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x1582dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x1582e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1582e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1582e4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1582e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1582e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1582e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1582ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1582ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1582f0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1582f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1582f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1582f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1582f8: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1582f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1582fc: 0xace5009c  sw          $a1, 0x9C($a3)
    ctx->pc = 0x1582fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 5));
    // 0x158300: 0xacea0094  sw          $t2, 0x94($a3)
    ctx->pc = 0x158300u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 10));
    // 0x158304: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x158304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158308: 0xe4e20098  swc1        $f2, 0x98($a3)
    ctx->pc = 0x158308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
    // 0x15830c: 0x3e00008  jr          $ra
    ctx->pc = 0x15830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15830Cu;
        // 0x158310: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158314u;
    // 0x158314: 0x0  nop
    ctx->pc = 0x158314u;
    // NOP
label_158318:
    // 0x158318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15831c:
    // 0x15831c: 0x3e00008  jr          $ra
    ctx->pc = 0x15831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158324u;
}

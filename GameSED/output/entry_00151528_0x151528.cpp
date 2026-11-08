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

// Function: entry_00151528
// Address: 0x151528 - 0x1515b4
void entry_00151528_0x151528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151528_0x151528");
#endif

    ctx->pc = 0x151528u;

    // 0x151528: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15152c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x15152cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151530: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151534: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151534u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151538: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x15153c: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x15153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x151540: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x151540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151544: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x151544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209C90u));
    // 0x151548: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15154c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15154cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151550: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151554: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x151554u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151558: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15155c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15155cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151560: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x151560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x151564: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x151564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151568: 0x8e030170  lw          $v1, 0x170($s0)
    ctx->pc = 0x151568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x15156c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151570: 0x8c650328  lw          $a1, 0x328($v1)
    ctx->pc = 0x151570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x151574: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x151574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x151578: 0xc4a04010  lwc1        $f0, 0x4010($a1)
    ctx->pc = 0x151578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15157c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x15157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151584: 0x460700e8  max.s       $f3, $f0, $f7
    ctx->pc = 0x151584u;
    ctx->f[3] = std::max(ctx->f[0], ctx->f[7]);
    // 0x151588: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x15158c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15158cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x151590: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x151590u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151594: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x151594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151598: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x151598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15159c: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x15159cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1515a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1515A0u;
    {
        const bool branch_taken_0x1515a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1515a0) {
            ctx->pc = 0x1515B4u;
            return;
        }
    }
    ctx->pc = 0x1515A8u;
    // 0x1515a8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1515ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1515acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515b0: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1515b0u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x1515b4u;
}

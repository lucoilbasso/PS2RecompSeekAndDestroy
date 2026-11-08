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

// Function: entry_00180458
// Address: 0x180458 - 0x180588
void entry_00180458_0x180458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180458_0x180458");
#endif

    ctx->pc = 0x180458u;

    // 0x180458: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x180458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18045c: 0xd9a20010  lqc2        $vf2, 0x10($t5)
    ctx->pc = 0x18045cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x180460: 0x4b560844  vsubx.xz    $vf1, $vf1, $vf22x
    ctx->pc = 0x180460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180464: 0x4b561080  vaddx.xz    $vf2, $vf2, $vf22x
    ctx->pc = 0x180464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180468: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x180468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x18046c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x18046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x180470: 0x48a26000  qmtc2.ni    $v0, $vf12
    ctx->pc = 0x180470u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x180474: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x180474u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x180478: 0x4b5511ac  vsub.xz     $vf6, $vf2, $vf21
    ctx->pc = 0x180478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18047c: 0x4b41a96c  vsub.xz     $vf5, $vf21, $vf1
    ctx->pc = 0x18047cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180480: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x180484: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x180484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x180488: 0x48a26800  qmtc2.ni    $v0, $vf13
    ctx->pc = 0x180488u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18048c: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
    // 0x180490: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x180490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x180494: 0x48a27000  qmtc2.ni    $v0, $vf14
    ctx->pc = 0x180494u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x180498: 0x4a0002ff  vnop
    ctx->pc = 0x180498u;
    // NOP operation, no action needed for VU0
    // 0x18049c: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x18049cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x1804a0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1804a4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1804A4u;
    {
        const bool branch_taken_0x1804a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1804a4) {
            ctx->pc = 0x1805E8u;
            return;
        }
    }
    ctx->pc = 0x1804ACu;
    // 0x1804ac: 0x0  nop
    ctx->pc = 0x1804acu;
    // NOP
    // 0x1804b0: 0xd9170000  lqc2        $vf23, 0x0($t0)
    ctx->pc = 0x1804b0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1804b4: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x1804b4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1804b8: 0xd9390000  lqc2        $vf25, 0x0($t1)
    ctx->pc = 0x1804b8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1804bc: 0x4a2c0258  vmulx.w     $vf9, $vf0, $vf12x
    ctx->pc = 0x1804bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1804c0: 0x4bd8b9ac  vsub.xyz    $vf6, $vf23, $vf24
    ctx->pc = 0x1804c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[23], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1804c4: 0x4bd8c9ec  vsub.xyz    $vf7, $vf25, $vf24
    ctx->pc = 0x1804c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[25], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1804c8: 0x4bd8aa2c  vsub.xyz    $vf8, $vf21, $vf24
    ctx->pc = 0x1804c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1804cc: 0x4b0731be  vmulaz.x    $ACC, $vf6, $vf7z
    ctx->pc = 0x1804ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1804d0: 0x4b063a4e  vmsubz.x    $vf9, $vf7, $vf6z
    ctx->pc = 0x1804d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1804d4: 0x4bc949ff  .word       0x4BC949FF                   # vclipw.xyz  $vf9, $vf9w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1804d4u;
    { __m128 fs = ctx->vu0_vf[9]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1804d8: 0x4b0741be  vmulaz.x    $ACC, $vf8, $vf7z
    ctx->pc = 0x1804d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1804dc: 0x4a6903bc  vdiv        $Q, $vf0w, $vf9x
    ctx->pc = 0x1804dcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1804e0: 0x4b083a8e  vmsubz.x    $vf10, $vf7, $vf8z
    ctx->pc = 0x1804e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1804e4: 0x4b0831be  vmulaz.x    $ACC, $vf6, $vf8z
    ctx->pc = 0x1804e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1804e8: 0x4b0642ce  vmsubz.x    $vf11, $vf8, $vf6z
    ctx->pc = 0x1804e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1804ec: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x1804ecu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1804f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1804f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1804f4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1804F4u;
    {
        const bool branch_taken_0x1804f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804f4) {
            ctx->pc = 0x1805E8u;
            return;
        }
    }
    ctx->pc = 0x1804FCu;
    // 0x1804fc: 0x0  nop
    ctx->pc = 0x1804fcu;
    // NOP
    // 0x180500: 0x4a0003bf  vwaitq
    ctx->pc = 0x180500u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x180504: 0x4b00529c  vmulq.x     $vf10, $vf10, $Q
    ctx->pc = 0x180504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x180508: 0x4b005adc  vmulq.x     $vf11, $vf11, $Q
    ctx->pc = 0x180508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x18050c: 0x4b0a5bc0  vaddx.x     $vf15, $vf11, $vf10x
    ctx->pc = 0x18050cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x180510: 0x4a0002ff  vnop
    ctx->pc = 0x180510u;
    // NOP operation, no action needed for VU0
    // 0x180514: 0x4a0002ff  vnop
    ctx->pc = 0x180514u;
    // NOP operation, no action needed for VU0
    // 0x180518: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x180518u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x18051c: 0x4b0d5400  vaddx.x     $vf16, $vf10, $vf13x
    ctx->pc = 0x18051cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x180520: 0x4b0d5c40  vaddx.x     $vf17, $vf11, $vf13x
    ctx->pc = 0x180520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x180524: 0x4b0a7484  vsubx.x     $vf18, $vf14, $vf10x
    ctx->pc = 0x180524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x180528: 0x4b0b74c4  vsubx.x     $vf19, $vf14, $vf11x
    ctx->pc = 0x180528u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x18052c: 0x4b0f7504  vsubx.x     $vf20, $vf14, $vf15x
    ctx->pc = 0x18052cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x180530: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x180530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x180534: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x180534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180538: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x180538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18053c: 0x460c08c1  sub.s       $f3, $f1, $f12
    ctx->pc = 0x18053cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x180540: 0xc5e5000c  lwc1        $f5, 0xC($t7)
    ctx->pc = 0x180540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x180544: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x180544u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x180548: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x180548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x18054c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x18054Cu;
    {
        const bool branch_taken_0x18054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18054c) {
            ctx->pc = 0x1805E8u;
            return;
        }
    }
    ctx->pc = 0x180554u;
    // 0x180554: 0x0  nop
    ctx->pc = 0x180554u;
    // NOP
    // 0x180558: 0x4b08003d  vadday.x    $ACC, $vf0, $vf8y
    ctx->pc = 0x180558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18055c: 0x4b0650fd  vmsubay.x   $ACC, $vf10, $vf6y
    ctx->pc = 0x18055cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180560: 0x4b075b8d  vmsuby.x    $vf14, $vf11, $vf7y
    ctx->pc = 0x180560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x180564: 0x48237000  qmfc2.ni    $v1, $vf14
    ctx->pc = 0x180564u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x180568: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x180568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18056c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18056cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180570: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x180570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180574: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x180574u;
    {
        const bool branch_taken_0x180574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180574) {
            ctx->pc = 0x180588u;
            return;
        }
    }
    ctx->pc = 0x18057Cu;
    // 0x18057c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x18057cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180580: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x180580u;
    {
        const bool branch_taken_0x180580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180580) {
            ctx->pc = 0x1805A4u;
            return;
        }
    }
    ctx->pc = 0x180588u;
}

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

// Function: WActorPresetJobProc__FP7WcActorP5BcObj
// Address: 0x19a468 - 0x19a5b0
void WActorPresetJobProc__FP7WcActorP5BcObj_0x19a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WActorPresetJobProc__FP7WcActorP5BcObj_0x19a468");
#endif

    switch (ctx->pc) {
        case 0x19a4c0u: goto label_19a4c0;
        case 0x19a4c8u: goto label_19a4c8;
        default: break;
    }

    ctx->pc = 0x19a468u;

    // 0x19a468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a46c: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x19a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x19a470: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a478: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19a47c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a480: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19a484: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x19A484u;
    {
        const bool branch_taken_0x19a484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A484u;
        // 0x19a488: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a484) {
            ctx->pc = 0x19A544u;
            goto label_19a544;
        }
    }
    ctx->pc = 0x19A48Cu;
    // 0x19a48c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x19a48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a490: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x19a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x19a494: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x19A494u;
    {
        const bool branch_taken_0x19a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a494) {
            ctx->pc = 0x19A498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A494u;
            // 0x19a498: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A548u;
            goto label_19a548;
        }
    }
    ctx->pc = 0x19A49Cu;
    // 0x19a49c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a4a0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a4a4: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x19a4a8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x19a4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x19a4ac: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x19a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x19a4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A4B0u;
    {
        const bool branch_taken_0x19a4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4B0u;
        // 0x19a4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4b0) {
            ctx->pc = 0x19A4C0u;
            goto label_19a4c0;
        }
    }
    ctx->pc = 0x19A4B8u;
    // 0x19a4b8: 0xc061920  jal         func_186480
    ctx->pc = 0x19A4B8u;
    SET_GPR_U32(ctx, 31, 0x19A4C0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x19A4B8u, 0x19A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4C0u;
label_19a4c0:
    // 0x19a4c0: 0xc061422  jal         func_185088
    ctx->pc = 0x19A4C0u;
    SET_GPR_U32(ctx, 31, 0x19A4C8u);
    ctx->pc = 0x19A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4C0u;
    // 0x19a4c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x19A4C0u, 0x19A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4C8u;
label_19a4c8:
    // 0x19a4c8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x19a4cc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19a4ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a4d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19a4d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19a4d8: 0x2463ef50  addiu       $v1, $v1, -0x10B0
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963024));
    // 0x19a4dc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19a4dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a4e0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x19a4e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x21EF50u));
    // 0x19a4e4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a4e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a4e8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a4ec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19a4ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a4f0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19a4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a4f4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19a4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a4f8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x19a4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a4fc: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19a4fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19a500: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x19a500u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19a504: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x19a504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19a508: 0x4a0003bf  vwaitq
    ctx->pc = 0x19a508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19a50c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x19a50cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19a510: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x19a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19a514: 0xc7808d94  lwc1        $f0, -0x726C($gp)
    ctx->pc = 0x19a514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a518: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19a518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19a51c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a51cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a520: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19a520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19a524: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a528: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a52c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a530: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x19a534: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x19a534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a538: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x19a538u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a53c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a540: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x19a540u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_19a544:
    // 0x19a544: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x19a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a548:
    // 0x19a548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a54c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a54cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a550: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x19A550u;
    {
        const bool branch_taken_0x19a550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A550u;
        // 0x19a554: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a550) {
            ctx->pc = 0x19A580u;
            goto label_19a580;
        }
    }
    ctx->pc = 0x19A558u;
    // 0x19a558: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a55c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19a560: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A560u;
    {
        const bool branch_taken_0x19a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a560) {
            ctx->pc = 0x19A564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A560u;
            // 0x19a564: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A584u;
            goto label_19a584;
        }
    }
    ctx->pc = 0x19A568u;
    // 0x19a568: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x19a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x19a56c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19a56cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a570: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19a570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19a574: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a578: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a57c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_19a580:
    // 0x19a580: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x19a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_19a584:
    // 0x19a584: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x19a584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x19a588: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19a588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19a58c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19a58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a590: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x19a594: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19a594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a59c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19a59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a5a0: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x19a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x19a5a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5A8u;
        // 0x19a5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A5B0u;
}

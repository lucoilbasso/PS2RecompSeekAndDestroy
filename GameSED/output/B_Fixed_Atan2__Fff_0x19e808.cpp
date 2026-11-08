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

// Function: B_Fixed_Atan2__Fff
// Address: 0x19e808 - 0x19e978
void B_Fixed_Atan2__Fff_0x19e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Fixed_Atan2__Fff_0x19e808");
#endif

    ctx->pc = 0x19e808u;

    // 0x19e808: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19e808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19e80c: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x19e80cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e810: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19E810u;
    {
        const bool branch_taken_0x19e810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e810) {
            ctx->pc = 0x19E838u;
            goto label_19e838;
        }
    }
    ctx->pc = 0x19E818u;
    // 0x19e818: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x19e818u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e81c: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x19E81Cu;
    {
        const bool branch_taken_0x19e81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E81Cu;
        // 0x19e820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e81c) {
            ctx->pc = 0x19E970u;
            goto label_19e970;
        }
    }
    ctx->pc = 0x19E824u;
    // 0x19e824: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x19e824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e828: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x19E828u;
    {
        const bool branch_taken_0x19e828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E828u;
        // 0x19e82c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e828) {
            ctx->pc = 0x19E970u;
            goto label_19e970;
        }
    }
    ctx->pc = 0x19E830u;
    // 0x19e830: 0x3e00008  jr          $ra
    ctx->pc = 0x19E830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E830u;
        // 0x19e834: 0x2402e000  addiu       $v0, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E838u;
label_19e838:
    // 0x19e838: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x19e838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e83c: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x19e83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19e840: 0x432826  xor         $a1, $v0, $v1
    ctx->pc = 0x19e840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19e844: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x19e848: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19e848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19e84c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19e850: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19e850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19e854: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19e854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19e858: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x19e858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x19e85c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19e85cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e860: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x19e860u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19e864: 0x3c043f7f  lui         $a0, 0x3F7F
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16255 << 16));
    // 0x19e868: 0x3484fff5  ori         $a0, $a0, 0xFFF5
    ctx->pc = 0x19e868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65525);
    // 0x19e86c: 0x48a45800  qmtc2.ni    $a0, $vf11
    ctx->pc = 0x19e86cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e870: 0x4b042868  vadd.x      $vf1, $vf5, $vf4
    ctx->pc = 0x19e870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e874: 0x4b0428ac  vsub.x      $vf2, $vf5, $vf4
    ctx->pc = 0x19e874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e878: 0x3c04beaa  lui         $a0, 0xBEAA
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48810 << 16));
    // 0x19e87c: 0x3484a61c  ori         $a0, $a0, 0xA61C
    ctx->pc = 0x19e87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42524);
    // 0x19e880: 0x48a46000  qmtc2.ni    $a0, $vf12
    ctx->pc = 0x19e880u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e884: 0x4a0113bc  vdiv        $Q, $vf2x, $vf1x
    ctx->pc = 0x19e884u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19e888: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x19e888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x19e88c: 0x348440a6  ori         $a0, $a0, 0x40A6
    ctx->pc = 0x19e88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16550);
    // 0x19e890: 0x48a46800  qmtc2.ni    $a0, $vf13
    ctx->pc = 0x19e890u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e894: 0x3c04be0e  lui         $a0, 0xBE0E
    ctx->pc = 0x19e894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48654 << 16));
    // 0x19e898: 0x34846c63  ori         $a0, $a0, 0x6C63
    ctx->pc = 0x19e898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27747);
    // 0x19e89c: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x19e89cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e8a0: 0x3c043dc5  lui         $a0, 0x3DC5
    ctx->pc = 0x19e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15813 << 16));
    // 0x19e8a4: 0x348477df  ori         $a0, $a0, 0x77DF
    ctx->pc = 0x19e8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30687);
    // 0x19e8a8: 0x48a47800  qmtc2.ni    $a0, $vf15
    ctx->pc = 0x19e8a8u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e8ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e8acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19e8b0: 0x4b000120  vaddq.x     $vf4, $vf0, $Q
    ctx->pc = 0x19e8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e8b4: 0x3c04bd65  lui         $a0, 0xBD65
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48485 << 16));
    // 0x19e8b8: 0x348401c4  ori         $a0, $a0, 0x1C4
    ctx->pc = 0x19e8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)452);
    // 0x19e8bc: 0x4b0420ea  vmul.x      $vf3, $vf4, $vf4
    ctx->pc = 0x19e8bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19e8c0: 0x4b045abe  vmula.x     $ACC, $vf11, $vf4
    ctx->pc = 0x19e8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[4]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e8c4: 0x48a48000  qmtc2.ni    $a0, $vf16
    ctx->pc = 0x19e8c4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e8c8: 0x4b04186a  vmul.x      $vf1, $vf3, $vf4
    ctx->pc = 0x19e8c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e8cc: 0x4a0002ff  vnop
    ctx->pc = 0x19e8ccu;
    // NOP operation, no action needed for VU0
    // 0x19e8d0: 0x3c043cb3  lui         $a0, 0x3CB3
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15539 << 16));
    // 0x19e8d4: 0x34841652  ori         $a0, $a0, 0x1652
    ctx->pc = 0x19e8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5714);
    // 0x19e8d8: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19e8d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e8dc: 0x4b0c0abd  vmadda.x    $ACC, $vf1, $vf12
    ctx->pc = 0x19e8dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[12]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e8e0: 0x48a48800  qmtc2.ni    $a0, $vf17
    ctx->pc = 0x19e8e0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e8e4: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19e8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e8e8: 0x4b0d12bd  vmadda.x    $ACC, $vf2, $vf13
    ctx->pc = 0x19e8e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[13]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e8ec: 0x3c04bb84  lui         $a0, 0xBB84
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48004 << 16));
    // 0x19e8f0: 0x3484d7e7  ori         $a0, $a0, 0xD7E7
    ctx->pc = 0x19e8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55271);
    // 0x19e8f4: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19e8f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e8f8: 0x4b0e0abd  vmadda.x    $ACC, $vf1, $vf14
    ctx->pc = 0x19e8f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[14]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e8fc: 0x48a49000  qmtc2.ni    $a0, $vf18
    ctx->pc = 0x19e8fcu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e900: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19e900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e904: 0x4b0f12bd  vmadda.x    $ACC, $vf2, $vf15
    ctx->pc = 0x19e904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e908: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x19e908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x19e90c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x19e90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x19e910: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19e910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e914: 0x4b100abd  vmadda.x    $ACC, $vf1, $vf16
    ctx->pc = 0x19e914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[16]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e918: 0x48a49800  qmtc2.ni    $a0, $vf19
    ctx->pc = 0x19e918u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e91c: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19e91cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e920: 0x4b1112bd  vmadda.x    $ACC, $vf2, $vf17
    ctx->pc = 0x19e920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[17]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e924: 0x4b0098bf  vmaddaw.x   $ACC, $vf19, $vf0w
    ctx->pc = 0x19e924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e928: 0x4a0002ff  vnop
    ctx->pc = 0x19e928u;
    // NOP operation, no action needed for VU0
    // 0x19e92c: 0x4b1208a9  vmadd.x     $vf2, $vf1, $vf18
    ctx->pc = 0x19e92cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e930: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x19e930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e934: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x19e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x19e938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e93c: 0xc7818628  lwc1        $f1, -0x79D8($gp)
    ctx->pc = 0x19e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e940: 0x46026834  c.lt.s      $f13, $f2
    ctx->pc = 0x19e940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e944: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19e944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19e948: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19e948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19e94c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19e94cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e950: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E950u;
    {
        const bool branch_taken_0x19e950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e950) {
            ctx->pc = 0x19E970u;
            goto label_19e970;
        }
    }
    ctx->pc = 0x19E958u;
    // 0x19e958: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x19e958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e95c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x19E95Cu;
    {
        const bool branch_taken_0x19e95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e95c) {
            ctx->pc = 0x19E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E95Cu;
            // 0x19e960: 0x2442c000  addiu       $v0, $v0, -0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E970u;
            goto label_19e970;
        }
    }
    ctx->pc = 0x19E964u;
    // 0x19e964: 0x3e00008  jr          $ra
    ctx->pc = 0x19E964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E964u;
        // 0x19e968: 0x24424000  addiu       $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E96Cu;
    // 0x19e96c: 0x0  nop
    ctx->pc = 0x19e96cu;
    // NOP
label_19e970:
    // 0x19e970: 0x3e00008  jr          $ra
    ctx->pc = 0x19E970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E978u;
}

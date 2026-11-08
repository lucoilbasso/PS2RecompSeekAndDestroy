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

// Function: B_AtanF__Fff
// Address: 0x19e6e8 - 0x19e804
void B_AtanF__Fff_0x19e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_AtanF__Fff_0x19e6e8");
#endif

    ctx->pc = 0x19e6e8u;

    // 0x19e6e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e6ec: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19e6ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e6f0: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x19E6F0u;
    {
        const bool branch_taken_0x19e6f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e6f0) {
            ctx->pc = 0x19E7FCu;
            goto label_19e7fc;
        }
    }
    ctx->pc = 0x19E6F8u;
    // 0x19e6f8: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x19e6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e6fc: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x19e6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19e700: 0x432826  xor         $a1, $v0, $v1
    ctx->pc = 0x19e700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19e704: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x19e704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x19e708: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19e708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19e70c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19e710: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19e710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19e714: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19e718: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x19e718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x19e71c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19e71cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e720: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x19e720u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19e724: 0x3c043f7f  lui         $a0, 0x3F7F
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16255 << 16));
    // 0x19e728: 0x3484fff5  ori         $a0, $a0, 0xFFF5
    ctx->pc = 0x19e728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65525);
    // 0x19e72c: 0x48a45800  qmtc2.ni    $a0, $vf11
    ctx->pc = 0x19e72cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e730: 0x4b042868  vadd.x      $vf1, $vf5, $vf4
    ctx->pc = 0x19e730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e734: 0x4b0428ac  vsub.x      $vf2, $vf5, $vf4
    ctx->pc = 0x19e734u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e738: 0x3c04beaa  lui         $a0, 0xBEAA
    ctx->pc = 0x19e738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48810 << 16));
    // 0x19e73c: 0x3484a61c  ori         $a0, $a0, 0xA61C
    ctx->pc = 0x19e73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42524);
    // 0x19e740: 0x48a46000  qmtc2.ni    $a0, $vf12
    ctx->pc = 0x19e740u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e744: 0x4a0113bc  vdiv        $Q, $vf2x, $vf1x
    ctx->pc = 0x19e744u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19e748: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x19e74c: 0x348440a6  ori         $a0, $a0, 0x40A6
    ctx->pc = 0x19e74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16550);
    // 0x19e750: 0x48a46800  qmtc2.ni    $a0, $vf13
    ctx->pc = 0x19e750u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e754: 0x3c04be0e  lui         $a0, 0xBE0E
    ctx->pc = 0x19e754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48654 << 16));
    // 0x19e758: 0x34846c63  ori         $a0, $a0, 0x6C63
    ctx->pc = 0x19e758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27747);
    // 0x19e75c: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x19e75cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e760: 0x3c043dc5  lui         $a0, 0x3DC5
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15813 << 16));
    // 0x19e764: 0x348477df  ori         $a0, $a0, 0x77DF
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30687);
    // 0x19e768: 0x48a47800  qmtc2.ni    $a0, $vf15
    ctx->pc = 0x19e768u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e76c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e76cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19e770: 0x4b000120  vaddq.x     $vf4, $vf0, $Q
    ctx->pc = 0x19e770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e774: 0x3c04bd65  lui         $a0, 0xBD65
    ctx->pc = 0x19e774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48485 << 16));
    // 0x19e778: 0x348401c4  ori         $a0, $a0, 0x1C4
    ctx->pc = 0x19e778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)452);
    // 0x19e77c: 0x4b0420ea  vmul.x      $vf3, $vf4, $vf4
    ctx->pc = 0x19e77cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19e780: 0x4b045abe  vmula.x     $ACC, $vf11, $vf4
    ctx->pc = 0x19e780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[4]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e784: 0x48a48000  qmtc2.ni    $a0, $vf16
    ctx->pc = 0x19e784u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e788: 0x4b04186a  vmul.x      $vf1, $vf3, $vf4
    ctx->pc = 0x19e788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e78c: 0x4a0002ff  vnop
    ctx->pc = 0x19e78cu;
    // NOP operation, no action needed for VU0
    // 0x19e790: 0x3c043cb3  lui         $a0, 0x3CB3
    ctx->pc = 0x19e790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15539 << 16));
    // 0x19e794: 0x34841652  ori         $a0, $a0, 0x1652
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5714);
    // 0x19e798: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19e798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e79c: 0x4b0c0abd  vmadda.x    $ACC, $vf1, $vf12
    ctx->pc = 0x19e79cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[12]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7a0: 0x48a48800  qmtc2.ni    $a0, $vf17
    ctx->pc = 0x19e7a0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e7a4: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19e7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e7a8: 0x4b0d12bd  vmadda.x    $ACC, $vf2, $vf13
    ctx->pc = 0x19e7a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[13]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7ac: 0x3c04bb84  lui         $a0, 0xBB84
    ctx->pc = 0x19e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48004 << 16));
    // 0x19e7b0: 0x3484d7e7  ori         $a0, $a0, 0xD7E7
    ctx->pc = 0x19e7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55271);
    // 0x19e7b4: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19e7b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e7b8: 0x4b0e0abd  vmadda.x    $ACC, $vf1, $vf14
    ctx->pc = 0x19e7b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[14]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7bc: 0x48a49000  qmtc2.ni    $a0, $vf18
    ctx->pc = 0x19e7bcu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e7c0: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19e7c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e7c4: 0x4b0f12bd  vmadda.x    $ACC, $vf2, $vf15
    ctx->pc = 0x19e7c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7c8: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x19e7cc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x19e7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x19e7d0: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19e7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e7d4: 0x4b100abd  vmadda.x    $ACC, $vf1, $vf16
    ctx->pc = 0x19e7d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[16]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7d8: 0x48a49800  qmtc2.ni    $a0, $vf19
    ctx->pc = 0x19e7d8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19e7dc: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19e7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e7e0: 0x4b1112bd  vmadda.x    $ACC, $vf2, $vf17
    ctx->pc = 0x19e7e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[17]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7e4: 0x4b0098bf  vmaddaw.x   $ACC, $vf19, $vf0w
    ctx->pc = 0x19e7e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19e7e8: 0x4a0002ff  vnop
    ctx->pc = 0x19e7e8u;
    // NOP operation, no action needed for VU0
    // 0x19e7ec: 0x4b1208a9  vmadd.x     $vf2, $vf1, $vf18
    ctx->pc = 0x19e7ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e7f0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x19e7f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e7f4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x19e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x19e7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e7fc:
    // 0x19e7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E804u;
}

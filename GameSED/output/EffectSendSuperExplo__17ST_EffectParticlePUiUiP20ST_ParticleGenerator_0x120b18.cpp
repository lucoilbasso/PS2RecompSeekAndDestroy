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

// Function: EffectSendSuperExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x120b18 - 0x120d94
void EffectSendSuperExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendSuperExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120b18");
#endif

    switch (ctx->pc) {
        case 0x120b60u: goto label_120b60;
        case 0x120bb0u: goto label_120bb0;
        case 0x120bc0u: goto label_120bc0;
        case 0x120c88u: goto label_120c88;
        case 0x120cb8u: goto label_120cb8;
        case 0x120d08u: goto label_120d08;
        case 0x120d18u: goto label_120d18;
        default: break;
    }

    ctx->pc = 0x120b18u;

    // 0x120b18: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x120b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x120b1c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x120b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x120b20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x120b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b24: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x120b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x120b28: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x120b28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b2c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x120b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x120b30: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x120b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x120b34: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x120b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x120b38: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x120b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x120b3c: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x120b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x120b40: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x120b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x120b44: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x120b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x120b48: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x120b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x120b4c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x120b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x120b50: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x120b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x120b54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x120b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x120b58: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120B58u;
    SET_GPR_U32(ctx, 31, 0x120B60u);
    ctx->pc = 0x120B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B58u;
    // 0x120b5c: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120B58u, 0x120B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B60u;
label_120b60:
    // 0x120b60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x120b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120b64: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x120b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x120b68: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x120b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x120b6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120b74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x120b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120b78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x120b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120b7c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x120b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x120b80: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x120b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x120b84: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x120b84u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120b88: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x120b88u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120b8c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120b8cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x120b90: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x120b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x120b94: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x120b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x120b98: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x120B98u;
    {
        const bool branch_taken_0x120b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B98u;
        // 0x120b9c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b98) {
            ctx->pc = 0x120D64u;
            goto label_120d64;
        }
    }
    ctx->pc = 0x120BA0u;
    // 0x120ba0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x120ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x120ba4: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x120ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x120ba8: 0x24570790  addiu       $s7, $v0, 0x790
    ctx->pc = 0x120ba8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x120bac: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x120bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_120bb0:
    // 0x120bb0: 0x8ef20000  lw          $s2, 0x0($s7)
    ctx->pc = 0x120bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x120bb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x120bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bb8: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x120BB8u;
    SET_GPR_U32(ctx, 31, 0x120BC0u);
    ctx->pc = 0x120BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120BB8u;
    // 0x120bbc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x120BB8u, 0x120BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120BC0u;
label_120bc0:
    // 0x120bc0: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x120bc4: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x120bc4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120bc8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x120bc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120bcc: 0xdac50010  lqc2        $vf5, 0x10($s6)
    ctx->pc = 0x120bccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x120bd0: 0xdac60020  lqc2        $vf6, 0x20($s6)
    ctx->pc = 0x120bd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x120bd4: 0xdac70030  lqc2        $vf7, 0x30($s6)
    ctx->pc = 0x120bd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x120bd8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x120bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120bdc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x120bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120be0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120be4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x120be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x120be8: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x120be8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x120bec: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x120becu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120bf0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x120bf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120bf4: 0xdac50010  lqc2        $vf5, 0x10($s6)
    ctx->pc = 0x120bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x120bf8: 0xdac60020  lqc2        $vf6, 0x20($s6)
    ctx->pc = 0x120bf8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x120bfc: 0xdac70030  lqc2        $vf7, 0x30($s6)
    ctx->pc = 0x120bfcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x120c00: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x120c00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120c04: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x120c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120c08: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120c0c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x120c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x120c10: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x120c10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x120c14: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x120c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x120c18: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x120c18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120c1c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x120c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120c20: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x120c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120c24: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x120c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120c28: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x120c28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x120c2c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x120c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x120c30: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x120c30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x120c34: 0x4a0003bf  vwaitq
    ctx->pc = 0x120c34u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x120c38: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x120c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x120c3c: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x120c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x120c40: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x120c44: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120c48: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120c48u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120c4c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120c4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120c54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x120c54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x120c58: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120c5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120c60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120c64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c68: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120c68u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120c6c: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x120c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x120c70: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x120c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x120c74: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x120c74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120c78: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120c7c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x120c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120c80: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120C80u;
    SET_GPR_U32(ctx, 31, 0x120C88u);
    ctx->pc = 0x120C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C80u;
    // 0x120c84: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120C80u, 0x120C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C88u;
label_120c88:
    // 0x120c88: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x120c8c: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x120c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x120c90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x120c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120c98: 0x8ea50110  lw          $a1, 0x110($s5)
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x120c9c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x120c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x120ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ca8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x120ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x120cac: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x120cb0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x120CB0u;
    SET_GPR_U32(ctx, 31, 0x120CB8u);
    ctx->pc = 0x120CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120CB0u;
    // 0x120cb4: 0xafa80044  sw          $t0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x120CB0u, 0x120CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120CB8u;
label_120cb8:
    // 0x120cb8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x120cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cc0: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x120cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120cc4: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x120cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x120cc8: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x120cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120ccc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x120cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120cd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x120cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x120cd4: 0xc6a300b8  lwc1        $f3, 0xB8($s5)
    ctx->pc = 0x120cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x120cd8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x120cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x120cdc: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x120cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120ce0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x120ce0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x120ce4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x120ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x120ce8: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x120ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120cec: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x120cecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x120cf0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x120cf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x120cf4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x120cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120cf8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x120cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x120cfc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x120CFCu;
    {
        const bool branch_taken_0x120cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CFCu;
        // 0x120d00: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cfc) {
            ctx->pc = 0x120D28u;
            goto label_120d28;
        }
    }
    ctx->pc = 0x120D04u;
    // 0x120d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120d08:
    // 0x120d08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120d0c: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x120d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x120d10: 0xc04c904  jal         func_132410
    ctx->pc = 0x120D10u;
    SET_GPR_U32(ctx, 31, 0x120D18u);
    ctx->pc = 0x120D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D10u;
    // 0x120d14: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132410u, 0x120D10u, 0x120D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D18u;
label_120d18:
    // 0x120d18: 0x8e310054  lw          $s1, 0x54($s1)
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x120d1c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120D1Cu;
    {
        const bool branch_taken_0x120d1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x120D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D1Cu;
        // 0x120d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d1c) {
            ctx->pc = 0x120D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120d08;
        }
    }
    ctx->pc = 0x120D24u;
    // 0x120d24: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_120d28:
    // 0x120d28: 0x26430090  addiu       $v1, $s2, 0x90
    ctx->pc = 0x120d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x120d2c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120d30: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x120d30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120d34: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120d38: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120d3c: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x120d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x120d40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120d44: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x120d44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120d48: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120d4c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120d50: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x120d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x120d54: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x120d54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x120d58: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x120d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120d5c: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x120D5Cu;
    {
        const bool branch_taken_0x120d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D5Cu;
        // 0x120d60: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d5c) {
            ctx->pc = 0x120BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120bb0;
        }
    }
    ctx->pc = 0x120D64u;
label_120d64:
    // 0x120d64: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x120d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x120d68: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x120d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x120d6c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x120d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x120d70: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x120d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x120d74: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x120d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x120d78: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x120d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x120d7c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x120d7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x120d80: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x120d80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x120d84: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x120d84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x120d88: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x120d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x120d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x120D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D8Cu;
        // 0x120d90: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120D94u;
}

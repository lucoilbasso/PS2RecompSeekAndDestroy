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

// Function: entry_00120bb0
// Address: 0x120bb0 - 0x120d08
void entry_00120bb0_0x120bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120bb0_0x120bb0");
#endif

    switch (ctx->pc) {
        case 0x120bc0u: goto label_120bc0;
        case 0x120c88u: goto label_120c88;
        case 0x120cb8u: goto label_120cb8;
        default: break;
    }

    ctx->pc = 0x120bb0u;

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
            return;
        }
    }
    ctx->pc = 0x120D04u;
    // 0x120d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120d08u;
}

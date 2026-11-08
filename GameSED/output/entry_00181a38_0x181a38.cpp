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

// Function: entry_00181a38
// Address: 0x181a38 - 0x181b3c
void entry_00181a38_0x181a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181a38_0x181a38");
#endif

    ctx->pc = 0x181a38u;

    // 0x181a38: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x181a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x181a3c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x181a40: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x181A40u;
    {
        const bool branch_taken_0x181a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181a40) {
            ctx->pc = 0x181A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A40u;
            // 0x181a44: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B80u;
            return;
        }
    }
    ctx->pc = 0x181A48u;
    // 0x181a48: 0x3a0c02d  daddu       $t8, $sp, $zero
    ctx->pc = 0x181a48u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a4c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x181a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x181a50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x181a50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181a54: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x181a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x181a58: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x181a58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x181a5c: 0xd9c30000  lqc2        $vf3, 0x0($t6)
    ctx->pc = 0x181a5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x181a60: 0x4b440844  vsubx.xz    $vf1, $vf1, $vf4x
    ctx->pc = 0x181a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x181a64: 0x4b441080  vaddx.xz    $vf2, $vf2, $vf4x
    ctx->pc = 0x181a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x181a68: 0x4a0002ff  vnop
    ctx->pc = 0x181a68u;
    // NOP operation, no action needed for VU0
    // 0x181a6c: 0x4a0002ff  vnop
    ctx->pc = 0x181a6cu;
    // NOP operation, no action needed for VU0
    // 0x181a70: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x181a70u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x181a74: 0x4b41196c  vsub.xz     $vf5, $vf3, $vf1
    ctx->pc = 0x181a74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181a78: 0x4b4311ac  vsub.xz     $vf6, $vf2, $vf3
    ctx->pc = 0x181a78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x181a7c: 0x4a0002ff  vnop
    ctx->pc = 0x181a7cu;
    // NOP operation, no action needed for VU0
    // 0x181a80: 0x4a0002ff  vnop
    ctx->pc = 0x181a80u;
    // NOP operation, no action needed for VU0
    // 0x181a84: 0x4a0002ff  vnop
    ctx->pc = 0x181a84u;
    // NOP operation, no action needed for VU0
    // 0x181a88: 0x4a0002ff  vnop
    ctx->pc = 0x181a88u;
    // NOP operation, no action needed for VU0
    // 0x181a8c: 0x4a0002ff  vnop
    ctx->pc = 0x181a8cu;
    // NOP operation, no action needed for VU0
    // 0x181a90: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x181a90u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x181a94: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x181a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x181a98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x181a9c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x181A9Cu;
    {
        const bool branch_taken_0x181a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A9Cu;
        // 0x181aa0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a9c) {
            ctx->pc = 0x181B7Cu;
            return;
        }
    }
    ctx->pc = 0x181AA4u;
    // 0x181aa4: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x181aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x181aa8: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x181aa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181aac: 0x94e40006  lhu         $a0, 0x6($a3)
    ctx->pc = 0x181aacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x181ab0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x181ab0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x181ab4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x181ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x181ab8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x181ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181abc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x181abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x181ac0: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x181ac4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181ac8: 0x1e44021  addu        $t0, $t7, $a0
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x181acc: 0x2025021  addu        $t2, $s0, $v0
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x181ad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad4: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x181ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x181ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181adc: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x181adcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x181ae0: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x181ae0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x181ae4: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x181ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181ae8: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x181ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181aec: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x181aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181af0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181af0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181af8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x181af8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x181afc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x181afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b00: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x181B00u;
    {
        const bool branch_taken_0x181b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B00u;
        // 0x181b04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b00) {
            ctx->pc = 0x181B3Cu;
            return;
        }
    }
    ctx->pc = 0x181B08u;
    // 0x181b08: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x181b08u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181b0c: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x181b0cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181b10: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x181b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181b14: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181b14u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181b18: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x181b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181b1c: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x181b1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181b20: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x181b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x181b24: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x181b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181b28: 0x4a0003bf  vwaitq
    ctx->pc = 0x181b28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181b2c: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x181b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181b30: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x181b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181b34: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181b34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x181b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181b3cu;
}

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

// Function: entry_0018a9e0
// Address: 0x18a9e0 - 0x18aa88
void entry_0018a9e0_0x18a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a9e0_0x18a9e0");
#endif

    switch (ctx->pc) {
        case 0x18a9e8u: goto label_18a9e8;
        default: break;
    }

    ctx->pc = 0x18a9e0u;

    // 0x18a9e0: 0xc061422  jal         func_185088
    ctx->pc = 0x18A9E0u;
    SET_GPR_U32(ctx, 31, 0x18A9E8u);
    ctx->pc = 0x18A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9E0u;
    // 0x18a9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18A9E0u, 0x18A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9E8u;
label_18a9e8:
    // 0x18a9e8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x18a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x18a9ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18a9f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18a9f4: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x18a9f8: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x18a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x18a9fc: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x18a9fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18aa00: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18aa00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x18aa04: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x18aa04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x18aa08: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18aa08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x18aa0c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18aa0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x18aa10: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18aa10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aa14: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18aa14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aa18: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18aa18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aa1c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18aa1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18aa20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18aa20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aa24: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18aa24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18aa28: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18aa28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18aa2c: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x18aa2cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18aa30: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18aa30u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18aa34: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x18aa34u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x18aa38: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18aa38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aa3c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18aa3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aa40: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18aa40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aa44: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x18aa44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18aa48: 0x4a0003bf  vwaitq
    ctx->pc = 0x18aa48u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18aa4c: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x18aa4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18aa50: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18aa50u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x18aa54: 0x4a0002ff  vnop
    ctx->pc = 0x18aa54u;
    // NOP operation, no action needed for VU0
    // 0x18aa58: 0x4a0002ff  vnop
    ctx->pc = 0x18aa58u;
    // NOP operation, no action needed for VU0
    // 0x18aa5c: 0x4a0002ff  vnop
    ctx->pc = 0x18aa5cu;
    // NOP operation, no action needed for VU0
    // 0x18aa60: 0x4a0002ff  vnop
    ctx->pc = 0x18aa60u;
    // NOP operation, no action needed for VU0
    // 0x18aa64: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x18aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18aa68: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x18aa68u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x18aa6c: 0x54600037  bnel        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x18AA6Cu;
    {
        const bool branch_taken_0x18aa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aa6c) {
            ctx->pc = 0x18AA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AA6Cu;
            // 0x18aa70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB4Cu;
            return;
        }
    }
    ctx->pc = 0x18AA74u;
    // 0x18aa74: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x18aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x18aa78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA78u;
    {
        const bool branch_taken_0x18aa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA78u;
        // 0x18aa7c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa78) {
            ctx->pc = 0x18AA88u;
            return;
        }
    }
    ctx->pc = 0x18AA80u;
    // 0x18aa80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18AA80u;
    {
        const bool branch_taken_0x18aa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA80u;
        // 0x18aa84: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa80) {
            ctx->pc = 0x18AB38u;
            return;
        }
    }
    ctx->pc = 0x18AA88u;
}

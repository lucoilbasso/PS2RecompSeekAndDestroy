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

// Function: DrawSort__8WcSpriteP8WcEntity
// Address: 0x18a978 - 0x18ab68
void DrawSort__8WcSpriteP8WcEntity_0x18a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__8WcSpriteP8WcEntity_0x18a978");
#endif

    switch (ctx->pc) {
        case 0x18a9e0u: goto label_18a9e0;
        case 0x18a9e8u: goto label_18a9e8;
        default: break;
    }

    ctx->pc = 0x18a978u;

    // 0x18a978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a984: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18a988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a98c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18a990: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18a990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18a994: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18a994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18a998: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x18a998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x18a99c: 0x8cb1015c  lw          $s1, 0x15C($a1)
    ctx->pc = 0x18a99cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x18a9a0: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x18a9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18a9a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18a9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18a9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9ac: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x18A9ACu;
    {
        const bool branch_taken_0x18a9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9ACu;
        // 0x18a9b0: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9ac) {
            ctx->pc = 0x18AB48u;
            goto label_18ab48;
        }
    }
    ctx->pc = 0x18A9B4u;
    // 0x18a9b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a9b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18a9bc: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x18A9BCu;
    {
        const bool branch_taken_0x18a9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a9bc) {
            ctx->pc = 0x18A9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9BCu;
            // 0x18a9c0: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB10u;
            goto label_18ab10;
        }
    }
    ctx->pc = 0x18A9C4u;
    // 0x18a9c4: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x18a9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18a9c8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x18a9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x18a9cc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18a9d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A9D0u;
    {
        const bool branch_taken_0x18a9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9D0u;
        // 0x18a9d4: 0x26130210  addiu       $s3, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9d0) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A9D8u;
    // 0x18a9d8: 0xc061920  jal         func_186480
    ctx->pc = 0x18A9D8u;
    SET_GPR_U32(ctx, 31, 0x18A9E0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18A9D8u, 0x18A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9E0u;
label_18a9e0:
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
            goto label_18ab4c;
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
            goto label_18aa88;
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
            goto label_18ab38;
        }
    }
    ctx->pc = 0x18AA88u;
label_18aa88:
    // 0x18aa88: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AA88u;
    {
        const bool branch_taken_0x18aa88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA88u;
        // 0x18aa8c: 0x2623002c  addiu       $v1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa88) {
            ctx->pc = 0x18AAA0u;
            goto label_18aaa0;
        }
    }
    ctx->pc = 0x18AA90u;
    // 0x18aa90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aa94: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x18aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x18aa98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18AA98u;
    {
        const bool branch_taken_0x18aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA98u;
        // 0x18aa9c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa98) {
            ctx->pc = 0x18AB48u;
            goto label_18ab48;
        }
    }
    ctx->pc = 0x18AAA0u;
label_18aaa0:
    // 0x18aaa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18aaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaa4: 0xc4c00218  lwc1        $f0, 0x218($a2)
    ctx->pc = 0x18aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aaa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18aaa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18aaac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x18aaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x18aab0: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x18AAB0u;
    {
        const bool branch_taken_0x18aab0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x18AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAB0u;
        // 0x18aab4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aab0) {
            ctx->pc = 0x18AAF0u;
            goto label_18aaf0;
        }
    }
    ctx->pc = 0x18AAB8u;
    // 0x18aab8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18aabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aac0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x18aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18aac4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18aac8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aacc: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x18aad0: 0x671807  srav        $v1, $a3, $v1
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x18aad4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18aad8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18aadc: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x18aadcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x18aae0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x18aae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18AAE4u;
    {
        const bool branch_taken_0x18aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE4u;
        // 0x18aae8: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aae4) {
            ctx->pc = 0x18AAF8u;
            goto label_18aaf8;
        }
    }
    ctx->pc = 0x18AAECu;
    // 0x18aaec: 0x0  nop
    ctx->pc = 0x18aaecu;
    // NOP
label_18aaf0:
    // 0x18aaf0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18aaf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18aaf8:
    // 0x18aaf8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18aafc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18ab00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab04: 0xacc30130  sw          $v1, 0x130($a2)
    ctx->pc = 0x18ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
    // 0x18ab08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18AB08u;
    {
        const bool branch_taken_0x18ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB08u;
        // 0x18ab0c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab08) {
            ctx->pc = 0x18AB48u;
            goto label_18ab48;
        }
    }
    ctx->pc = 0x18AB10u;
label_18ab10:
    // 0x18ab10: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AB10u;
    {
        const bool branch_taken_0x18ab10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18ab10) {
            ctx->pc = 0x18AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB10u;
            // 0x18ab14: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB30u;
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AB18u;
    // 0x18ab18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ab1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab20: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18ab24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ab28: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x18ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x18ab2c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_18ab30:
    // 0x18ab30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18ab34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18ab38:
    // 0x18ab38: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18ab3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab40: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x18ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x18ab44: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x18ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_18ab48:
    // 0x18ab48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ab48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ab4c:
    // 0x18ab4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ab4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ab50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ab50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ab54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18ab54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ab58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ab58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ab5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18ab5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x18AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB60u;
        // 0x18ab64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AB68u;
}

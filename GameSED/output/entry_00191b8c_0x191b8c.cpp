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

// Function: entry_00191b8c
// Address: 0x191b8c - 0x191c70
void entry_00191b8c_0x191b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191b8c_0x191b8c");
#endif

    switch (ctx->pc) {
        case 0x191b94u: goto label_191b94;
        default: break;
    }

    ctx->pc = 0x191b8cu;

    // 0x191b8c: 0xc061422  jal         func_185088
    ctx->pc = 0x191B8Cu;
    SET_GPR_U32(ctx, 31, 0x191B94u);
    ctx->pc = 0x191B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B8Cu;
    // 0x191b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x191B8Cu, 0x191B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B94u;
label_191b94:
    // 0x191b94: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x191b98: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x191b9c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x191ba0: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x191ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x191ba4: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x191ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x191ba8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x191ba8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x191bac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x191bacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x191bb0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x191bb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x191bb4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x191bb4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x191bb8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x191bb8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x191bbc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x191bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x191bc0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x191bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x191bc4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x191bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x191bc8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x191bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x191bcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x191bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191bd0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x191bd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x191bd4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x191bd4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x191bd8: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x191bd8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x191bdc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x191bdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x191be0: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x191be0u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x191be4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x191be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x191be8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x191be8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x191bec: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x191becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x191bf0: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x191bf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x191bf4: 0x4a0003bf  vwaitq
    ctx->pc = 0x191bf4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191bf8: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x191bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x191bfc: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x191bfcu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x191c00: 0x4a0002ff  vnop
    ctx->pc = 0x191c00u;
    // NOP operation, no action needed for VU0
    // 0x191c04: 0x4a0002ff  vnop
    ctx->pc = 0x191c04u;
    // NOP operation, no action needed for VU0
    // 0x191c08: 0x4a0002ff  vnop
    ctx->pc = 0x191c08u;
    // NOP operation, no action needed for VU0
    // 0x191c0c: 0x4a0002ff  vnop
    ctx->pc = 0x191c0cu;
    // NOP operation, no action needed for VU0
    // 0x191c10: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x191c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x191c14: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x191c14u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x191c18: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x191C18u;
    {
        const bool branch_taken_0x191c18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x191C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C18u;
        // 0x191c1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c18) {
            ctx->pc = 0x191CA4u;
            return;
        }
    }
    ctx->pc = 0x191C20u;
    // 0x191c20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x191c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x191c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191c2c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x191c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x191c30: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x191C30u;
    {
        const bool branch_taken_0x191c30 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x191C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C30u;
        // 0x191c34: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c30) {
            ctx->pc = 0x191C70u;
            return;
        }
    }
    ctx->pc = 0x191C38u;
    // 0x191c38: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x191c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x191c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c40: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x191c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x191c44: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x191c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x191c48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x191c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191c4c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x191c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x191c50: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x191c50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x191c54: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x191c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x191c58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x191c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191c5c: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x191c5cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x191c60: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x191c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191C64u;
    {
        const bool branch_taken_0x191c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C64u;
        // 0x191c68: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c64) {
            ctx->pc = 0x191C78u;
            return;
        }
    }
    ctx->pc = 0x191C6Cu;
    // 0x191c6c: 0x0  nop
    ctx->pc = 0x191c6cu;
    // NOP
    ctx->pc = 0x191c70u;
}

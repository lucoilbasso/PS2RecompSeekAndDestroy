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

// Function: DrawSort__9ApcShadowP8WcEntity
// Address: 0x16b548 - 0x16b6c4
void DrawSort__9ApcShadowP8WcEntity_0x16b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9ApcShadowP8WcEntity_0x16b548");
#endif

    switch (ctx->pc) {
        case 0x16b5b0u: goto label_16b5b0;
        case 0x16b5b8u: goto label_16b5b8;
        default: break;
    }

    ctx->pc = 0x16b548u;

    // 0x16b548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b54c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16b550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b554: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16b558: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16b558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b55c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b560: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16b564: 0x94c20150  lhu         $v0, 0x150($a2)
    ctx->pc = 0x16b564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x16b568: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x16b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x16b56c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x16B56Cu;
    {
        const bool branch_taken_0x16b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B56Cu;
        // 0x16b570: 0x8cb2015c  lw          $s2, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b56c) {
            ctx->pc = 0x16B6ACu;
            goto label_16b6ac;
        }
    }
    ctx->pc = 0x16B574u;
    // 0x16b574: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16b574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b578: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x16b57c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B57Cu;
    {
        const bool branch_taken_0x16b57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B57Cu;
        // 0x16b580: 0x24d00020  addiu       $s0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b57c) {
            ctx->pc = 0x16B598u;
            goto label_16b598;
        }
    }
    ctx->pc = 0x16B584u;
    // 0x16b584: 0x8ca201e0  lw          $v0, 0x1E0($a1)
    ctx->pc = 0x16b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 480)));
    // 0x16b588: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16b588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x16b58c: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x16B58Cu;
    {
        const bool branch_taken_0x16b58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B58Cu;
        // 0x16b590: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b58c) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B594u;
    // 0x16b594: 0x24d00020  addiu       $s0, $a2, 0x20
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_16b598:
    // 0x16b598: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16b598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16b59c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16b5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B5A0u;
    {
        const bool branch_taken_0x16b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5a0) {
            ctx->pc = 0x16B5B0u;
            goto label_16b5b0;
        }
    }
    ctx->pc = 0x16B5A8u;
    // 0x16b5a8: 0xc061920  jal         func_186480
    ctx->pc = 0x16B5A8u;
    SET_GPR_U32(ctx, 31, 0x16B5B0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16B5A8u, 0x16B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5B0u;
label_16b5b0:
    // 0x16b5b0: 0xc061422  jal         func_185088
    ctx->pc = 0x16B5B0u;
    SET_GPR_U32(ctx, 31, 0x16B5B8u);
    ctx->pc = 0x16B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5B0u;
    // 0x16b5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16B5B0u, 0x16B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5B8u;
label_16b5b8:
    // 0x16b5b8: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x16b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x16b5bc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x16b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x16b5c0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x16b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x16b5c4: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x16b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x16b5c8: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x16b5cc: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x16b5ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b5d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b5d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x16b5d4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x16b5d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x16b5d8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x16b5d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x16b5dc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x16b5dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x16b5e0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b5e4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b5e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b5e8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b5e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b5ec: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16b5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b5f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b5f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b5f4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16b5f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16b5f8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16b5f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16b5fc: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x16b5fcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16b600: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16b600u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16b604: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x16b604u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x16b608: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b60c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b60cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b610: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b614: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x16b614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x16b618: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b618u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b61c: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x16b61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b620: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16b620u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x16b624: 0x4a0002ff  vnop
    ctx->pc = 0x16b624u;
    // NOP operation, no action needed for VU0
    // 0x16b628: 0x4a0002ff  vnop
    ctx->pc = 0x16b628u;
    // NOP operation, no action needed for VU0
    // 0x16b62c: 0x4a0002ff  vnop
    ctx->pc = 0x16b62cu;
    // NOP operation, no action needed for VU0
    // 0x16b630: 0x4a0002ff  vnop
    ctx->pc = 0x16b630u;
    // NOP operation, no action needed for VU0
    // 0x16b634: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x16b634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16b638: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x16b638u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x16b63c: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16B63Cu;
    {
        const bool branch_taken_0x16b63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B63Cu;
        // 0x16b640: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b63c) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B644u;
    // 0x16b644: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x16b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b648: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x16b648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b64c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16b650: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x16b650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x16b654: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x16B654u;
    {
        const bool branch_taken_0x16b654 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x16B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B654u;
        // 0x16b658: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b654) {
            ctx->pc = 0x16B690u;
            goto label_16b690;
        }
    }
    ctx->pc = 0x16B65Cu;
    // 0x16b65c: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x16b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16b660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b664: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x16b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16b668: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b66c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x16b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b670: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x16b670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x16b674: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x16b678: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x16b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16b67c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b680: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x16b680u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x16b684: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x16b684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x16b688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B688u;
    {
        const bool branch_taken_0x16b688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B688u;
        // 0x16b68c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b688) {
            ctx->pc = 0x16B698u;
            goto label_16b698;
        }
    }
    ctx->pc = 0x16B690u;
label_16b690:
    // 0x16b690: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16b694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16b698:
    // 0x16b698: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16b69c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x16b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x16b6a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6a4: 0xad030130  sw          $v1, 0x130($t0)
    ctx->pc = 0x16b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 3));
    // 0x16b6a8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x16b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_16b6ac:
    // 0x16b6ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16b6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16b6b0:
    // 0x16b6b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16b6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b6b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16b6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b6b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6BCu;
        // 0x16b6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B6C4u;
}

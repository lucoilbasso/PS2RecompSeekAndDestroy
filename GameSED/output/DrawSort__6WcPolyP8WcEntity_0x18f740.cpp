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

// Function: DrawSort__6WcPolyP8WcEntity
// Address: 0x18f740 - 0x18f924
void DrawSort__6WcPolyP8WcEntity_0x18f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__6WcPolyP8WcEntity_0x18f740");
#endif

    switch (ctx->pc) {
        case 0x18f7acu: goto label_18f7ac;
        case 0x18f7b4u: goto label_18f7b4;
        default: break;
    }

    ctx->pc = 0x18f740u;

    // 0x18f740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f744: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18f748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f74c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x18f750: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x18f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18f754: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x18f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x18f758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f75c: 0x96030150  lhu         $v1, 0x150($s0)
    ctx->pc = 0x18f75cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x18f760: 0x8cb1015c  lw          $s1, 0x15C($a1)
    ctx->pc = 0x18f760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x18f764: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x18f764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x18f768: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x18F768u;
    {
        const bool branch_taken_0x18f768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F768u;
        // 0x18f76c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f768) {
            ctx->pc = 0x18F908u;
            goto label_18f908;
        }
    }
    ctx->pc = 0x18F770u;
    // 0x18f770: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f774: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18f778: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x18F778u;
    {
        const bool branch_taken_0x18f778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F778u;
        // 0x18f77c: 0x96020158  lhu         $v0, 0x158($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f778) {
            ctx->pc = 0x18F8C8u;
            goto label_18f8c8;
        }
    }
    ctx->pc = 0x18F780u;
    // 0x18f780: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x18f780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x18f784: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x18f784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18f788: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x18f788u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18f78c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18f78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18f790: 0xa6020158  sh          $v0, 0x158($s0)
    ctx->pc = 0x18f790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f794: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x18f794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x18f798: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x18f798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x18f79c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F79Cu;
    {
        const bool branch_taken_0x18f79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f79c) {
            ctx->pc = 0x18F7ACu;
            goto label_18f7ac;
        }
    }
    ctx->pc = 0x18F7A4u;
    // 0x18f7a4: 0xc061920  jal         func_186480
    ctx->pc = 0x18F7A4u;
    SET_GPR_U32(ctx, 31, 0x18F7ACu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18F7A4u, 0x18F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7ACu;
label_18f7ac:
    // 0x18f7ac: 0xc061422  jal         func_185088
    ctx->pc = 0x18F7ACu;
    SET_GPR_U32(ctx, 31, 0x18F7B4u);
    ctx->pc = 0x18F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7ACu;
    // 0x18f7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18F7ACu, 0x18F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7B4u;
label_18f7b4:
    // 0x18f7b4: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x18f7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x18f7b8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18f7bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18f7c0: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x18f7c4: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x18f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x18f7c8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x18f7c8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f7cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18f7ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x18f7d0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x18f7d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x18f7d4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18f7d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x18f7d8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18f7d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x18f7dc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18f7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f7e0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18f7e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f7e4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18f7e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f7e8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18f7e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18f7ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18f7ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f7f0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18f7f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18f7f4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18f7f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18f7f8: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x18f7f8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18f7fc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18f7fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18f800: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x18f800u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x18f804: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18f804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f808: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18f808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f80c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18f80cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f810: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x18f810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18f814: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f814u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f818: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x18f818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18f81c: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f81cu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x18f820: 0x4a0002ff  vnop
    ctx->pc = 0x18f820u;
    // NOP operation, no action needed for VU0
    // 0x18f824: 0x4a0002ff  vnop
    ctx->pc = 0x18f824u;
    // NOP operation, no action needed for VU0
    // 0x18f828: 0x4a0002ff  vnop
    ctx->pc = 0x18f828u;
    // NOP operation, no action needed for VU0
    // 0x18f82c: 0x4a0002ff  vnop
    ctx->pc = 0x18f82cu;
    // NOP operation, no action needed for VU0
    // 0x18f830: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x18f830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18f834: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x18f834u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x18f838: 0x54800034  bnel        $a0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x18F838u;
    {
        const bool branch_taken_0x18f838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f838) {
            ctx->pc = 0x18F83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F838u;
            // 0x18f83c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F90Cu;
            goto label_18f90c;
        }
    }
    ctx->pc = 0x18F840u;
    // 0x18f840: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F840u;
    {
        const bool branch_taken_0x18f840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F840u;
        // 0x18f844: 0x26230034  addiu       $v1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f840) {
            ctx->pc = 0x18F858u;
            goto label_18f858;
        }
    }
    ctx->pc = 0x18F848u;
    // 0x18f848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f84c: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x18f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x18f850: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18F850u;
    {
        const bool branch_taken_0x18f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F850u;
        // 0x18f854: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f850) {
            ctx->pc = 0x18F908u;
            goto label_18f908;
        }
    }
    ctx->pc = 0x18F858u;
label_18f858:
    // 0x18f858: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f85c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18f85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f860: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f864: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x18f864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x18f868: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x18F868u;
    {
        const bool branch_taken_0x18f868 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F868u;
        // 0x18f86c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f868) {
            ctx->pc = 0x18F8A8u;
            goto label_18f8a8;
        }
    }
    ctx->pc = 0x18F870u;
    // 0x18f870: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18f874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f878: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x18f878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18f87c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18f880: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f884: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x18f888: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x18f888u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x18f88c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18f890: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18f890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f894: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x18f894u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x18f898: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x18f898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x18f89c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F89Cu;
    {
        const bool branch_taken_0x18f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F89Cu;
        // 0x18f8a0: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f89c) {
            ctx->pc = 0x18F8B0u;
            goto label_18f8b0;
        }
    }
    ctx->pc = 0x18F8A4u;
    // 0x18f8a4: 0x0  nop
    ctx->pc = 0x18f8a4u;
    // NOP
label_18f8a8:
    // 0x18f8a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18f8ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18f8b0:
    // 0x18f8b0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18f8b4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18f8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f8bc: 0xace30130  sw          $v1, 0x130($a3)
    ctx->pc = 0x18f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 3));
    // 0x18f8c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18F8C0u;
    {
        const bool branch_taken_0x18f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C0u;
        // 0x18f8c4: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8c0) {
            ctx->pc = 0x18F908u;
            goto label_18f908;
        }
    }
    ctx->pc = 0x18F8C8u;
label_18f8c8:
    // 0x18f8c8: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x18f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x18f8cc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x18f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x18f8d0: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F8D0u;
    {
        const bool branch_taken_0x18f8d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8D0u;
        // 0x18f8d4: 0xa6020158  sh          $v0, 0x158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8d0) {
            ctx->pc = 0x18F8ECu;
            goto label_18f8ec;
        }
    }
    ctx->pc = 0x18F8D8u;
    // 0x18f8d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18f8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f8e0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18f8e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f8e8: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x18f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_18f8ec:
    // 0x18f8ec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x18f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x18f8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18f8f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18f8f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18f8fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f900: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x18f900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x18f904: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x18f904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_18f908:
    // 0x18f908: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18f908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18f90c:
    // 0x18f90c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18f90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f910: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18f910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f914: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x18f914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18f918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f91c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F91Cu;
        // 0x18f920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F924u;
}

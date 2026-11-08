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

// Function: DrawSort__7WcBoardP8WcEntity
// Address: 0x1904d8 - 0x1906a8
void DrawSort__7WcBoardP8WcEntity_0x1904d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__7WcBoardP8WcEntity_0x1904d8");
#endif

    switch (ctx->pc) {
        case 0x19056cu: goto label_19056c;
        case 0x190574u: goto label_190574;
        default: break;
    }

    ctx->pc = 0x1904d8u;

    // 0x1904d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1904dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1904dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1904e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1904e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1904e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1904e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1904e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1904ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1904ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1904f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1904f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1904f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1904f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1904f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1904f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1904fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1904fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x190500: 0x8cb2015c  lw          $s2, 0x15C($a1)
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x190504: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x190504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x190508: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190508u;
    {
        const bool branch_taken_0x190508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190508u;
        // 0x19050c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190508) {
            ctx->pc = 0x190520u;
            goto label_190520;
        }
    }
    ctx->pc = 0x190510u;
    // 0x190510: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x190510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x190514: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x190514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x190518: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x190518u;
    {
        const bool branch_taken_0x190518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190518) {
            ctx->pc = 0x19051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190518u;
            // 0x19051c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            goto label_190688;
        }
    }
    ctx->pc = 0x190520u;
label_190520:
    // 0x190520: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190524: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x190528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x190528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19052c: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x19052Cu;
    {
        const bool branch_taken_0x19052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19052c) {
            ctx->pc = 0x190530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19052Cu;
            // 0x190530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            goto label_190688;
        }
    }
    ctx->pc = 0x190534u;
    // 0x190534: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190538: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x190538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19053c: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x19053Cu;
    {
        const bool branch_taken_0x19053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19053c) {
            ctx->pc = 0x190540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19053Cu;
            // 0x190540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            goto label_190688;
        }
    }
    ctx->pc = 0x190544u;
    // 0x190544: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x190544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x190548: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x190548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x19054c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x19054cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x190550: 0x26130210  addiu       $s3, $s0, 0x210
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x190554: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x190554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x190558: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x190558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x19055c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19055Cu;
    {
        const bool branch_taken_0x19055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19055Cu;
        // 0x190560: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19055c) {
            ctx->pc = 0x19056Cu;
            goto label_19056c;
        }
    }
    ctx->pc = 0x190564u;
    // 0x190564: 0xc061920  jal         func_186480
    ctx->pc = 0x190564u;
    SET_GPR_U32(ctx, 31, 0x19056Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x190564u, 0x19056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19056Cu;
label_19056c:
    // 0x19056c: 0xc061422  jal         func_185088
    ctx->pc = 0x19056Cu;
    SET_GPR_U32(ctx, 31, 0x190574u);
    ctx->pc = 0x190570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19056Cu;
    // 0x190570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x19056Cu, 0x190574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190574u;
label_190574:
    // 0x190574: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x190574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x190578: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x190578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19057c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x190580: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x190580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x190584: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x190588: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x190588u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19058c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19058cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x190590: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x190590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x190594: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x190594u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x190598: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x190598u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x19059c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19059cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1905a0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1905a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1905a4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1905a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1905a8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1905a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1905ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1905acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1905b0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1905b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1905b4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1905b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1905b8: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1905b8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1905bc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1905bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1905c0: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x1905c0u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x1905c4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1905c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1905c8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1905c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1905cc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1905ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1905d0: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x1905d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1905d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1905d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1905d8: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1905d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1905dc: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1905dcu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1905e0: 0x4a0002ff  vnop
    ctx->pc = 0x1905e0u;
    // NOP operation, no action needed for VU0
    // 0x1905e4: 0x4a0002ff  vnop
    ctx->pc = 0x1905e4u;
    // NOP operation, no action needed for VU0
    // 0x1905e8: 0x4a0002ff  vnop
    ctx->pc = 0x1905e8u;
    // NOP operation, no action needed for VU0
    // 0x1905ec: 0x4a0002ff  vnop
    ctx->pc = 0x1905ecu;
    // NOP operation, no action needed for VU0
    // 0x1905f0: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x1905f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1905f4: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x1905f4u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1905f8: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1905F8u;
    {
        const bool branch_taken_0x1905f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1905f8) {
            ctx->pc = 0x1905FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1905F8u;
            // 0x1905fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            goto label_190688;
        }
    }
    ctx->pc = 0x190600u;
    // 0x190600: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x190600u;
    {
        const bool branch_taken_0x190600 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x190604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190600u;
        // 0x190604: 0x26430034  addiu       $v1, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190600) {
            ctx->pc = 0x190618u;
            goto label_190618;
        }
    }
    ctx->pc = 0x190608u;
    // 0x190608: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19060c: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x19060cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x190610: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x190610u;
    {
        const bool branch_taken_0x190610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190610u;
        // 0x190614: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190610) {
            ctx->pc = 0x190684u;
            goto label_190684;
        }
    }
    ctx->pc = 0x190618u;
label_190618:
    // 0x190618: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19061c: 0xc4c00218  lwc1        $f0, 0x218($a2)
    ctx->pc = 0x19061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190620: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190624: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x190624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x190628: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x190628u;
    {
        const bool branch_taken_0x190628 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190628u;
        // 0x19062c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190628) {
            ctx->pc = 0x190668u;
            goto label_190668;
        }
    }
    ctx->pc = 0x190630u;
    // 0x190630: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x190630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x190634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190638: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x190638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19063c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x190640: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190644: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x190648: 0x671807  srav        $v1, $a3, $v1
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x19064c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x190650: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190654: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x190654u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x190658: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x190658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19065c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19065Cu;
    {
        const bool branch_taken_0x19065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19065Cu;
        // 0x190660: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19065c) {
            ctx->pc = 0x190670u;
            goto label_190670;
        }
    }
    ctx->pc = 0x190664u;
    // 0x190664: 0x0  nop
    ctx->pc = 0x190664u;
    // NOP
label_190668:
    // 0x190668: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x190668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19066c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19066cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_190670:
    // 0x190670: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x190670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x190674: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x190678: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19067c: 0xacc30130  sw          $v1, 0x130($a2)
    ctx->pc = 0x19067cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
    // 0x190680: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x190680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_190684:
    // 0x190684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190688:
    // 0x190688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19068c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19068cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190690: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x190690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x190694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190698: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x190698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19069c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1906a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1906A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1906A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906A0u;
        // 0x1906a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1906A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1906A8u;
}

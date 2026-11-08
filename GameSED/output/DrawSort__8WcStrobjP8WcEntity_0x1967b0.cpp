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

// Function: DrawSort__8WcStrobjP8WcEntity
// Address: 0x1967b0 - 0x196b90
void DrawSort__8WcStrobjP8WcEntity_0x1967b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__8WcStrobjP8WcEntity_0x1967b0");
#endif

    switch (ctx->pc) {
        case 0x196818u: goto label_196818;
        case 0x196824u: goto label_196824;
        case 0x196838u: goto label_196838;
        case 0x196854u: goto label_196854;
        case 0x196860u: goto label_196860;
        default: break;
    }

    ctx->pc = 0x1967b0u;

    // 0x1967b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1967b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1967b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1967b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1967b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1967bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1967c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1967c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1967c4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1967c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1967c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1967cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1967ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1967d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1967d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1967d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1967d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1967d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1967d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1967dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1967dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1967e0: 0x8ed5015c  lw          $s5, 0x15C($s6)
    ctx->pc = 0x1967e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x1967e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1967e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1967e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1967e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1967ec: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1967ECu;
    {
        const bool branch_taken_0x1967ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967ECu;
        // 0x1967f0: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967ec) {
            ctx->pc = 0x196B64u;
            goto label_196b64;
        }
    }
    ctx->pc = 0x1967F4u;
    // 0x1967f4: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1967f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1967f8: 0x96420150  lhu         $v0, 0x150($s2)
    ctx->pc = 0x1967f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1967fc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1967fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x196800: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x196800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x196804: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x196808: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196808u;
    {
        const bool branch_taken_0x196808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0x2b82b  sltu        $s7, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196808) {
            ctx->pc = 0x196818u;
            goto label_196818;
        }
    }
    ctx->pc = 0x196810u;
    // 0x196810: 0xc061920  jal         func_186480
    ctx->pc = 0x196810u;
    SET_GPR_U32(ctx, 31, 0x196818u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x196810u, 0x196818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196818u;
label_196818:
    // 0x196818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19681c: 0xc061422  jal         func_185088
    ctx->pc = 0x19681Cu;
    SET_GPR_U32(ctx, 31, 0x196824u);
    ctx->pc = 0x196820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19681Cu;
    // 0x196820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x19681Cu, 0x196824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196824u;
label_196824:
    // 0x196824: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x196824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x196828: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x196828u;
    {
        const bool branch_taken_0x196828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196828u;
        // 0x19682c: 0x8e5101b4  lw          $s1, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196828) {
            ctx->pc = 0x196870u;
            goto label_196870;
        }
    }
    ctx->pc = 0x196830u;
    // 0x196830: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x196830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x196834: 0x0  nop
    ctx->pc = 0x196834u;
    // NOP
label_196838:
    // 0x196838: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x19683c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19683cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x196840: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x196840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x196844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196844u;
    {
        const bool branch_taken_0x196844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196844u;
        // 0x196848: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196844) {
            ctx->pc = 0x196854u;
            goto label_196854;
        }
    }
    ctx->pc = 0x19684Cu;
    // 0x19684c: 0xc061920  jal         func_186480
    ctx->pc = 0x19684Cu;
    SET_GPR_U32(ctx, 31, 0x196854u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x19684Cu, 0x196854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196854u;
label_196854:
    // 0x196854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196858: 0xc061422  jal         func_185088
    ctx->pc = 0x196858u;
    SET_GPR_U32(ctx, 31, 0x196860u);
    ctx->pc = 0x19685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196858u;
    // 0x19685c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x196858u, 0x196860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196860u;
label_196860:
    // 0x196860: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x196864: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x196864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196868: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x196868u;
    {
        const bool branch_taken_0x196868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196868) {
            ctx->pc = 0x19686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196868u;
            // 0x19686c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196838;
        }
    }
    ctx->pc = 0x196870u;
label_196870:
    // 0x196870: 0x96820150  lhu         $v0, 0x150($s4)
    ctx->pc = 0x196870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x196874: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x196874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x196878: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x196878u;
    {
        const bool branch_taken_0x196878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196878) {
            ctx->pc = 0x19687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196878u;
            // 0x19687c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196950u;
            goto label_196950;
        }
    }
    ctx->pc = 0x196880u;
    // 0x196880: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x196884: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x196884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x196888: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x196888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19688c: 0x26880110  addiu       $t0, $s4, 0x110
    ctx->pc = 0x19688cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x196890: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x196890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
    // 0x196894: 0x24c6ebf0  addiu       $a2, $a2, -0x1410
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962160));
    // 0x196898: 0x24a5ec30  addiu       $a1, $a1, -0x13D0
    ctx->pc = 0x196898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962224));
    // 0x19689c: 0x264301c0  addiu       $v1, $s2, 0x1C0
    ctx->pc = 0x19689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x1968a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1968a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1968a4: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x1968a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1968a8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1968a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1968ac: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x1968acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1968b0: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x1968b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1968b4: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x1968b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1968b8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1968b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1968bc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1968bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1968c0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1968c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1968c4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1968c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1968c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1968c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1968cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1968ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1968d0: 0x4a414240  vaddx.z     $vf9, $vf8, $vf1x
    ctx->pc = 0x1968d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1968d4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1968d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1968d8: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x1968d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1968dc: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x1968dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1968e0: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x1968e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1968e4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1968e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1968e8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1968e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1968ec: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1968ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1968f0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1968f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1968f4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1968f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1968f8: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x1968f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1968fc: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1968fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x196900: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x196900u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x196904: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x196904u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x196908: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x196908u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x19690c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19690cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x196910: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x196910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x196914: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x196914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x196918: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x196918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x19691c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19691cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196920: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x196920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x196924: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x196924u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x196928: 0x4a0002ff  vnop
    ctx->pc = 0x196928u;
    // NOP operation, no action needed for VU0
    // 0x19692c: 0x4a0002ff  vnop
    ctx->pc = 0x19692cu;
    // NOP operation, no action needed for VU0
    // 0x196930: 0x4a0002ff  vnop
    ctx->pc = 0x196930u;
    // NOP operation, no action needed for VU0
    // 0x196934: 0x4a0002ff  vnop
    ctx->pc = 0x196934u;
    // NOP operation, no action needed for VU0
    // 0x196938: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x196938u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19693c: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x19693cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x196940: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x196944: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x196944u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x196948: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x196948u;
    {
        const bool branch_taken_0x196948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196948u;
        // 0x19694c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196948) {
            ctx->pc = 0x196B68u;
            goto label_196b68;
        }
    }
    ctx->pc = 0x196950u;
label_196950:
    // 0x196950: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x196954: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x196954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x196958: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x196958u;
    {
        const bool branch_taken_0x196958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196958u;
        // 0x19695c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196958) {
            ctx->pc = 0x196B68u;
            goto label_196b68;
        }
    }
    ctx->pc = 0x196960u;
    // 0x196960: 0x26870110  addiu       $a3, $s4, 0x110
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x196964: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x196964u;
    {
        const bool branch_taken_0x196964 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x196968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196964u;
        // 0x196968: 0xc6800190  lwc1        $f0, 0x190($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x196964) {
            ctx->pc = 0x196970u;
            goto label_196970;
        }
    }
    ctx->pc = 0x19696Cu;
    // 0x19696c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19696cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_196970:
    // 0x196970: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x196970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x196974: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x196974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x196978: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x19697c: 0x24c6eb70  addiu       $a2, $a2, -0x1490
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962032));
    // 0x196980: 0x24a5ebf0  addiu       $a1, $a1, -0x1410
    ctx->pc = 0x196980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
    // 0x196984: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x196984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    // 0x196988: 0x264301c0  addiu       $v1, $s2, 0x1C0
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x19698c: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x19698cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x196990: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x196990u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x196994: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x196994u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x196998: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x196998u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x19699c: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x19699cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1969a0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1969a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969a4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1969a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969a8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1969a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969ac: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1969acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1969b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1969b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1969b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1969b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1969b8: 0x4a414240  vaddx.z     $vf9, $vf8, $vf1x
    ctx->pc = 0x1969b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1969bc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1969bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1969c0: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x1969c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1969c4: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1969c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1969c8: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x1969c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1969cc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1969ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969d0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1969d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969d4: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1969d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969d8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1969d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1969dc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1969dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1969e0: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1969e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1969e4: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1969e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1969e8: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1969e8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1969ec: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1969ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1969f0: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x1969f0u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x1969f4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1969f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969f8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1969f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1969fc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1969fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x196a00: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x196a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x196a04: 0x4a0003bf  vwaitq
    ctx->pc = 0x196a04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196a08: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x196a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x196a0c: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x196a0cu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x196a10: 0x4a0002ff  vnop
    ctx->pc = 0x196a10u;
    // NOP operation, no action needed for VU0
    // 0x196a14: 0x4a0002ff  vnop
    ctx->pc = 0x196a14u;
    // NOP operation, no action needed for VU0
    // 0x196a18: 0x4a0002ff  vnop
    ctx->pc = 0x196a18u;
    // NOP operation, no action needed for VU0
    // 0x196a1c: 0x4a0002ff  vnop
    ctx->pc = 0x196a1cu;
    // NOP operation, no action needed for VU0
    // 0x196a20: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x196a20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x196a24: 0x48469000  cfc2.ni     $a2, $vi18
    ctx->pc = 0x196a24u;
    SET_GPR_U32(ctx, 6, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x196a28: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x196a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x196a2c: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x196a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x196a30: 0x8ec50164  lw          $a1, 0x164($s6)
    ctx->pc = 0x196a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 356)));
    // 0x196a34: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x196a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x196a38: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x196a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x196a3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x196A3Cu;
    {
        const bool branch_taken_0x196a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a3c) {
            ctx->pc = 0x196A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196A3Cu;
            // 0x196a40: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196A6Cu;
            goto label_196a6c;
        }
    }
    ctx->pc = 0x196A44u;
    // 0x196a44: 0xc4a20174  lwc1        $f2, 0x174($a1)
    ctx->pc = 0x196a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196a48: 0xc4a00170  lwc1        $f0, 0x170($a1)
    ctx->pc = 0x196a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196a4c: 0xc78385c4  lwc1        $f3, -0x7A3C($gp)
    ctx->pc = 0x196a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196a50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x196a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x196a54: 0xc64101cc  lwc1        $f1, 0x1CC($s2)
    ctx->pc = 0x196a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196a58: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x196a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x196a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x196a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196a60: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x196A60u;
    {
        const bool branch_taken_0x196a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A60u;
        // 0x196a64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a60) {
            ctx->pc = 0x196B68u;
            goto label_196b68;
        }
    }
    ctx->pc = 0x196A68u;
    // 0x196a68: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x196a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_196a6c:
    // 0x196a6c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x196a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x196a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x196a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x196a74: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x196A74u;
    {
        const bool branch_taken_0x196a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196a74) {
            ctx->pc = 0x196AD4u;
            goto label_196ad4;
        }
    }
    ctx->pc = 0x196A7Cu;
    // 0x196a7c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x196A7Cu;
    {
        const bool branch_taken_0x196a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a7c) {
            ctx->pc = 0x196AD4u;
            goto label_196ad4;
        }
    }
    ctx->pc = 0x196A84u;
    // 0x196a84: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x196a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196a88: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x196a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x196a8c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x196a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x196a90: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x196a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x196a94: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x196a94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x196a98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x196a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196a9c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x196aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196aa4: 0xc6800190  lwc1        $f0, 0x190($s4)
    ctx->pc = 0x196aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196aa8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x196aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x196aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196ab0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x196ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196ab4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x196AB4u;
    {
        const bool branch_taken_0x196ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AB4u;
        // 0x196ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ab4) {
            ctx->pc = 0x196B68u;
            goto label_196b68;
        }
    }
    ctx->pc = 0x196ABCu;
    // 0x196abc: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x196abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x196ac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196AC0u;
    {
        const bool branch_taken_0x196ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ac0) {
            ctx->pc = 0x196AD4u;
            goto label_196ad4;
        }
    }
    ctx->pc = 0x196AC8u;
    // 0x196ac8: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x196acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196ad0: 0xe64001c8  swc1        $f0, 0x1C8($s2)
    ctx->pc = 0x196ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 456), bits); }
label_196ad4:
    // 0x196ad4: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x196AD4u;
    {
        const bool branch_taken_0x196ad4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AD4u;
        // 0x196ad8: 0x26a30034  addiu       $v1, $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ad4) {
            ctx->pc = 0x196AF0u;
            goto label_196af0;
        }
    }
    ctx->pc = 0x196ADCu;
    // 0x196adc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196ae0: 0xae420130  sw          $v0, 0x130($s2)
    ctx->pc = 0x196ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 2));
    // 0x196ae4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x196AE4u;
    {
        const bool branch_taken_0x196ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AE4u;
        // 0x196ae8: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ae4) {
            ctx->pc = 0x196B64u;
            goto label_196b64;
        }
    }
    ctx->pc = 0x196AECu;
    // 0x196aec: 0x0  nop
    ctx->pc = 0x196aecu;
    // NOP
label_196af0:
    // 0x196af0: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x196af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x196af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196af8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x196af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196afc: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x196afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x196b00: 0x2443fff4  addiu       $v1, $v0, -0xC
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x196b04: 0x2447fffe  addiu       $a3, $v0, -0x2
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x196b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x196b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x196b14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x196b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x196b18: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x196B18u;
    {
        const bool branch_taken_0x196b18 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x196B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B18u;
        // 0x196b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b18) {
            ctx->pc = 0x196B48u;
            goto label_196b48;
        }
    }
    ctx->pc = 0x196B20u;
    // 0x196b20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196b24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x196b28: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x196b2c: 0x451007  srav        $v0, $a1, $v0
    ctx->pc = 0x196b2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x196b30: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x196b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x196b34: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x196b34u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x196b38: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x196b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196B3Cu;
    {
        const bool branch_taken_0x196b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B3Cu;
        // 0x196b40: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b3c) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196B44u;
    // 0x196b44: 0x0  nop
    ctx->pc = 0x196b44u;
    // NOP
label_196b48:
    // 0x196b48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x196b4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_196b50:
    // 0x196b50: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x196b54: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x196b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x196b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196b5c: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x196b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x196b60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x196b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_196b64:
    // 0x196b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196b68:
    // 0x196b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196b6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196b70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x196b70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196b78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x196b78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x196b7c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x196b7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196b80: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x196b80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x196b84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196b88: 0x3e00008  jr          $ra
    ctx->pc = 0x196B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B88u;
        // 0x196b8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196B90u;
}

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

// Function: sMotionGhostCopy__FP8WcEntityT0P9FVector32
// Address: 0x13a7c8 - 0x13a8f4
void sMotionGhostCopy__FP8WcEntityT0P9FVector32_0x13a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sMotionGhostCopy__FP8WcEntityT0P9FVector32_0x13a7c8");
#endif

    switch (ctx->pc) {
        case 0x13a838u: goto label_13a838;
        case 0x13a85cu: goto label_13a85c;
        case 0x13a894u: goto label_13a894;
        case 0x13a8b0u: goto label_13a8b0;
        case 0x13a8c0u: goto label_13a8c0;
        case 0x13a8d0u: goto label_13a8d0;
        default: break;
    }

    ctx->pc = 0x13a7c8u;

label_13a7c8:
    // 0x13a7c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13a7cc: 0x24030846  addiu       $v1, $zero, 0x846
    ctx->pc = 0x13a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x13a7d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a7d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13a7d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13a7dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13a7dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13a7e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a7e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a7ec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13a7f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13a7f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13a7f8: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x13a7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13a7fc: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13A7FCu;
    {
        const bool branch_taken_0x13a7fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7FCu;
        // 0x13a800: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7fc) {
            ctx->pc = 0x13A86Cu;
            goto label_13a86c;
        }
    }
    ctx->pc = 0x13A804u;
    // 0x13a804: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13a808: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13a80c: 0x14440017  bne         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13A80Cu;
    {
        const bool branch_taken_0x13a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x13a80c) {
            ctx->pc = 0x13A86Cu;
            goto label_13a86c;
        }
    }
    ctx->pc = 0x13A814u;
    // 0x13a814: 0x8e6301b0  lw          $v1, 0x1B0($s3)
    ctx->pc = 0x13a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x13a818: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x13a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x13a81c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13A81Cu;
    {
        const bool branch_taken_0x13a81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a81c) {
            ctx->pc = 0x13A86Cu;
            goto label_13a86c;
        }
    }
    ctx->pc = 0x13A824u;
    // 0x13a824: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13a824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a828: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x13a828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a82c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13A82Cu;
    {
        const bool branch_taken_0x13a82c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A82Cu;
        // 0x13a830: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a82c) {
            ctx->pc = 0x13A86Cu;
            goto label_13a86c;
        }
    }
    ctx->pc = 0x13A834u;
    // 0x13a834: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x13a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_13a838:
    // 0x13a838: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x13a838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x13a83c: 0x8ea201b4  lw          $v0, 0x1B4($s5)
    ctx->pc = 0x13a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x13a840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a848: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13a848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13a84c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a850: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a854: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A854u;
    SET_GPR_U32(ctx, 31, 0x13A85Cu);
    ctx->pc = 0x13A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A854u;
    // 0x13a858: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    goto label_13a7c8;
    ctx->pc = 0x13A85Cu;
label_13a85c:
    // 0x13a85c: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x13a860: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13a860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a864: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x13A864u;
    {
        const bool branch_taken_0x13a864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a864) {
            ctx->pc = 0x13A868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A864u;
            // 0x13a868: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a838;
        }
    }
    ctx->pc = 0x13A86Cu;
label_13a86c:
    // 0x13a86c: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x13A86Cu;
    {
        const bool branch_taken_0x13a86c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A86Cu;
        // 0x13a870: 0x264200d0  addiu       $v0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a86c) {
            ctx->pc = 0x13A8A0u;
            goto label_13a8a0;
        }
    }
    ctx->pc = 0x13A874u;
    // 0x13a874: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13a874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a878: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x13a878u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a87c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a87cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a880: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a888: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13a888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a88c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13A88Cu;
    SET_GPR_U32(ctx, 31, 0x13A894u);
    ctx->pc = 0x13A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A88Cu;
    // 0x13a890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13A88Cu, 0x13A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A894u;
label_13a894:
    // 0x13a894: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13A894u;
    {
        const bool branch_taken_0x13a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A894u;
        // 0x13a898: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a894) {
            ctx->pc = 0x13A8B4u;
            goto label_13a8b4;
        }
    }
    ctx->pc = 0x13A89Cu;
    // 0x13a89c: 0x0  nop
    ctx->pc = 0x13a89cu;
    // NOP
label_13a8a0:
    // 0x13a8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8a4: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x13a8a8: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13A8A8u;
    SET_GPR_U32(ctx, 31, 0x13A8B0u);
    ctx->pc = 0x13A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8A8u;
    // 0x13a8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13A8A8u, 0x13A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8B0u;
label_13a8b0:
    // 0x13a8b0: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x13a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_13a8b4:
    // 0x13a8b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8b8: 0xc0618da  jal         func_186368
    ctx->pc = 0x13A8B8u;
    SET_GPR_U32(ctx, 31, 0x13A8C0u);
    ctx->pc = 0x13A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8B8u;
    // 0x13a8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13A8B8u, 0x13A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8C0u;
label_13a8c0:
    // 0x13a8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8c4: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x13a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13a8c8: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x13A8C8u;
    SET_GPR_U32(ctx, 31, 0x13A8D0u);
    ctx->pc = 0x13A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8C8u;
    // 0x13a8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x13A8C8u, 0x13A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8D0u;
label_13a8d0:
    // 0x13a8d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a8d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a8d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a8dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13a8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a8e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13a8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a8e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13a8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a8e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13A8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8ECu;
        // 0x13a8f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A8F4u;
}

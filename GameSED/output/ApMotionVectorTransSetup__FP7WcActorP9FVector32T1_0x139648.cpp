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

// Function: ApMotionVectorTransSetup__FP7WcActorP9FVector32T1
// Address: 0x139648 - 0x139770
void ApMotionVectorTransSetup__FP7WcActorP9FVector32T1_0x139648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionVectorTransSetup__FP7WcActorP9FVector32T1_0x139648");
#endif

    switch (ctx->pc) {
        case 0x139684u: goto label_139684;
        case 0x139698u: goto label_139698;
        case 0x1396acu: goto label_1396ac;
        default: break;
    }

    ctx->pc = 0x139648u;

    // 0x139648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13964c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139650: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x139650u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x139654: 0x261095a0  addiu       $s0, $s0, -0x6A60
    ctx->pc = 0x139654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940064));
    // 0x139658: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13965c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139660: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x139660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139668: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x139668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13966c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139670: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x139670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139678: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x139678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13967c: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13967Cu;
    SET_GPR_U32(ctx, 31, 0x139684u);
    ctx->pc = 0x139680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13967Cu;
    // 0x139680: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13967Cu, 0x139684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139684u;
label_139684:
    // 0x139684: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x139684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139688: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13968c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139690: 0xc06164c  jal         func_185930
    ctx->pc = 0x139690u;
    SET_GPR_U32(ctx, 31, 0x139698u);
    ctx->pc = 0x139694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139690u;
    // 0x139694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x139690u, 0x139698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139698u;
label_139698:
    // 0x139698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13969c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1396a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396a4: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1396A4u;
    SET_GPR_U32(ctx, 31, 0x1396ACu);
    ctx->pc = 0x1396A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396A4u;
    // 0x1396a8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1396A4u, 0x1396ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396ACu;
label_1396ac:
    // 0x1396ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1396acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396b0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x1396b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1396b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1396b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1396b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1396bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1396c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1396c4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1396c8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1396C8u;
    {
        const bool branch_taken_0x1396c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1396CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396C8u;
        // 0x1396cc: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396c8) {
            ctx->pc = 0x1396D8u;
            goto label_1396d8;
        }
    }
    ctx->pc = 0x1396D0u;
    // 0x1396d0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1396d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1396d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1396d8:
    // 0x1396d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1396dc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1396dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1396e0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1396e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1396e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1396e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1396e8: 0xac920010  sw          $s2, 0x10($a0)
    ctx->pc = 0x1396e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 18));
    // 0x1396ec: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1396ECu;
    {
        const bool branch_taken_0x1396ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ECu;
        // 0x1396f0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396ec) {
            ctx->pc = 0x139708u;
            goto label_139708;
        }
    }
    ctx->pc = 0x1396F4u;
    // 0x1396f4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1396f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1396f8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1396f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1396fc: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1396fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139700u;
    {
        const bool branch_taken_0x139700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139700u;
        // 0x139704: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139700) {
            ctx->pc = 0x139710u;
            goto label_139710;
        }
    }
    ctx->pc = 0x139708u;
label_139708:
    // 0x139708: 0xf8e00000  sqc2        $vf0, 0x0($a3)
    ctx->pc = 0x139708u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13970c: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x13970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_139710:
    // 0x139710: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x139710u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139714: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x139714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x139718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13971c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13971cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139720: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x139720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x139724: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x139724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x139728: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13972c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13972cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x139730: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x139730u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x139734: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x139734u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x139738: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x139738u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13973c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x13973cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x139740: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x139740u;
    {
        const bool branch_taken_0x139740 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x139744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139740u;
        // 0x139744: 0x24e30020  addiu       $v1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139740) {
            ctx->pc = 0x139750u;
            goto label_139750;
        }
    }
    ctx->pc = 0x139748u;
    // 0x139748: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x139748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13974c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13974cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_139750:
    // 0x139750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13975c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13975cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139760: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x139760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139764: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x139764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139768: 0x3e00008  jr          $ra
    ctx->pc = 0x139768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139768u;
        // 0x13976c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139770u;
}

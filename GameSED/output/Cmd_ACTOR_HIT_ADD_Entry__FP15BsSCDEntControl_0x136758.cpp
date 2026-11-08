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

// Function: Cmd_ACTOR_HIT_ADD_Entry__FP15BsSCDEntControl
// Address: 0x136758 - 0x136950
void Cmd_ACTOR_HIT_ADD_Entry__FP15BsSCDEntControl_0x136758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_HIT_ADD_Entry__FP15BsSCDEntControl_0x136758");
#endif

    switch (ctx->pc) {
        case 0x136758u: goto label_136758;
        case 0x13675cu: goto label_13675c;
        case 0x136760u: goto label_136760;
        case 0x136764u: goto label_136764;
        case 0x136768u: goto label_136768;
        case 0x13676cu: goto label_13676c;
        case 0x136770u: goto label_136770;
        case 0x136774u: goto label_136774;
        case 0x136778u: goto label_136778;
        case 0x13677cu: goto label_13677c;
        case 0x136780u: goto label_136780;
        case 0x136784u: goto label_136784;
        case 0x136788u: goto label_136788;
        case 0x13678cu: goto label_13678c;
        case 0x136790u: goto label_136790;
        case 0x136794u: goto label_136794;
        case 0x136798u: goto label_136798;
        case 0x13679cu: goto label_13679c;
        case 0x1367a0u: goto label_1367a0;
        case 0x1367a4u: goto label_1367a4;
        case 0x1367a8u: goto label_1367a8;
        case 0x1367acu: goto label_1367ac;
        case 0x1367b0u: goto label_1367b0;
        case 0x1367b4u: goto label_1367b4;
        case 0x1367b8u: goto label_1367b8;
        case 0x1367bcu: goto label_1367bc;
        case 0x1367c0u: goto label_1367c0;
        case 0x1367c4u: goto label_1367c4;
        case 0x1367c8u: goto label_1367c8;
        case 0x1367ccu: goto label_1367cc;
        case 0x1367d0u: goto label_1367d0;
        case 0x1367d4u: goto label_1367d4;
        case 0x1367d8u: goto label_1367d8;
        case 0x1367dcu: goto label_1367dc;
        case 0x1367e0u: goto label_1367e0;
        case 0x1367e4u: goto label_1367e4;
        case 0x1367e8u: goto label_1367e8;
        case 0x1367ecu: goto label_1367ec;
        case 0x1367f0u: goto label_1367f0;
        case 0x1367f4u: goto label_1367f4;
        case 0x1367f8u: goto label_1367f8;
        case 0x1367fcu: goto label_1367fc;
        case 0x136800u: goto label_136800;
        case 0x136804u: goto label_136804;
        case 0x136808u: goto label_136808;
        case 0x13680cu: goto label_13680c;
        case 0x136810u: goto label_136810;
        case 0x136814u: goto label_136814;
        case 0x136818u: goto label_136818;
        case 0x13681cu: goto label_13681c;
        case 0x136820u: goto label_136820;
        case 0x136824u: goto label_136824;
        case 0x136828u: goto label_136828;
        case 0x13682cu: goto label_13682c;
        case 0x136830u: goto label_136830;
        case 0x136834u: goto label_136834;
        case 0x136838u: goto label_136838;
        case 0x13683cu: goto label_13683c;
        case 0x136840u: goto label_136840;
        case 0x136844u: goto label_136844;
        case 0x136848u: goto label_136848;
        case 0x13684cu: goto label_13684c;
        case 0x136850u: goto label_136850;
        case 0x136854u: goto label_136854;
        case 0x136858u: goto label_136858;
        case 0x13685cu: goto label_13685c;
        case 0x136860u: goto label_136860;
        case 0x136864u: goto label_136864;
        case 0x136868u: goto label_136868;
        case 0x13686cu: goto label_13686c;
        case 0x136870u: goto label_136870;
        case 0x136874u: goto label_136874;
        case 0x136878u: goto label_136878;
        case 0x13687cu: goto label_13687c;
        case 0x136880u: goto label_136880;
        case 0x136884u: goto label_136884;
        case 0x136888u: goto label_136888;
        case 0x13688cu: goto label_13688c;
        case 0x136890u: goto label_136890;
        case 0x136894u: goto label_136894;
        case 0x136898u: goto label_136898;
        case 0x13689cu: goto label_13689c;
        case 0x1368a0u: goto label_1368a0;
        case 0x1368a4u: goto label_1368a4;
        case 0x1368a8u: goto label_1368a8;
        case 0x1368acu: goto label_1368ac;
        case 0x1368b0u: goto label_1368b0;
        case 0x1368b4u: goto label_1368b4;
        case 0x1368b8u: goto label_1368b8;
        case 0x1368bcu: goto label_1368bc;
        case 0x1368c0u: goto label_1368c0;
        case 0x1368c4u: goto label_1368c4;
        case 0x1368c8u: goto label_1368c8;
        case 0x1368ccu: goto label_1368cc;
        case 0x1368d0u: goto label_1368d0;
        case 0x1368d4u: goto label_1368d4;
        case 0x1368d8u: goto label_1368d8;
        case 0x1368dcu: goto label_1368dc;
        case 0x1368e0u: goto label_1368e0;
        case 0x1368e4u: goto label_1368e4;
        case 0x1368e8u: goto label_1368e8;
        case 0x1368ecu: goto label_1368ec;
        case 0x1368f0u: goto label_1368f0;
        case 0x1368f4u: goto label_1368f4;
        case 0x1368f8u: goto label_1368f8;
        case 0x1368fcu: goto label_1368fc;
        case 0x136900u: goto label_136900;
        case 0x136904u: goto label_136904;
        case 0x136908u: goto label_136908;
        case 0x13690cu: goto label_13690c;
        case 0x136910u: goto label_136910;
        case 0x136914u: goto label_136914;
        case 0x136918u: goto label_136918;
        case 0x13691cu: goto label_13691c;
        case 0x136920u: goto label_136920;
        case 0x136924u: goto label_136924;
        case 0x136928u: goto label_136928;
        case 0x13692cu: goto label_13692c;
        case 0x136930u: goto label_136930;
        case 0x136934u: goto label_136934;
        case 0x136938u: goto label_136938;
        case 0x13693cu: goto label_13693c;
        case 0x136940u: goto label_136940;
        case 0x136944u: goto label_136944;
        case 0x136948u: goto label_136948;
        case 0x13694cu: goto label_13694c;
        default: break;
    }

    ctx->pc = 0x136758u;

label_136758:
    // 0x136758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13675c:
    // 0x13675c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_136760:
    // 0x136760: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x136760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_136764:
    // 0x136764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136768:
    // 0x136768: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x136768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13676c:
    // 0x13676c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_136770:
    // 0x136770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x136770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_136774:
    // 0x136774: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x136774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_136778:
    // 0x136778: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x136778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_13677c:
    // 0x13677c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_136780:
    // 0x136780: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x136780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_136784:
    // 0x136784: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x136784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_136788:
    // 0x136788: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_13678c:
    // 0x13678c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_136790:
    // 0x136790: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
label_136794:
    if (ctx->pc == 0x136794u) {
        ctx->pc = 0x136794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136790u;
        // 0x136794: 0x8c740040  lw          $s4, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136798u;
        goto label_136798;
    }
    ctx->pc = 0x136790u;
    {
        const bool branch_taken_0x136790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x136794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136790u;
        // 0x136794: 0x8c740040  lw          $s4, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136790) {
            ctx->pc = 0x1367C4u;
            goto label_1367c4;
        }
    }
    ctx->pc = 0x136798u;
label_136798:
    // 0x136798: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x136798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_13679c:
    // 0x13679c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1367a0:
    // 0x1367a0: 0xc06a2d4  jal         func_1A8B50
label_1367a4:
    if (ctx->pc == 0x1367A4u) {
        ctx->pc = 0x1367A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367A0u;
        // 0x1367a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367A8u;
        goto label_1367a8;
    }
    ctx->pc = 0x1367A0u;
    SET_GPR_U32(ctx, 31, 0x1367A8u);
    ctx->pc = 0x1367A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367A0u;
    // 0x1367a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1367A0u, 0x1367A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367A8u;
label_1367a8:
    // 0x1367a8: 0xc06a282  jal         func_1A8A08
label_1367ac:
    if (ctx->pc == 0x1367ACu) {
        ctx->pc = 0x1367ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367A8u;
        // 0x1367ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367B0u;
        goto label_1367b0;
    }
    ctx->pc = 0x1367A8u;
    SET_GPR_U32(ctx, 31, 0x1367B0u);
    ctx->pc = 0x1367ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367A8u;
    // 0x1367ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1367A8u, 0x1367B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367B0u;
label_1367b0:
    // 0x1367b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1367b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1367b4:
    // 0x1367b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1367b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1367b8:
    // 0x1367b8: 0xc066894  jal         func_19A250
label_1367bc:
    if (ctx->pc == 0x1367BCu) {
        ctx->pc = 0x1367BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367B8u;
        // 0x1367bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367C0u;
        goto label_1367c0;
    }
    ctx->pc = 0x1367B8u;
    SET_GPR_U32(ctx, 31, 0x1367C0u);
    ctx->pc = 0x1367BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367B8u;
    // 0x1367bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A250u, 0x1367B8u, 0x1367C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367C0u;
label_1367c0:
    // 0x1367c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1367c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1367c4:
    // 0x1367c4: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
label_1367c8:
    if (ctx->pc == 0x1367C8u) {
        ctx->pc = 0x1367C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C4u;
        // 0x1367c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367CCu;
        goto label_1367cc;
    }
    ctx->pc = 0x1367C4u;
    {
        const bool branch_taken_0x1367c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1367c4) {
            ctx->pc = 0x1367C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1367C4u;
            // 0x1367c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13692Cu;
            goto label_13692c;
        }
    }
    ctx->pc = 0x1367CCu;
label_1367cc:
    // 0x1367cc: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x1367ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_1367d0:
    // 0x1367d0: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x1367d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1367d4:
    // 0x1367d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1367d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1367d8:
    // 0x1367d8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_1367dc:
    if (ctx->pc == 0x1367DCu) {
        ctx->pc = 0x1367DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367D8u;
        // 0x1367dc: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367E0u;
        goto label_1367e0;
    }
    ctx->pc = 0x1367D8u;
    {
        const bool branch_taken_0x1367d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1367DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367D8u;
        // 0x1367dc: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367d8) {
            ctx->pc = 0x136910u;
            goto label_136910;
        }
    }
    ctx->pc = 0x1367E0u;
label_1367e0:
    // 0x1367e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1367e4:
    // 0x1367e4: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x1367e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
label_1367e8:
    // 0x1367e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1367e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1367ec:
    // 0x1367ec: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
label_1367f0:
    if (ctx->pc == 0x1367F0u) {
        ctx->pc = 0x1367F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ECu;
        // 0x1367f0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367F4u;
        goto label_1367f4;
    }
    ctx->pc = 0x1367ECu;
    {
        const bool branch_taken_0x1367ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1367F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ECu;
        // 0x1367f0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367ec) {
            ctx->pc = 0x1368B0u;
            goto label_1368b0;
        }
    }
    ctx->pc = 0x1367F4u;
label_1367f4:
    // 0x1367f4: 0x8eb301b0  lw          $s3, 0x1B0($s5)
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
label_1367f8:
    // 0x1367f8: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
label_1367fc:
    if (ctx->pc == 0x1367FCu) {
        ctx->pc = 0x1367FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F8u;
        // 0x1367fc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136800u;
        goto label_136800;
    }
    ctx->pc = 0x1367F8u;
    {
        const bool branch_taken_0x1367f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F8u;
        // 0x1367fc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367f8) {
            ctx->pc = 0x136928u;
            goto label_136928;
        }
    }
    ctx->pc = 0x136800u;
label_136800:
    // 0x136800: 0x24560110  addiu       $s6, $v0, 0x110
    ctx->pc = 0x136800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_136804:
    // 0x136804: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
label_136808:
    // 0x136808: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x136808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13680c:
    // 0x13680c: 0xc0682b2  jal         func_1A0AC8
label_136810:
    if (ctx->pc == 0x136810u) {
        ctx->pc = 0x136810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13680Cu;
        // 0x136810: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136814u;
        goto label_136814;
    }
    ctx->pc = 0x13680Cu;
    SET_GPR_U32(ctx, 31, 0x136814u);
    ctx->pc = 0x136810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13680Cu;
    // 0x136810: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13680Cu, 0x136814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136814u;
label_136814:
    // 0x136814: 0xc0682b6  jal         func_1A0AD8
label_136818:
    if (ctx->pc == 0x136818u) {
        ctx->pc = 0x136818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136814u;
        // 0x136818: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13681Cu;
        goto label_13681c;
    }
    ctx->pc = 0x136814u;
    SET_GPR_U32(ctx, 31, 0x13681Cu);
    ctx->pc = 0x136818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136814u;
    // 0x136818: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x136814u, 0x13681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13681Cu;
label_13681c:
    // 0x13681c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136820:
    // 0x136820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136824:
    // 0x136824: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x136824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_136828:
    // 0x136828: 0xc062774  jal         func_189DD0
label_13682c:
    if (ctx->pc == 0x13682Cu) {
        ctx->pc = 0x13682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136828u;
        // 0x13682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136830u;
        goto label_136830;
    }
    ctx->pc = 0x136828u;
    SET_GPR_U32(ctx, 31, 0x136830u);
    ctx->pc = 0x13682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136828u;
    // 0x13682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DD0u, 0x136828u, 0x136830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136830u;
label_136830:
    // 0x136830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136834:
    // 0x136834: 0xc06825c  jal         func_1A0970
label_136838:
    if (ctx->pc == 0x136838u) {
        ctx->pc = 0x136838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136834u;
        // 0x136838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13683Cu;
        goto label_13683c;
    }
    ctx->pc = 0x136834u;
    SET_GPR_U32(ctx, 31, 0x13683Cu);
    ctx->pc = 0x136838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136834u;
    // 0x136838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x136834u, 0x13683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136840:
    // 0x136840: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x136840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_136844:
    // 0x136844: 0xc0618da  jal         func_186368
label_136848:
    if (ctx->pc == 0x136848u) {
        ctx->pc = 0x136848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136844u;
        // 0x136848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13684Cu;
        goto label_13684c;
    }
    ctx->pc = 0x136844u;
    SET_GPR_U32(ctx, 31, 0x13684Cu);
    ctx->pc = 0x136848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136844u;
    // 0x136848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x136844u, 0x13684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13684Cu;
label_13684c:
    // 0x13684c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136850:
    // 0x136850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136854:
    // 0x136854: 0xc0618f2  jal         func_1863C8
label_136858:
    if (ctx->pc == 0x136858u) {
        ctx->pc = 0x136858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136854u;
        // 0x136858: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13685Cu;
        goto label_13685c;
    }
    ctx->pc = 0x136854u;
    SET_GPR_U32(ctx, 31, 0x13685Cu);
    ctx->pc = 0x136858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136854u;
    // 0x136858: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x136854u, 0x13685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13685Cu;
label_13685c:
    // 0x13685c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_136860:
    // 0x136860: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_136864:
    // 0x136864: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x136864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_136868:
    // 0x136868: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13686c:
    // 0x13686c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136870:
    // 0x136870: 0x60f809  jalr        $v1
label_136874:
    if (ctx->pc == 0x136874u) {
        ctx->pc = 0x136874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136870u;
        // 0x136874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136878u;
        goto label_136878;
    }
    ctx->pc = 0x136870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136878u);
        ctx->pc = 0x136874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136870u;
        // 0x136874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136870u, 0x136878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136878u;
label_136878:
    // 0x136878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13687c:
    // 0x13687c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_136880:
    // 0x136880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136884:
    // 0x136884: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x136884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_136888:
    // 0x136888: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13688c:
    // 0x13688c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136890:
    // 0x136890: 0x60f809  jalr        $v1
label_136894:
    if (ctx->pc == 0x136894u) {
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136898u;
        goto label_136898;
    }
    ctx->pc = 0x136890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136898u);
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136890u, 0x136898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136898u;
label_136898:
    // 0x136898: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x136898u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_13689c:
    // 0x13689c: 0x5660ffda  bnel        $s3, $zero, . + 4 + (-0x26 << 2)
label_1368a0:
    if (ctx->pc == 0x1368A0u) {
        ctx->pc = 0x1368A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13689Cu;
        // 0x1368a0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368A4u;
        goto label_1368a4;
    }
    ctx->pc = 0x13689Cu;
    {
        const bool branch_taken_0x13689c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13689c) {
            ctx->pc = 0x1368A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13689Cu;
            // 0x1368a0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136808;
        }
    }
    ctx->pc = 0x1368A4u;
label_1368a4:
    // 0x1368a4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1368a8:
    if (ctx->pc == 0x1368A8u) {
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368ACu;
        goto label_1368ac;
    }
    ctx->pc = 0x1368A4u;
    {
        const bool branch_taken_0x1368a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368a4) {
            ctx->pc = 0x13692Cu;
            goto label_13692c;
        }
    }
    ctx->pc = 0x1368ACu;
label_1368ac:
    // 0x1368ac: 0x0  nop
    ctx->pc = 0x1368acu;
    // NOP
label_1368b0:
    // 0x1368b0: 0xc0682b2  jal         func_1A0AC8
label_1368b4:
    if (ctx->pc == 0x1368B4u) {
        ctx->pc = 0x1368B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368B0u;
        // 0x1368b4: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368B8u;
        goto label_1368b8;
    }
    ctx->pc = 0x1368B0u;
    SET_GPR_U32(ctx, 31, 0x1368B8u);
    ctx->pc = 0x1368B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368B0u;
    // 0x1368b4: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1368B0u, 0x1368B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368B8u;
label_1368b8:
    // 0x1368b8: 0xc0682b6  jal         func_1A0AD8
label_1368bc:
    if (ctx->pc == 0x1368BCu) {
        ctx->pc = 0x1368BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368B8u;
        // 0x1368bc: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368C0u;
        goto label_1368c0;
    }
    ctx->pc = 0x1368B8u;
    SET_GPR_U32(ctx, 31, 0x1368C0u);
    ctx->pc = 0x1368BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368B8u;
    // 0x1368bc: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1368B8u, 0x1368C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368C0u;
label_1368c0:
    // 0x1368c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1368c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1368c4:
    // 0x1368c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1368c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1368c8:
    // 0x1368c8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1368c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1368cc:
    // 0x1368cc: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x1368ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_1368d0:
    // 0x1368d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1368d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1368d4:
    // 0x1368d4: 0xc062774  jal         func_189DD0
label_1368d8:
    if (ctx->pc == 0x1368D8u) {
        ctx->pc = 0x1368D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368D4u;
        // 0x1368d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368DCu;
        goto label_1368dc;
    }
    ctx->pc = 0x1368D4u;
    SET_GPR_U32(ctx, 31, 0x1368DCu);
    ctx->pc = 0x1368D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368D4u;
    // 0x1368d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DD0u, 0x1368D4u, 0x1368DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368DCu;
label_1368dc:
    // 0x1368dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1368dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1368e0:
    // 0x1368e0: 0xc06825c  jal         func_1A0970
label_1368e4:
    if (ctx->pc == 0x1368E4u) {
        ctx->pc = 0x1368E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368E0u;
        // 0x1368e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368E8u;
        goto label_1368e8;
    }
    ctx->pc = 0x1368E0u;
    SET_GPR_U32(ctx, 31, 0x1368E8u);
    ctx->pc = 0x1368E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368E0u;
    // 0x1368e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1368E0u, 0x1368E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368E8u;
label_1368e8:
    // 0x1368e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1368e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1368ec:
    // 0x1368ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1368ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1368f0:
    // 0x1368f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1368f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1368f4:
    // 0x1368f4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1368f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1368f8:
    // 0x1368f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1368f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1368fc:
    // 0x1368fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1368fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136900:
    // 0x136900: 0x60f809  jalr        $v1
label_136904:
    if (ctx->pc == 0x136904u) {
        ctx->pc = 0x136904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136900u;
        // 0x136904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136908u;
        goto label_136908;
    }
    ctx->pc = 0x136900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136908u);
        ctx->pc = 0x136904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136900u;
        // 0x136904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136900u, 0x136908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136908u;
label_136908:
    // 0x136908: 0x10000008  b           . + 4 + (0x8 << 2)
label_13690c:
    if (ctx->pc == 0x13690Cu) {
        ctx->pc = 0x13690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136908u;
        // 0x13690c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136910u;
        goto label_136910;
    }
    ctx->pc = 0x136908u;
    {
        const bool branch_taken_0x136908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136908u;
        // 0x13690c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136908) {
            ctx->pc = 0x13692Cu;
            goto label_13692c;
        }
    }
    ctx->pc = 0x136910u;
label_136910:
    // 0x136910: 0xc68c00e0  lwc1        $f12, 0xE0($s4)
    ctx->pc = 0x136910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136914:
    // 0x136914: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x136914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_136918:
    // 0x136918: 0x268500a0  addiu       $a1, $s4, 0xA0
    ctx->pc = 0x136918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_13691c:
    // 0x13691c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13691cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136920:
    // 0x136920: 0xc051588  jal         func_145620
label_136924:
    if (ctx->pc == 0x136924u) {
        ctx->pc = 0x136924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136920u;
        // 0x136924: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136928u;
        goto label_136928;
    }
    ctx->pc = 0x136920u;
    SET_GPR_U32(ctx, 31, 0x136928u);
    ctx->pc = 0x136924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136920u;
    // 0x136924: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145620u, 0x136920u, 0x136928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136928u;
label_136928:
    // 0x136928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x136928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13692c:
    // 0x13692c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13692cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_136930:
    // 0x136930: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x136930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136934:
    // 0x136934: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x136934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_136938:
    // 0x136938: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x136938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13693c:
    // 0x13693c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13693cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_136940:
    // 0x136940: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x136940u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_136944:
    // 0x136944: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x136944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_136948:
    // 0x136948: 0x3e00008  jr          $ra
label_13694c:
    if (ctx->pc == 0x13694Cu) {
        ctx->pc = 0x13694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136948u;
        // 0x13694c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136950u;
        goto label_fallthrough_0x136948;
    }
    ctx->pc = 0x136948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136948u;
        // 0x13694c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136948:
    ctx->pc = 0x136950u;
}

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

// Function: Cmd_OFS_3DPOS_Entry__FP15BsSCDEntControl
// Address: 0x111530 - 0x111860
void Cmd_OFS_3DPOS_Entry__FP15BsSCDEntControl_0x111530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OFS_3DPOS_Entry__FP15BsSCDEntControl_0x111530");
#endif

    switch (ctx->pc) {
        case 0x111560u: goto label_111560;
        case 0x1115b4u: goto label_1115b4;
        case 0x1115c0u: goto label_1115c0;
        case 0x1115d4u: goto label_1115d4;
        case 0x1115f4u: goto label_1115f4;
        case 0x111600u: goto label_111600;
        case 0x111608u: goto label_111608;
        case 0x111628u: goto label_111628;
        case 0x111634u: goto label_111634;
        case 0x11164cu: goto label_11164c;
        case 0x111674u: goto label_111674;
        case 0x1116a8u: goto label_1116a8;
        case 0x1116ccu: goto label_1116cc;
        case 0x1116d0u: goto label_1116d0;
        case 0x111704u: goto label_111704;
        case 0x111710u: goto label_111710;
        case 0x111718u: goto label_111718;
        case 0x111728u: goto label_111728;
        case 0x11173cu: goto label_11173c;
        case 0x111748u: goto label_111748;
        case 0x111758u: goto label_111758;
        case 0x11176cu: goto label_11176c;
        case 0x111778u: goto label_111778;
        case 0x1117a8u: goto label_1117a8;
        case 0x1117f0u: goto label_1117f0;
        case 0x1117fcu: goto label_1117fc;
        default: break;
    }

    ctx->pc = 0x111530u;

    // 0x111530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111534: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11153c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x111540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111544: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x111544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x111548: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x111548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11154c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x111550: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x111550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x111554: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x111554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x111558: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111558u;
    SET_GPR_U32(ctx, 31, 0x111560u);
    ctx->pc = 0x11155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111558u;
    // 0x11155c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111558u, 0x111560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111560u;
label_111560:
    // 0x111560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111564: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x111568: 0x121a03  sra         $v1, $s2, 8
    ctx->pc = 0x111568u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 8));
    // 0x11156c: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x111570: 0x8c55b830  lw          $s5, -0x47D0($v0)
    ctx->pc = 0x111570u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x111574: 0x2e42000d  sltiu       $v0, $s2, 0xD
    ctx->pc = 0x111574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x111578: 0x30760001  andi        $s6, $v1, 0x1
    ctx->pc = 0x111578u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x11157c: 0x8f938d10  lw          $s3, -0x72F0($gp)
    ctx->pc = 0x11157cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x111580: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x111580u;
    {
        const bool branch_taken_0x111580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111580u;
        // 0x111584: 0x8eb10040  lw          $s1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111580) {
            ctx->pc = 0x1117A0u;
            goto label_1117a0;
        }
    }
    ctx->pc = 0x111588u;
    // 0x111588: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x111588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11158c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x111590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111594: 0x8c634000  lw          $v1, 0x4000($v1)
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    // 0x111598: 0x600008  jr          $v1
    ctx->pc = 0x111598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1115A0u: goto label_1115a0;
            case 0x1115E0u: goto label_1115e0;
            case 0x111610u: goto label_111610;
            case 0x111658u: goto label_111658;
            case 0x111668u: goto label_111668;
            case 0x111688u: goto label_111688;
            case 0x111690u: goto label_111690;
            case 0x1116A0u: goto label_1116a0;
            case 0x1116E8u: goto label_1116e8;
            case 0x111730u: goto label_111730;
            case 0x111750u: goto label_111750;
            case 0x111788u: goto label_111788;
            case 0x1117A4u: goto label_1117a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1115A0u;
label_1115a0:
    // 0x1115a0: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1115A0u;
    {
        const bool branch_taken_0x1115a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115A0u;
        // 0x1115a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115a0) {
            ctx->pc = 0x1115C0u;
            goto label_1115c0;
        }
    }
    ctx->pc = 0x1115A8u;
    // 0x1115a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1115a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ac: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1115ACu;
    SET_GPR_U32(ctx, 31, 0x1115B4u);
    ctx->pc = 0x1115B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ACu;
    // 0x1115b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1115ACu, 0x1115B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115B4u;
label_1115b4:
    // 0x1115b4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B4u;
        // 0x1115b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1117A8u;
            goto label_1117a8;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0x0  nop
    ctx->pc = 0x1115bcu;
    // NOP
label_1115c0:
    // 0x1115c0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1115c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1115c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1115c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1115c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115cc: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1115CCu;
    SET_GPR_U32(ctx, 31, 0x1115D4u);
    ctx->pc = 0x1115D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115CCu;
    // 0x1115d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1115CCu, 0x1115D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115D4u;
label_1115d4:
    // 0x1115d4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1115D4u;
    {
        const bool branch_taken_0x1115d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D4u;
        // 0x1115d8: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d4) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x1115DCu;
    // 0x1115dc: 0x0  nop
    ctx->pc = 0x1115dcu;
    // NOP
label_1115e0:
    // 0x1115e0: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1115E0u;
    {
        const bool branch_taken_0x1115e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115E0u;
        // 0x1115e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115e0) {
            ctx->pc = 0x111600u;
            goto label_111600;
        }
    }
    ctx->pc = 0x1115E8u;
    // 0x1115e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1115ECu;
    SET_GPR_U32(ctx, 31, 0x1115F4u);
    ctx->pc = 0x1115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ECu;
    // 0x1115f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1115ECu, 0x1115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1115F4u;
    {
        const bool branch_taken_0x1115f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115F4u;
        // 0x1115f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115f4) {
            ctx->pc = 0x1117A8u;
            goto label_1117a8;
        }
    }
    ctx->pc = 0x1115FCu;
    // 0x1115fc: 0x0  nop
    ctx->pc = 0x1115fcu;
    // NOP
label_111600:
    // 0x111600: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x111600u;
    SET_GPR_U32(ctx, 31, 0x111608u);
    ctx->pc = 0x111604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111600u;
    // 0x111604: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x111600u, 0x111608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111608u;
label_111608:
    // 0x111608: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x111608u;
    {
        const bool branch_taken_0x111608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111608u;
        // 0x11160c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111608) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111610u;
label_111610:
    // 0x111610: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x111610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111614: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x111614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x111618: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111618u;
    {
        const bool branch_taken_0x111618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111618u;
        // 0x11161c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111618) {
            ctx->pc = 0x111628u;
            goto label_111628;
        }
    }
    ctx->pc = 0x111620u;
    // 0x111620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111620u;
    {
        const bool branch_taken_0x111620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111620u;
        // 0x111624: 0x8e300260  lw          $s0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111620) {
            ctx->pc = 0x111634u;
            goto label_111634;
        }
    }
    ctx->pc = 0x111628u;
label_111628:
    // 0x111628: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11162c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111630: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x111630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_111634:
    // 0x111634: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x111634u;
    {
        const bool branch_taken_0x111634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111634u;
        // 0x111638: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111634) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x11163Cu;
    // 0x11163c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111640: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x111644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111644u;
    SET_GPR_U32(ctx, 31, 0x11164Cu);
    ctx->pc = 0x111648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111644u;
    // 0x111648: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111644u, 0x11164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11164Cu;
label_11164c:
    // 0x11164c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11164Cu;
    {
        const bool branch_taken_0x11164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11164Cu;
        // 0x111650: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11164c) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111654u;
    // 0x111654: 0x0  nop
    ctx->pc = 0x111654u;
    // NOP
label_111658:
    // 0x111658: 0x8e713630  lw          $s1, 0x3630($s3)
    ctx->pc = 0x111658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13872)));
    // 0x11165c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11165Cu;
    {
        const bool branch_taken_0x11165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11165Cu;
        // 0x111660: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11165c) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111664u;
    // 0x111664: 0x0  nop
    ctx->pc = 0x111664u;
    // NOP
label_111668:
    // 0x111668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11166c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11166Cu;
    SET_GPR_U32(ctx, 31, 0x111674u);
    ctx->pc = 0x111670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11166Cu;
    // 0x111670: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11166Cu, 0x111674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111674u;
label_111674:
    // 0x111674: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111678: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x111678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11167c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x11167Cu;
    {
        const bool branch_taken_0x11167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11167Cu;
        // 0x111680: 0x8c513630  lw          $s1, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11167c) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111684u;
    // 0x111684: 0x0  nop
    ctx->pc = 0x111684u;
    // NOP
label_111688:
    // 0x111688: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x111688u;
    {
        const bool branch_taken_0x111688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111688u;
        // 0x11168c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111688) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111690u;
label_111690:
    // 0x111690: 0x8f918a30  lw          $s1, -0x75D0($gp)
    ctx->pc = 0x111690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x111694: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x111694u;
    {
        const bool branch_taken_0x111694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111694u;
        // 0x111698: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111694) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x11169Cu;
    // 0x11169c: 0x0  nop
    ctx->pc = 0x11169cu;
    // NOP
label_1116a0:
    // 0x1116a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1116A0u;
    SET_GPR_U32(ctx, 31, 0x1116A8u);
    ctx->pc = 0x1116A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116A0u;
    // 0x1116a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1116A0u, 0x1116A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116A8u;
label_1116a8:
    // 0x1116a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1116a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116ac: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x1116acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1116b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1116B0u;
    {
        const bool branch_taken_0x1116b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1116b0) {
            ctx->pc = 0x1116B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1116B0u;
            // 0x1116b4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1116D0u;
            goto label_1116d0;
        }
    }
    ctx->pc = 0x1116B8u;
    // 0x1116b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1116bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1116bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116c0: 0x24a53e50  addiu       $a1, $a1, 0x3E50
    ctx->pc = 0x1116c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15952));
    // 0x1116c4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1116C4u;
    SET_GPR_U32(ctx, 31, 0x1116CCu);
    ctx->pc = 0x1116C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116C4u;
    // 0x1116c8: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1116C4u, 0x1116CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116CCu;
label_1116cc:
    // 0x1116cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1116ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1116d0:
    // 0x1116d0: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x1116d4: 0x2694f730  addiu       $s4, $s4, -0x8D0
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965040));
    // 0x1116d8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1116d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1116dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1116DCu;
    {
        const bool branch_taken_0x1116dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116DCu;
        // 0x1116e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116dc) {
            ctx->pc = 0x1117A8u;
            goto label_1117a8;
        }
    }
    ctx->pc = 0x1116E4u;
    // 0x1116e4: 0x0  nop
    ctx->pc = 0x1116e4u;
    // NOP
label_1116e8:
    // 0x1116e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1116ec: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1116ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1116f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1116f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1116f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1116F4u;
    {
        const bool branch_taken_0x1116f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1116F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116F4u;
        // 0x1116f8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116f4) {
            ctx->pc = 0x111718u;
            goto label_111718;
        }
    }
    ctx->pc = 0x1116FCu;
    // 0x1116fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1116FCu;
    SET_GPR_U32(ctx, 31, 0x111704u);
    ctx->pc = 0x111700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116FCu;
    // 0x111700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1116FCu, 0x111704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111704u;
label_111704:
    // 0x111704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111708: 0xc05328a  jal         func_14CA28
    ctx->pc = 0x111708u;
    SET_GPR_U32(ctx, 31, 0x111710u);
    ctx->pc = 0x11170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111708u;
    // 0x11170c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA28u, 0x111708u, 0x111710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111710u;
label_111710:
    // 0x111710: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x111710u;
    {
        const bool branch_taken_0x111710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111710u;
        // 0x111714: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111710) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111718u;
label_111718:
    // 0x111718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11171c: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x11171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x111720: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111720u;
    SET_GPR_U32(ctx, 31, 0x111728u);
    ctx->pc = 0x111724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111720u;
    // 0x111724: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111720u, 0x111728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111728u;
label_111728:
    // 0x111728: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x111728u;
    {
        const bool branch_taken_0x111728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111728u;
        // 0x11172c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111728) {
            ctx->pc = 0x111608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111608;
        }
    }
    ctx->pc = 0x111730u;
label_111730:
    // 0x111730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111734: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111734u;
    SET_GPR_U32(ctx, 31, 0x11173Cu);
    ctx->pc = 0x111738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111734u;
    // 0x111738: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111734u, 0x11173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11173Cu;
label_11173c:
    // 0x11173c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x11173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x111740: 0xc04e2a0  jal         func_138A80
    ctx->pc = 0x111740u;
    SET_GPR_U32(ctx, 31, 0x111748u);
    ctx->pc = 0x111744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111740u;
    // 0x111744: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A80u, 0x111740u, 0x111748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111748u;
label_111748:
    // 0x111748: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x111748u;
    {
        const bool branch_taken_0x111748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111748u;
        // 0x11174c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111748) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111750u;
label_111750:
    // 0x111750: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x111750u;
    SET_GPR_U32(ctx, 31, 0x111758u);
    ctx->pc = 0x111754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111750u;
    // 0x111754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFC0u, 0x111750u, 0x111758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111758u;
label_111758:
    // 0x111758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111758u;
    {
        const bool branch_taken_0x111758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111758u;
        // 0x11175c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111758) {
            ctx->pc = 0x111778u;
            goto label_111778;
        }
    }
    ctx->pc = 0x111760u;
    // 0x111760: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111764: 0xc066a3a  jal         func_19A8E8
    ctx->pc = 0x111764u;
    SET_GPR_U32(ctx, 31, 0x11176Cu);
    ctx->pc = 0x111768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111764u;
    // 0x111768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A8E8u, 0x111764u, 0x11176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11176Cu;
label_11176c:
    // 0x11176c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11176Cu;
    {
        const bool branch_taken_0x11176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11176Cu;
        // 0x111770: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11176c) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111774u;
    // 0x111774: 0x0  nop
    ctx->pc = 0x111774u;
    // NOP
label_111778:
    // 0x111778: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x111778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11177c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111780u;
    {
        const bool branch_taken_0x111780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111780u;
        // 0x111784: 0x247400d0  addiu       $s4, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111780) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x111788u;
label_111788:
    // 0x111788: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11178c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11178cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111790: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x111794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x111794u;
    {
        const bool branch_taken_0x111794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111794u;
        // 0x111798: 0x249400d0  addiu       $s4, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111794) {
            ctx->pc = 0x1117A4u;
            goto label_1117a4;
        }
    }
    ctx->pc = 0x11179Cu;
    // 0x11179c: 0x0  nop
    ctx->pc = 0x11179cu;
    // NOP
label_1117a0:
    // 0x1117a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1117a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1117a4:
    // 0x1117a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1117a8:
    // 0x1117a8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1117A8u;
    {
        const bool branch_taken_0x1117a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117A8u;
        // 0x1117ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117a8) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x1117B0u;
    // 0x1117b0: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1117B0u;
    {
        const bool branch_taken_0x1117b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1117b0) {
            ctx->pc = 0x1117B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117B0u;
            // 0x1117b4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117D0u;
            goto label_1117d0;
        }
    }
    ctx->pc = 0x1117B8u;
    // 0x1117b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1117B8u;
    {
        const bool branch_taken_0x1117b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1117b8) {
            ctx->pc = 0x1117FCu;
            goto label_1117fc;
        }
    }
    ctx->pc = 0x1117C0u;
label_1117c0:
    // 0x1117c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1117c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1117c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1117c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1117C8u;
    {
        const bool branch_taken_0x1117c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C8u;
        // 0x1117cc: 0x247400d0  addiu       $s4, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c8) {
            ctx->pc = 0x1117FCu;
            goto label_1117fc;
        }
    }
    ctx->pc = 0x1117D0u;
label_1117d0:
    // 0x1117d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1117d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117d4: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1117d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1117d8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1117d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1117dc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1117dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1117e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117E0u;
    {
        const bool branch_taken_0x1117e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1117e0) {
            ctx->pc = 0x1117E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117E0u;
            // 0x1117e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117F4u;
            goto label_1117f4;
        }
    }
    ctx->pc = 0x1117E8u;
    // 0x1117e8: 0xc061920  jal         func_186480
    ctx->pc = 0x1117E8u;
    SET_GPR_U32(ctx, 31, 0x1117F0u);
    ctx->pc = 0x1117ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117E8u;
    // 0x1117ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1117E8u, 0x1117F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117F0u;
label_1117f0:
    // 0x1117f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1117f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1117f4:
    // 0x1117f4: 0xc061422  jal         func_185088
    ctx->pc = 0x1117F4u;
    SET_GPR_U32(ctx, 31, 0x1117FCu);
    ctx->pc = 0x1117F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117F4u;
    // 0x1117f8: 0x26140110  addiu       $s4, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1117F4u, 0x1117FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117FCu;
label_1117fc:
    // 0x1117fc: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1117FCu;
    {
        const bool branch_taken_0x1117fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x111800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117FCu;
        // 0x111800: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117fc) {
            ctx->pc = 0x11183Cu;
            goto label_11183c;
        }
    }
    ctx->pc = 0x111804u;
    // 0x111804: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x111804u;
    {
        const bool branch_taken_0x111804 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x111804) {
            ctx->pc = 0x111828u;
            goto label_111828;
        }
    }
    ctx->pc = 0x11180Cu;
    // 0x11180c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x11180cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x111810: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x111810u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x111814: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x111814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111818: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x111818u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11181c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11181Cu;
    {
        const bool branch_taken_0x11181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11181Cu;
        // 0x111820: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11181c) {
            ctx->pc = 0x11183Cu;
            goto label_11183c;
        }
    }
    ctx->pc = 0x111824u;
    // 0x111824: 0x0  nop
    ctx->pc = 0x111824u;
    // NOP
label_111828:
    // 0x111828: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x111828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11182c: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x11182cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x111830: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x111830u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111834: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x111834u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x111838: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11183c:
    // 0x11183c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11183cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111840: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111844: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x111844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111848: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x111848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11184c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11184cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x111850: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x111850u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111854: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x111854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x111858: 0x3e00008  jr          $ra
    ctx->pc = 0x111858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111858u;
        // 0x11185c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111860u;
}

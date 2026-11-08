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

// Function: Cmd_IF_AND_Entry__FP15BsSCDEntControl
// Address: 0x1a7538 - 0x1a7670
void Cmd_IF_AND_Entry__FP15BsSCDEntControl_0x1a7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IF_AND_Entry__FP15BsSCDEntControl_0x1a7538");
#endif

    switch (ctx->pc) {
        case 0x1a7580u: goto label_1a7580;
        case 0x1a75bcu: goto label_1a75bc;
        case 0x1a75f0u: goto label_1a75f0;
        case 0x1a7640u: goto label_1a7640;
        default: break;
    }

    ctx->pc = 0x1a7538u;

    // 0x1a7538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a753c: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a753cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a754c: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x1a754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a755c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7560: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7564: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7568: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a756c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a756cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7570u;
    {
        const bool branch_taken_0x1a7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7570u;
        // 0x1a7574: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7570) {
            ctx->pc = 0x1A7588u;
            goto label_1a7588;
        }
    }
    ctx->pc = 0x1A7578u;
    // 0x1a7578: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7578u;
    SET_GPR_U32(ctx, 31, 0x1A7580u);
    ctx->pc = 0x1A757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7578u;
    // 0x1a757c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7578u, 0x1A7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7580u;
label_1a7580:
    // 0x1a7580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7580u;
    {
        const bool branch_taken_0x1a7580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7580u;
        // 0x1a7584: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7580) {
            ctx->pc = 0x1A758Cu;
            goto label_1a758c;
        }
    }
    ctx->pc = 0x1A7588u;
label_1a7588:
    // 0x1a7588: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a758c:
    // 0x1a758c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7590: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7598: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a7598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a759c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a75a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a75a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a75a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a75a8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a75a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a75ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A75ACu;
    {
        const bool branch_taken_0x1a75ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75ACu;
        // 0x1a75b0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75ac) {
            ctx->pc = 0x1A75C4u;
            goto label_1a75c4;
        }
    }
    ctx->pc = 0x1A75B4u;
    // 0x1a75b4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A75B4u;
    SET_GPR_U32(ctx, 31, 0x1A75BCu);
    ctx->pc = 0x1A75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75B4u;
    // 0x1a75b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A75B4u, 0x1A75BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75BCu;
label_1a75bc:
    // 0x1a75bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a75c0: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1a75c4:
    // 0x1a75c4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a75c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a75cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a75d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a75d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a75d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a75d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a75dc: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a75dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a75e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A75E0u;
    {
        const bool branch_taken_0x1a75e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75E0u;
        // 0x1a75e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75e0) {
            ctx->pc = 0x1A75F8u;
            goto label_1a75f8;
        }
    }
    ctx->pc = 0x1A75E8u;
    // 0x1a75e8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A75E8u;
    SET_GPR_U32(ctx, 31, 0x1A75F0u);
    ctx->pc = 0x1A75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75E8u;
    // 0x1a75ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A75E8u, 0x1A75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75F0u;
label_1a75f0:
    // 0x1a75f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A75F0u;
    {
        const bool branch_taken_0x1a75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75F0u;
        // 0x1a75f4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75f0) {
            ctx->pc = 0x1A75FCu;
            goto label_1a75fc;
        }
    }
    ctx->pc = 0x1A75F8u;
label_1a75f8:
    // 0x1a75f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a75f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a75fc:
    // 0x1a75fc: 0x2701024  and         $v0, $s3, $s0
    ctx->pc = 0x1a75fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x1a7600: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7600u;
    {
        const bool branch_taken_0x1a7600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7600u;
        // 0x1a7604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7600) {
            ctx->pc = 0x1A7654u;
            goto label_1a7654;
        }
    }
    ctx->pc = 0x1A7608u;
    // 0x1a7608: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7608u;
    {
        const bool branch_taken_0x1a7608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7608) {
            ctx->pc = 0x1A760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7608u;
            // 0x1a760c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7620u;
            goto label_1a7620;
        }
    }
    ctx->pc = 0x1A7610u;
    // 0x1a7610: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7614: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7618: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7618u;
    {
        const bool branch_taken_0x1a7618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7618u;
        // 0x1a761c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7618) {
            ctx->pc = 0x1A7654u;
            goto label_1a7654;
        }
    }
    ctx->pc = 0x1A7620u;
label_1a7620:
    // 0x1a7620: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7624: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a7624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7628: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7628u;
    {
        const bool branch_taken_0x1a7628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7628u;
        // 0x1a762c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7628) {
            ctx->pc = 0x1A7640u;
            goto label_1a7640;
        }
    }
    ctx->pc = 0x1A7630u;
    // 0x1a7630: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7634: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7638: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7638u;
    SET_GPR_U32(ctx, 31, 0x1A7640u);
    ctx->pc = 0x1A763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7638u;
    // 0x1a763c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7638u, 0x1A7640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7640u;
label_1a7640:
    // 0x1a7640: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a7644: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7648: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a764c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7650: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a7650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1a7654:
    // 0x1a7654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a765c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a765cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7668: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7668u;
        // 0x1a766c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7670u;
}

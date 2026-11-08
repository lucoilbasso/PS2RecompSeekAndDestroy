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

// Function: Cmd_COUNTER_START_Entry__FP15BsSCDEntControl
// Address: 0x14b510 - 0x14b630
void Cmd_COUNTER_START_Entry__FP15BsSCDEntControl_0x14b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_COUNTER_START_Entry__FP15BsSCDEntControl_0x14b510");
#endif

    switch (ctx->pc) {
        case 0x14b560u: goto label_14b560;
        case 0x14b568u: goto label_14b568;
        case 0x14b588u: goto label_14b588;
        case 0x14b5c0u: goto label_14b5c0;
        case 0x14b5e0u: goto label_14b5e0;
        case 0x14b60cu: goto label_14b60c;
        default: break;
    }

    ctx->pc = 0x14b510u;

    // 0x14b510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b514: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14b518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b51c: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14b520: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14b524: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b52c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14b530: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14b530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14b534: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14b538: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14b538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14b53c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x14b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14b540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b544: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b548: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B548u;
    {
        const bool branch_taken_0x14b548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B548u;
        // 0x14b54c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b548) {
            ctx->pc = 0x14B560u;
            goto label_14b560;
        }
    }
    ctx->pc = 0x14B550u;
    // 0x14b550: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b554: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14b558: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B558u;
    SET_GPR_U32(ctx, 31, 0x14B560u);
    ctx->pc = 0x14B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B558u;
    // 0x14b55c: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B558u, 0x14B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B560u;
label_14b560:
    // 0x14b560: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14B560u;
    SET_GPR_U32(ctx, 31, 0x14B568u);
    ctx->pc = 0x14B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B560u;
    // 0x14b564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14B560u, 0x14B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B568u;
label_14b568:
    // 0x14b568: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x14b56c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14b56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b570: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14B570u;
    {
        const bool branch_taken_0x14b570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B570u;
        // 0x14b574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b570) {
            ctx->pc = 0x14B59Cu;
            goto label_14b59c;
        }
    }
    ctx->pc = 0x14B578u;
    // 0x14b578: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14b57c: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B57Cu;
    {
        const bool branch_taken_0x14b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x14b57c) {
            ctx->pc = 0x14B59Cu;
            goto label_14b59c;
        }
    }
    ctx->pc = 0x14B584u;
    // 0x14b584: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14b588:
    // 0x14b588: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B588u;
    {
        const bool branch_taken_0x14b588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b588) {
            ctx->pc = 0x14B59Cu;
            goto label_14b59c;
        }
    }
    ctx->pc = 0x14B590u;
    // 0x14b590: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14b594: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14B594u;
    {
        const bool branch_taken_0x14b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14b594) {
            ctx->pc = 0x14B598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B594u;
            // 0x14b598: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b588;
        }
    }
    ctx->pc = 0x14B59Cu;
label_14b59c:
    // 0x14b59c: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14B59Cu;
    {
        const bool branch_taken_0x14b59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b59c) {
            ctx->pc = 0x14B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B59Cu;
            // 0x14b5a0: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B5F4u;
            goto label_14b5f4;
        }
    }
    ctx->pc = 0x14B5A4u;
    // 0x14b5a4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14b5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a8: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x14b5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5ac: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B5ACu;
    {
        const bool branch_taken_0x14b5ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5ACu;
        // 0x14b5b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5ac) {
            ctx->pc = 0x14B5B8u;
            goto label_14b5b8;
        }
    }
    ctx->pc = 0x14B5B4u;
    // 0x14b5b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14b5b8:
    // 0x14b5b8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14B5B8u;
    SET_GPR_U32(ctx, 31, 0x14B5C0u);
    ctx->pc = 0x14B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5B8u;
    // 0x14b5bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14B5B8u, 0x14B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5C0u;
label_14b5c0:
    // 0x14b5c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c4: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B5C4u;
    {
        const bool branch_taken_0x14b5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5c4) {
            ctx->pc = 0x14B5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B5C4u;
            // 0x14b5c8: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B5E4u;
            goto label_14b5e4;
        }
    }
    ctx->pc = 0x14B5CCu;
    // 0x14b5cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5d4: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14b5d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B5D8u;
    SET_GPR_U32(ctx, 31, 0x14B5E0u);
    ctx->pc = 0x14B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5D8u;
    // 0x14b5dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B5D8u, 0x14B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5E0u;
label_14b5e0:
    // 0x14b5e0: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_14b5e4:
    // 0x14b5e4: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x14b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x14b5e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14b5ec: 0xae3001bc  sw          $s0, 0x1BC($s1)
    ctx->pc = 0x14b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
    // 0x14b5f0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x14b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_14b5f4:
    // 0x14b5f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x14b5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b5fc: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B5FCu;
    {
        const bool branch_taken_0x14b5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14b5fc) {
            ctx->pc = 0x14B600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B5FCu;
            // 0x14b600: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B610u;
            goto label_14b610;
        }
    }
    ctx->pc = 0x14B604u;
    // 0x14b604: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B604u;
    SET_GPR_U32(ctx, 31, 0x14B60Cu);
    ctx->pc = 0x14B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B604u;
    // 0x14b608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B604u, 0x14B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B60Cu;
label_14b60c:
    // 0x14b60c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_14b610:
    // 0x14b610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b61c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14b61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b620: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14b620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b624: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14b624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b628: 0x3e00008  jr          $ra
    ctx->pc = 0x14B628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B628u;
        // 0x14b62c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B630u;
}

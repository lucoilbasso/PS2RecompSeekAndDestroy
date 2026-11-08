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

// Function: Cmd_CASE_Entry__FP15BsSCDEntControl
// Address: 0x1a77b0 - 0x1a7910
void Cmd_CASE_Entry__FP15BsSCDEntControl_0x1a77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CASE_Entry__FP15BsSCDEntControl_0x1a77b0");
#endif

    switch (ctx->pc) {
        case 0x1a77f8u: goto label_1a77f8;
        case 0x1a7840u: goto label_1a7840;
        case 0x1a7860u: goto label_1a7860;
        case 0x1a7898u: goto label_1a7898;
        case 0x1a78e0u: goto label_1a78e0;
        default: break;
    }

    ctx->pc = 0x1a77b0u;

    // 0x1a77b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a77b4: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a77b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a77b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a77bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a77bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a77c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a77c4: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a77c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a77c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a77cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a77ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a77d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a77d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a77d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a77d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a77d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a77dc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a77dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a77e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a77e4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a77e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a77e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A77E8u;
    {
        const bool branch_taken_0x1a77e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E8u;
        // 0x1a77ec: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e8) {
            ctx->pc = 0x1A7800u;
            goto label_1a7800;
        }
    }
    ctx->pc = 0x1A77F0u;
    // 0x1a77f0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A77F0u;
    SET_GPR_U32(ctx, 31, 0x1A77F8u);
    ctx->pc = 0x1A77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77F0u;
    // 0x1a77f4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A77F0u, 0x1A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77F8u;
label_1a77f8:
    // 0x1a77f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A77F8u;
    {
        const bool branch_taken_0x1a77f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77F8u;
        // 0x1a77fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77f8) {
            ctx->pc = 0x1A7804u;
            goto label_1a7804;
        }
    }
    ctx->pc = 0x1A7800u;
label_1a7800:
    // 0x1a7800: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7804:
    // 0x1a7804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7808: 0x602003b  bltzl       $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A7808u;
    {
        const bool branch_taken_0x1a7808 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1a7808) {
            ctx->pc = 0x1A780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7808u;
            // 0x1a780c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A78F8u;
            goto label_1a78f8;
        }
    }
    ctx->pc = 0x1A7810u;
    // 0x1a7810: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a7814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7818: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a7818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a781c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A781Cu;
    {
        const bool branch_taken_0x1a781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a781c) {
            ctx->pc = 0x1A7820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A781Cu;
            // 0x1a7820: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A78F8u;
            goto label_1a78f8;
        }
    }
    ctx->pc = 0x1A7824u;
    // 0x1a7824: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7824u;
    {
        const bool branch_taken_0x1a7824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7824u;
        // 0x1a7828: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7824) {
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A782Cu;
    // 0x1a782c: 0x3c137ffe  lui         $s3, 0x7FFE
    ctx->pc = 0x1a782cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7830: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a7830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7834: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1a7834u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x1a7838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a783c: 0x0  nop
    ctx->pc = 0x1a783cu;
    // NOP
label_1a7840:
    // 0x1a7840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7844: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7848: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a7848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a784c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1a784cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a7850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7850u;
    {
        const bool branch_taken_0x1a7850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7850u;
        // 0x1a7854: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7850) {
            ctx->pc = 0x1A7860u;
            goto label_1a7860;
        }
    }
    ctx->pc = 0x1A7858u;
    // 0x1a7858: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7858u;
    SET_GPR_U32(ctx, 31, 0x1A7860u);
    ctx->pc = 0x1A785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7858u;
    // 0x1a785c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7858u, 0x1A7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7860u;
label_1a7860:
    // 0x1a7860: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a7860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a7864: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A7864u;
    {
        const bool branch_taken_0x1a7864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7864) {
            ctx->pc = 0x1A7868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7864u;
            // 0x1a7868: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7840;
        }
    }
    ctx->pc = 0x1A786Cu;
    // 0x1a786c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1a7870:
    // 0x1a7870: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7874: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a787c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7880: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7884: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7888: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7888u;
    {
        const bool branch_taken_0x1a7888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7888u;
        // 0x1a788c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7888) {
            ctx->pc = 0x1A78A0u;
            goto label_1a78a0;
        }
    }
    ctx->pc = 0x1A7890u;
    // 0x1a7890: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7890u;
    SET_GPR_U32(ctx, 31, 0x1A7898u);
    ctx->pc = 0x1A7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7890u;
    // 0x1a7894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7890u, 0x1A7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7898u;
label_1a7898:
    // 0x1a7898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7898u;
    {
        const bool branch_taken_0x1a7898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7898u;
        // 0x1a789c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7898) {
            ctx->pc = 0x1A78A4u;
            goto label_1a78a4;
        }
    }
    ctx->pc = 0x1A78A0u;
label_1a78a0:
    // 0x1a78a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a78a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a78a4:
    // 0x1a78a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a78a8: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A78A8u;
    {
        const bool branch_taken_0x1a78a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a78a8) {
            ctx->pc = 0x1A78ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A78A8u;
            // 0x1a78ac: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A78B0u;
    // 0x1a78b0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a78b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a78b8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A78B8u;
    {
        const bool branch_taken_0x1a78b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78B8u;
        // 0x1a78bc: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78b8) {
            ctx->pc = 0x1A78F4u;
            goto label_1a78f4;
        }
    }
    ctx->pc = 0x1A78C0u;
label_1a78c0:
    // 0x1a78c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a78c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a78c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a78c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A78C8u;
    {
        const bool branch_taken_0x1a78c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78C8u;
        // 0x1a78cc: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78c8) {
            ctx->pc = 0x1A78E0u;
            goto label_1a78e0;
        }
    }
    ctx->pc = 0x1A78D0u;
    // 0x1a78d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a78d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a78d4: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a78d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A78D8u;
    SET_GPR_U32(ctx, 31, 0x1A78E0u);
    ctx->pc = 0x1A78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78D8u;
    // 0x1a78dc: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A78D8u, 0x1A78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78E0u;
label_1a78e0:
    // 0x1a78e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a78e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a78e8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a78ec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a78f0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1a78f4:
    // 0x1a78f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a78f8:
    // 0x1a78f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a78f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a78fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a78fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7900: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7908: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7908u;
        // 0x1a790c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7910u;
}

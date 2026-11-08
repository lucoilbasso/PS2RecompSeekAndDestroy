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

// Function: Cmd_TANK_CHART_GET_Entry__FP15BsSCDEntControl
// Address: 0x1554a8 - 0x1556ac
void Cmd_TANK_CHART_GET_Entry__FP15BsSCDEntControl_0x1554a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_CHART_GET_Entry__FP15BsSCDEntControl_0x1554a8");
#endif

    switch (ctx->pc) {
        case 0x1554f0u: goto label_1554f0;
        case 0x155508u: goto label_155508;
        case 0x155514u: goto label_155514;
        case 0x155548u: goto label_155548;
        case 0x1555b8u: goto label_1555b8;
        case 0x155600u: goto label_155600;
        case 0x15560cu: goto label_15560c;
        case 0x155638u: goto label_155638;
        case 0x155640u: goto label_155640;
        case 0x155690u: goto label_155690;
        default: break;
    }

    ctx->pc = 0x1554a8u;

    // 0x1554a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1554ac: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1554b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1554b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1554b4: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x1554b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x1554b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1554b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1554bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1554bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1554c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1554c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1554c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1554c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1554c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1554cc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1554ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1554d0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1554d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1554d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1554d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1554d8: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1554D8u;
    {
        const bool branch_taken_0x1554d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1554DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554D8u;
        // 0x1554dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554d8) {
            ctx->pc = 0x1554F0u;
            goto label_1554f0;
        }
    }
    ctx->pc = 0x1554E0u;
    // 0x1554e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1554e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1554e4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1554e8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1554E8u;
    SET_GPR_U32(ctx, 31, 0x1554F0u);
    ctx->pc = 0x1554ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554E8u;
    // 0x1554ec: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1554E8u, 0x1554F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554F0u;
label_1554f0:
    // 0x1554f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1554f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1554f8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1554F8u;
    {
        const bool branch_taken_0x1554f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F8u;
        // 0x1554fc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554f8) {
            ctx->pc = 0x155590u;
            goto label_155590;
        }
    }
    ctx->pc = 0x155500u;
    // 0x155500: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155500u;
    SET_GPR_U32(ctx, 31, 0x155508u);
    ctx->pc = 0x155504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155500u;
    // 0x155504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155500u, 0x155508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155508u;
label_155508:
    // 0x155508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15550c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15550Cu;
    SET_GPR_U32(ctx, 31, 0x155514u);
    ctx->pc = 0x155510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15550Cu;
    // 0x155510: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15550Cu, 0x155514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155514u;
label_155514:
    // 0x155514: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x155514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155518: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155518u;
    {
        const bool branch_taken_0x155518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155518u;
        // 0x15551c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155518) {
            ctx->pc = 0x155530u;
            goto label_155530;
        }
    }
    ctx->pc = 0x155520u;
    // 0x155520: 0x8e420898  lw          $v0, 0x898($s2)
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x155524: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x155524u;
    {
        const bool branch_taken_0x155524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155524u;
        // 0x155528: 0xae4208a0  sw          $v0, 0x8A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155524) {
            ctx->pc = 0x155574u;
            goto label_155574;
        }
    }
    ctx->pc = 0x15552Cu;
    // 0x15552c: 0x0  nop
    ctx->pc = 0x15552cu;
    // NOP
label_155530:
    // 0x155530: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155534: 0x8cc30898  lw          $v1, 0x898($a2)
    ctx->pc = 0x155534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
    // 0x155538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15553c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15553Cu;
    {
        const bool branch_taken_0x15553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15553Cu;
        // 0x155540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15553c) {
            ctx->pc = 0x15556Cu;
            goto label_15556c;
        }
    }
    ctx->pc = 0x155544u;
    // 0x155544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_155548:
    // 0x155548: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155548u;
    {
        const bool branch_taken_0x155548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155548u;
        // 0x15554c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155548) {
            ctx->pc = 0x155570u;
            goto label_155570;
        }
    }
    ctx->pc = 0x155550u;
    // 0x155550: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x155554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155558: 0x0  nop
    ctx->pc = 0x155558u;
    // NOP
    // 0x15555c: 0x0  nop
    ctx->pc = 0x15555cu;
    // NOP
    // 0x155560: 0x0  nop
    ctx->pc = 0x155560u;
    // NOP
    // 0x155564: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x155564u;
    {
        const bool branch_taken_0x155564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155564) {
            ctx->pc = 0x155548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155548;
        }
    }
    ctx->pc = 0x15556Cu;
label_15556c:
    // 0x15556c: 0x8cc20898  lw          $v0, 0x898($a2)
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
label_155570:
    // 0x155570: 0xac8208a0  sw          $v0, 0x8A0($a0)
    ctx->pc = 0x155570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2208), GPR_U32(ctx, 2));
label_155574:
    // 0x155574: 0x8c8208a0  lw          $v0, 0x8A0($a0)
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2208)));
    // 0x155578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15557c: 0xac8308a4  sw          $v1, 0x8A4($a0)
    ctx->pc = 0x15557cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2212), GPR_U32(ctx, 3));
    // 0x155580: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x155584: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x155584u;
    {
        const bool branch_taken_0x155584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155584u;
        // 0x155588: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155584) {
            ctx->pc = 0x155690u;
            goto label_155690;
        }
    }
    ctx->pc = 0x15558Cu;
    // 0x15558c: 0x0  nop
    ctx->pc = 0x15558cu;
    // NOP
label_155590:
    // 0x155590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155594: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x155594u;
    {
        const bool branch_taken_0x155594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155594) {
            ctx->pc = 0x155598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155594u;
            // 0x155598: 0x8e5308a0  lw          $s3, 0x8A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1555E8u;
            goto label_1555e8;
        }
    }
    ctx->pc = 0x15559Cu;
    // 0x15559c: 0x8e430898  lw          $v1, 0x898($s2)
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x1555a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1555a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1555a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1555A8u;
    {
        const bool branch_taken_0x1555a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555A8u;
        // 0x1555ac: 0x8e4408a4  lw          $a0, 0x8A4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555a8) {
            ctx->pc = 0x1555DCu;
            goto label_1555dc;
        }
    }
    ctx->pc = 0x1555B0u;
    // 0x1555b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1555b4: 0x0  nop
    ctx->pc = 0x1555b4u;
    // NOP
label_1555b8:
    // 0x1555b8: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1555B8u;
    {
        const bool branch_taken_0x1555b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1555BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555B8u;
        // 0x1555bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555b8) {
            ctx->pc = 0x1555E0u;
            goto label_1555e0;
        }
    }
    ctx->pc = 0x1555C0u;
    // 0x1555c0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1555c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1555c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1555c8: 0x0  nop
    ctx->pc = 0x1555c8u;
    // NOP
    // 0x1555cc: 0x0  nop
    ctx->pc = 0x1555ccu;
    // NOP
    // 0x1555d0: 0x0  nop
    ctx->pc = 0x1555d0u;
    // NOP
    // 0x1555d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1555D4u;
    {
        const bool branch_taken_0x1555d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1555d4) {
            ctx->pc = 0x1555B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1555b8;
        }
    }
    ctx->pc = 0x1555DCu;
label_1555dc:
    // 0x1555dc: 0x8ca20898  lw          $v0, 0x898($a1)
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2200)));
label_1555e0:
    // 0x1555e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1555E0u;
    {
        const bool branch_taken_0x1555e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555E0u;
        // 0x1555e4: 0xae4208a0  sw          $v0, 0x8A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555e0) {
            ctx->pc = 0x155690u;
            goto label_155690;
        }
    }
    ctx->pc = 0x1555E8u;
label_1555e8:
    // 0x1555e8: 0x8e4308a4  lw          $v1, 0x8A4($s2)
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2212)));
    // 0x1555ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1555ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1555f0: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1555F0u;
    {
        const bool branch_taken_0x1555f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1555f0) {
            ctx->pc = 0x155688u;
            goto label_155688;
        }
    }
    ctx->pc = 0x1555F8u;
    // 0x1555f8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1555F8u;
    SET_GPR_U32(ctx, 31, 0x155600u);
    ctx->pc = 0x1555FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555F8u;
    // 0x1555fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1555F8u, 0x155600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155600u;
label_155600:
    // 0x155600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155604: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x155604u;
    SET_GPR_U32(ctx, 31, 0x15560Cu);
    ctx->pc = 0x155608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155604u;
    // 0x155608: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x155604u, 0x15560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15560Cu;
label_15560c:
    // 0x15560c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x15560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x155610: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x155614: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x155618: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x155618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x15561c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x155620: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x155624: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155628: 0x5046000c  beql        $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x155628u;
    {
        const bool branch_taken_0x155628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x155628) {
            ctx->pc = 0x15562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155628u;
            // 0x15562c: 0x8e4208a0  lw          $v0, 0x8A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15565Cu;
            goto label_15565c;
        }
    }
    ctx->pc = 0x155630u;
    // 0x155630: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x155630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x155634: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x155634u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_155638:
    // 0x155638: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x155638u;
    SET_GPR_U32(ctx, 31, 0x155640u);
    ctx->pc = 0x15563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155638u;
    // 0x15563c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x155638u, 0x155640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155640u;
label_155640:
    // 0x155640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155644: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x155644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x155648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15564c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155650: 0x1453fff9  bne         $v0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x155650u;
    {
        const bool branch_taken_0x155650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x155654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155650u;
        // 0x155654: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155650) {
            ctx->pc = 0x155638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155638;
        }
    }
    ctx->pc = 0x155658u;
    // 0x155658: 0x8e4208a0  lw          $v0, 0x8A0($s2)
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
label_15565c:
    // 0x15565c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155664: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x155664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x155668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15566c: 0xae4208a0  sw          $v0, 0x8A0($s2)
    ctx->pc = 0x15566cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
    // 0x155670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x155678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15567c: 0x804171a  j           func_105C68
    ctx->pc = 0x15567Cu;
    ctx->pc = 0x155680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15567Cu;
    // 0x155680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x155684u;
    // 0x155684: 0x0  nop
    ctx->pc = 0x155684u;
    // NOP
label_155688:
    // 0x155688: 0xc04171a  jal         func_105C68
    ctx->pc = 0x155688u;
    SET_GPR_U32(ctx, 31, 0x155690u);
    ctx->pc = 0x15568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155688u;
    // 0x15568c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x155688u, 0x155690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155690u;
label_155690:
    // 0x155690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15569c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15569cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1556a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1556a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1556a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1556A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556A4u;
        // 0x1556a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1556A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1556ACu;
}

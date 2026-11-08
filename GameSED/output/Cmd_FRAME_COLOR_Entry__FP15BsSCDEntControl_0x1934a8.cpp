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

// Function: Cmd_FRAME_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x1934a8 - 0x1935e8
void Cmd_FRAME_COLOR_Entry__FP15BsSCDEntControl_0x1934a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FRAME_COLOR_Entry__FP15BsSCDEntControl_0x1934a8");
#endif

    switch (ctx->pc) {
        case 0x1934d8u: goto label_1934d8;
        case 0x193500u: goto label_193500;
        case 0x193518u: goto label_193518;
        case 0x19355cu: goto label_19355c;
        case 0x193560u: goto label_193560;
        case 0x193598u: goto label_193598;
        case 0x1935acu: goto label_1935ac;
        default: break;
    }

    ctx->pc = 0x1934a8u;

    // 0x1934a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1934a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1934ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1934acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1934b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1934b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1934b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1934b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1934b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1934bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1934bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1934c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1934c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1934c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1934c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1934c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1934cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1934ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1934d0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1934D0u;
    SET_GPR_U32(ctx, 31, 0x1934D8u);
    ctx->pc = 0x1934D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934D0u;
    // 0x1934d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1934D0u, 0x1934D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1934D8u;
label_1934d8:
    // 0x1934d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1934d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1934dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1934e0: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x1934e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D630u));
    // 0x1934e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1934e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1934e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1934e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1934ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1934f0: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1934F0u;
    {
        const bool branch_taken_0x1934f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1934f0) {
            ctx->pc = 0x1934F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1934F0u;
            // 0x1934f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193540u;
            goto label_193540;
        }
    }
    ctx->pc = 0x1934F8u;
    // 0x1934f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1934F8u;
    SET_GPR_U32(ctx, 31, 0x193500u);
    ctx->pc = 0x1934FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934F8u;
    // 0x1934fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1934F8u, 0x193500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193500u;
label_193500:
    // 0x193500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19350c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19350cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x193510: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x193510u;
    SET_GPR_U32(ctx, 31, 0x193518u);
    ctx->pc = 0x193514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193510u;
    // 0x193514: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x193510u, 0x193518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193518u;
label_193518:
    // 0x193518: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x193518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x19351c: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x19351cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193520: 0x26100220  addiu       $s0, $s0, 0x220
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x193524: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x193524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x193528: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x193528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x19352c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19352cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x193530: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x193530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x193534: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193534u;
        // 0x193538: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193534) {
            ctx->pc = 0x1935CCu;
            goto label_1935cc;
        }
    }
    ctx->pc = 0x19353Cu;
    // 0x19353c: 0x0  nop
    ctx->pc = 0x19353cu;
    // NOP
label_193540:
    // 0x193540: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x193540u;
    {
        const bool branch_taken_0x193540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x193544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193540u;
        // 0x193544: 0x26700220  addiu       $s0, $s3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193540) {
            ctx->pc = 0x193590u;
            goto label_193590;
        }
    }
    ctx->pc = 0x193548u;
    // 0x193548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19354c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193550: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x193550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x193554: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x193554u;
    SET_GPR_U32(ctx, 31, 0x19355Cu);
    ctx->pc = 0x193558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193554u;
    // 0x193558: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x193554u, 0x19355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19355Cu;
label_19355c:
    // 0x19355c: 0x26700220  addiu       $s0, $s3, 0x220
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
label_193560:
    // 0x193560: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x193560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193564: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193568: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x193568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x19356c: 0x2a450004  slti        $a1, $s2, 0x4
    ctx->pc = 0x19356cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x193570: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x193570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x193574: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x193574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x193578: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x193578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19357c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x19357cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x193580: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x193580u;
    {
        const bool branch_taken_0x193580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x193584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193580u;
        // 0x193584: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193580) {
            ctx->pc = 0x193560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193560;
        }
    }
    ctx->pc = 0x193588u;
    // 0x193588: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x193588u;
    {
        const bool branch_taken_0x193588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193588u;
        // 0x19358c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193588) {
            ctx->pc = 0x1935D0u;
            goto label_1935d0;
        }
    }
    ctx->pc = 0x193590u;
label_193590:
    // 0x193590: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193594: 0x0  nop
    ctx->pc = 0x193594u;
    // NOP
label_193598:
    // 0x193598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19359c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935a0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1935a4: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x1935A4u;
    SET_GPR_U32(ctx, 31, 0x1935ACu);
    ctx->pc = 0x1935A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935A4u;
    // 0x1935a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x1935A4u, 0x1935ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935ACu;
label_1935ac:
    // 0x1935ac: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1935acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1935b0: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x1935b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1935b4: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x1935b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1935b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1935b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1935bc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1935bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1935c0: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1935c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1935c4: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1935C4u;
    {
        const bool branch_taken_0x1935c4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1935C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935C4u;
        // 0x1935c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935c4) {
            ctx->pc = 0x193598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193598;
        }
    }
    ctx->pc = 0x1935CCu;
label_1935cc:
    // 0x1935cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1935ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1935d0:
    // 0x1935d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1935d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1935d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1935d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1935d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1935dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1935dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1935e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1935E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1935E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935E0u;
        // 0x1935e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1935E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1935E8u;
}

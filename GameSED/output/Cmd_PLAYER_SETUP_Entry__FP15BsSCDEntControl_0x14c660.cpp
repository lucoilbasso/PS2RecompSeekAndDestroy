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

// Function: Cmd_PLAYER_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x14c660 - 0x14c784
void Cmd_PLAYER_SETUP_Entry__FP15BsSCDEntControl_0x14c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PLAYER_SETUP_Entry__FP15BsSCDEntControl_0x14c660");
#endif

    switch (ctx->pc) {
        case 0x14c660u: goto label_14c660;
        case 0x14c664u: goto label_14c664;
        case 0x14c668u: goto label_14c668;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c670u: goto label_14c670;
        case 0x14c674u: goto label_14c674;
        case 0x14c678u: goto label_14c678;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c680u: goto label_14c680;
        case 0x14c684u: goto label_14c684;
        case 0x14c688u: goto label_14c688;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c690u: goto label_14c690;
        case 0x14c694u: goto label_14c694;
        case 0x14c698u: goto label_14c698;
        case 0x14c69cu: goto label_14c69c;
        case 0x14c6a0u: goto label_14c6a0;
        case 0x14c6a4u: goto label_14c6a4;
        case 0x14c6a8u: goto label_14c6a8;
        case 0x14c6acu: goto label_14c6ac;
        case 0x14c6b0u: goto label_14c6b0;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c6bcu: goto label_14c6bc;
        case 0x14c6c0u: goto label_14c6c0;
        case 0x14c6c4u: goto label_14c6c4;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6ccu: goto label_14c6cc;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c6dcu: goto label_14c6dc;
        case 0x14c6e0u: goto label_14c6e0;
        case 0x14c6e4u: goto label_14c6e4;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c6ecu: goto label_14c6ec;
        case 0x14c6f0u: goto label_14c6f0;
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6f8u: goto label_14c6f8;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c700u: goto label_14c700;
        case 0x14c704u: goto label_14c704;
        case 0x14c708u: goto label_14c708;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c710u: goto label_14c710;
        case 0x14c714u: goto label_14c714;
        case 0x14c718u: goto label_14c718;
        case 0x14c71cu: goto label_14c71c;
        case 0x14c720u: goto label_14c720;
        case 0x14c724u: goto label_14c724;
        case 0x14c728u: goto label_14c728;
        case 0x14c72cu: goto label_14c72c;
        case 0x14c730u: goto label_14c730;
        case 0x14c734u: goto label_14c734;
        case 0x14c738u: goto label_14c738;
        case 0x14c73cu: goto label_14c73c;
        case 0x14c740u: goto label_14c740;
        case 0x14c744u: goto label_14c744;
        case 0x14c748u: goto label_14c748;
        case 0x14c74cu: goto label_14c74c;
        case 0x14c750u: goto label_14c750;
        case 0x14c754u: goto label_14c754;
        case 0x14c758u: goto label_14c758;
        case 0x14c75cu: goto label_14c75c;
        case 0x14c760u: goto label_14c760;
        case 0x14c764u: goto label_14c764;
        case 0x14c768u: goto label_14c768;
        case 0x14c76cu: goto label_14c76c;
        case 0x14c770u: goto label_14c770;
        case 0x14c774u: goto label_14c774;
        case 0x14c778u: goto label_14c778;
        case 0x14c77cu: goto label_14c77c;
        case 0x14c780u: goto label_14c780;
        default: break;
    }

    ctx->pc = 0x14c660u;

label_14c660:
    // 0x14c660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14c664:
    // 0x14c664: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_14c668:
    // 0x14c668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14c66c:
    // 0x14c66c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14c670:
    // 0x14c670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14c670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c674:
    // 0x14c674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14c678:
    // 0x14c678: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14c678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_14c67c:
    // 0x14c67c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14c680:
    // 0x14c680: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_14c684:
    // 0x14c684: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x14c684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_14c688:
    // 0x14c688: 0x8c710040  lw          $s1, 0x40($v1)
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_14c68c:
    // 0x14c68c: 0xc06a26e  jal         func_1A89B8
label_14c690:
    if (ctx->pc == 0x14C690u) {
        ctx->pc = 0x14C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C68Cu;
        // 0x14c690: 0x8cb30044  lw          $s3, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C694u;
        goto label_14c694;
    }
    ctx->pc = 0x14C68Cu;
    SET_GPR_U32(ctx, 31, 0x14C694u);
    ctx->pc = 0x14C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C68Cu;
    // 0x14c690: 0x8cb30044  lw          $s3, 0x44($a1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14C68Cu, 0x14C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C694u;
label_14c694:
    // 0x14c694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c698:
    // 0x14c698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14c69c:
    // 0x14c69c: 0xc053162  jal         func_14C588
label_14c6a0:
    if (ctx->pc == 0x14C6A0u) {
        ctx->pc = 0x14C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C69Cu;
        // 0x14c6a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6A4u;
        goto label_14c6a4;
    }
    ctx->pc = 0x14C69Cu;
    SET_GPR_U32(ctx, 31, 0x14C6A4u);
    ctx->pc = 0x14C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C69Cu;
    // 0x14c6a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C588u, 0x14C69Cu, 0x14C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6A4u;
label_14c6a4:
    // 0x14c6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14c6a8:
    // 0x14c6a8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x14c6a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_14c6ac:
    // 0x14c6ac: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_14c6b0:
    // 0x14c6b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_14c6b4:
    if (ctx->pc == 0x14C6B4u) {
        ctx->pc = 0x14C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6B0u;
        // 0x14c6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6B8u;
        goto label_14c6b8;
    }
    ctx->pc = 0x14C6B0u;
    {
        const bool branch_taken_0x14c6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6B0u;
        // 0x14c6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6b0) {
            ctx->pc = 0x14C6C0u;
            goto label_14c6c0;
        }
    }
    ctx->pc = 0x14C6B8u;
label_14c6b8:
    // 0x14c6b8: 0xc0535b0  jal         func_14D6C0
label_14c6bc:
    if (ctx->pc == 0x14C6BCu) {
        ctx->pc = 0x14C6C0u;
        goto label_14c6c0;
    }
    ctx->pc = 0x14C6B8u;
    SET_GPR_U32(ctx, 31, 0x14C6C0u);
    ctx->pc = 0x14D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6C0u, 0x14C6B8u, 0x14C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6C0u;
label_14c6c0:
    // 0x14c6c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14c6c4:
    // 0x14c6c4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14c6c8:
    // 0x14c6c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c6cc:
    // 0x14c6cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c6d0:
    // 0x14c6d0: 0x60f809  jalr        $v1
label_14c6d4:
    if (ctx->pc == 0x14C6D4u) {
        ctx->pc = 0x14C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D0u;
        // 0x14c6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6D8u;
        goto label_14c6d8;
    }
    ctx->pc = 0x14C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C6D8u);
        ctx->pc = 0x14C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D0u;
        // 0x14c6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C6D0u, 0x14C6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C6D8u;
label_14c6d8:
    // 0x14c6d8: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14c6dc:
    // 0x14c6dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14c6e0:
    // 0x14c6e0: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14c6e4:
    // 0x14c6e4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x14c6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_14c6e8:
    // 0x14c6e8: 0x34420a00  ori         $v0, $v0, 0xA00
    ctx->pc = 0x14c6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2560);
label_14c6ec:
    // 0x14c6ec: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x14c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_14c6f0:
    // 0x14c6f0: 0xae220180  sw          $v0, 0x180($s1)
    ctx->pc = 0x14c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 2));
label_14c6f4:
    // 0x14c6f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14c6f8:
    // 0x14c6f8: 0xac713630  sw          $s1, 0x3630($v1)
    ctx->pc = 0x14c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13872), GPR_U32(ctx, 17));
label_14c6fc:
    // 0x14c6fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14c700:
    // 0x14c700: 0x10470015  beq         $v0, $a3, . + 4 + (0x15 << 2)
label_14c704:
    if (ctx->pc == 0x14C704u) {
        ctx->pc = 0x14C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C700u;
        // 0x14c704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C708u;
        goto label_14c708;
    }
    ctx->pc = 0x14C700u;
    {
        const bool branch_taken_0x14c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x14C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C700u;
        // 0x14c704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c700) {
            ctx->pc = 0x14C758u;
            goto label_14c758;
        }
    }
    ctx->pc = 0x14C708u;
label_14c708:
    // 0x14c708: 0xc06a26e  jal         func_1A89B8
label_14c70c:
    if (ctx->pc == 0x14C70Cu) {
        ctx->pc = 0x14C710u;
        goto label_14c710;
    }
    ctx->pc = 0x14C708u;
    SET_GPR_U32(ctx, 31, 0x14C710u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14C708u, 0x14C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C710u;
label_14c710:
    // 0x14c710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c714:
    // 0x14c714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c718:
    // 0x14c718: 0xc0410e4  jal         func_104390
label_14c71c:
    if (ctx->pc == 0x14C71Cu) {
        ctx->pc = 0x14C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C718u;
        // 0x14c71c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C720u;
        goto label_14c720;
    }
    ctx->pc = 0x14C718u;
    SET_GPR_U32(ctx, 31, 0x14C720u);
    ctx->pc = 0x14C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C718u;
    // 0x14c71c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x14C718u, 0x14C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C720u;
label_14c720:
    // 0x14c720: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14c720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_14c724:
    // 0x14c724: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14c724u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14c728:
    // 0x14c728: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_14c72c:
    // 0x14c72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c730:
    // 0x14c730: 0x24a56c18  addiu       $a1, $a1, 0x6C18
    ctx->pc = 0x14c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27672));
label_14c734:
    // 0x14c734: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c738:
    // 0x14c738: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_14c73c:
    // 0x14c73c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_14c740:
    // 0x14c740: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_14c744:
    if (ctx->pc == 0x14C744u) {
        ctx->pc = 0x14C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C740u;
        // 0x14c744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C748u;
        goto label_14c748;
    }
    ctx->pc = 0x14C740u;
    {
        const bool branch_taken_0x14c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C740u;
        // 0x14c744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c740) {
            ctx->pc = 0x14C750u;
            goto label_14c750;
        }
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0xc0415ec  jal         func_1057B0
label_14c74c:
    if (ctx->pc == 0x14C74Cu) {
        ctx->pc = 0x14C750u;
        goto label_14c750;
    }
    ctx->pc = 0x14C748u;
    SET_GPR_U32(ctx, 31, 0x14C750u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x14C748u, 0x14C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C750u;
label_14c750:
    // 0x14c750: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_14c754:
    // 0x14c754: 0xac520020  sw          $s2, 0x20($v0)
    ctx->pc = 0x14c754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
label_14c758:
    // 0x14c758: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14c75c:
    // 0x14c75c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_14c760:
    // 0x14c760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c764:
    // 0x14c764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c768:
    // 0x14c768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14c76c:
    // 0x14c76c: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x14c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_14c770:
    // 0x14c770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14c770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14c774:
    // 0x14c774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14c778:
    // 0x14c778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14c77c:
    // 0x14c77c: 0x3e00008  jr          $ra
label_14c780:
    if (ctx->pc == 0x14C780u) {
        ctx->pc = 0x14C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C77Cu;
        // 0x14c780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C784u;
        goto label_fallthrough_0x14c77c;
    }
    ctx->pc = 0x14C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C77Cu;
        // 0x14c780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c77c:
    ctx->pc = 0x14C784u;
}

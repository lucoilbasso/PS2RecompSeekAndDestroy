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

// Function: Cmd_MODEL_MIME_Entry__FP15BsSCDEntControl
// Address: 0x10e648 - 0x10e8a8
void Cmd_MODEL_MIME_Entry__FP15BsSCDEntControl_0x10e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_MIME_Entry__FP15BsSCDEntControl_0x10e648");
#endif

    switch (ctx->pc) {
        case 0x10e684u: goto label_10e684;
        case 0x10e6a0u: goto label_10e6a0;
        case 0x10e6b8u: goto label_10e6b8;
        case 0x10e6d4u: goto label_10e6d4;
        case 0x10e6f8u: goto label_10e6f8;
        case 0x10e708u: goto label_10e708;
        case 0x10e714u: goto label_10e714;
        case 0x10e738u: goto label_10e738;
        case 0x10e754u: goto label_10e754;
        case 0x10e76cu: goto label_10e76c;
        case 0x10e774u: goto label_10e774;
        case 0x10e7d8u: goto label_10e7d8;
        case 0x10e7e0u: goto label_10e7e0;
        case 0x10e814u: goto label_10e814;
        case 0x10e858u: goto label_10e858;
        case 0x10e87cu: goto label_10e87c;
        case 0x10e884u: goto label_10e884;
        default: break;
    }

    ctx->pc = 0x10e648u;

    // 0x10e648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10e64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e650: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10e650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10e654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e658: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e65c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e660: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10e664: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10e668: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10e66c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10e670: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10e674: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e678: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10e678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e67c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E67Cu;
    SET_GPR_U32(ctx, 31, 0x10E684u);
    ctx->pc = 0x10E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E67Cu;
    // 0x10e680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E67Cu, 0x10E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E684u;
label_10e684:
    // 0x10e684: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10e688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e68c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10e68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e690: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E690u;
    {
        const bool branch_taken_0x10e690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e690) {
            ctx->pc = 0x10E694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E690u;
            // 0x10e694: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E6BCu;
            goto label_10e6bc;
        }
    }
    ctx->pc = 0x10E698u;
    // 0x10e698: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E698u;
    SET_GPR_U32(ctx, 31, 0x10E6A0u);
    ctx->pc = 0x10E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E698u;
    // 0x10e69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E698u, 0x10E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6A0u;
label_10e6a0:
    // 0x10e6a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e6a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6a8: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10e6ac: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e6b0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E6B0u;
    SET_GPR_U32(ctx, 31, 0x10E6B8u);
    ctx->pc = 0x10E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6B0u;
    // 0x10e6b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E6B0u, 0x10E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6B8u;
label_10e6b8:
    // 0x10e6b8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e6bc:
    // 0x10e6bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e6c0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E6C0u;
    {
        const bool branch_taken_0x10e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6C0u;
        // 0x10e6c4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6c0) {
            ctx->pc = 0x10E720u;
            goto label_10e720;
        }
    }
    ctx->pc = 0x10E6C8u;
    // 0x10e6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6cc: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x10E6CCu;
    SET_GPR_U32(ctx, 31, 0x10E6D4u);
    ctx->pc = 0x10E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6CCu;
    // 0x10e6d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x10E6CCu, 0x10E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6D4u;
label_10e6d4:
    // 0x10e6d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6d8: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E6D8u;
    {
        const bool branch_taken_0x10e6d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e6d8) {
            ctx->pc = 0x10E6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E6D8u;
            // 0x10e6dc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E700u;
            goto label_10e700;
        }
    }
    ctx->pc = 0x10E6E0u;
    // 0x10e6e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e6e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e6e8: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x10e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x10e6ec: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e6f0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E6F0u;
    SET_GPR_U32(ctx, 31, 0x10E6F8u);
    ctx->pc = 0x10E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6F0u;
    // 0x10e6f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E6F0u, 0x10E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6F8u;
label_10e6f8:
    // 0x10e6f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x10E6F8u;
    {
        const bool branch_taken_0x10e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6F8u;
        // 0x10e6fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6f8) {
            ctx->pc = 0x10E888u;
            goto label_10e888;
        }
    }
    ctx->pc = 0x10E700u;
label_10e700:
    // 0x10e700: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10E700u;
    SET_GPR_U32(ctx, 31, 0x10E708u);
    ctx->pc = 0x10E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E700u;
    // 0x10e704: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10E700u, 0x10E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E708u;
label_10e708:
    // 0x10e708: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10e708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10e70c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10E70Cu;
    SET_GPR_U32(ctx, 31, 0x10E714u);
    ctx->pc = 0x10E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E70Cu;
    // 0x10e710: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10E70Cu, 0x10E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E714u;
label_10e714:
    // 0x10e714: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e718: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x10E718u;
    {
        const bool branch_taken_0x10e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E718u;
        // 0x10e71c: 0x503821  addu        $a3, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e718) {
            ctx->pc = 0x10E7E8u;
            goto label_10e7e8;
        }
    }
    ctx->pc = 0x10E720u;
label_10e720:
    // 0x10e720: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e72c: 0x8c520044  lw          $s2, 0x44($v0)
    ctx->pc = 0x10e72cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e730: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E730u;
    SET_GPR_U32(ctx, 31, 0x10E738u);
    ctx->pc = 0x10E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E730u;
    // 0x10e734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E730u, 0x10E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E738u;
label_10e738:
    // 0x10e738: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x10e738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x10e73c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e740: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x10e740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e744: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E744u;
    {
        const bool branch_taken_0x10e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e744) {
            ctx->pc = 0x10E76Cu;
            goto label_10e76c;
        }
    }
    ctx->pc = 0x10E74Cu;
    // 0x10e74c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E74Cu;
    SET_GPR_U32(ctx, 31, 0x10E754u);
    ctx->pc = 0x10E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E74Cu;
    // 0x10e750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E74Cu, 0x10E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E754u;
label_10e754:
    // 0x10e754: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e75c: 0x24a53d80  addiu       $a1, $a1, 0x3D80
    ctx->pc = 0x10e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    // 0x10e760: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e764: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E764u;
    SET_GPR_U32(ctx, 31, 0x10E76Cu);
    ctx->pc = 0x10E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E764u;
    // 0x10e768: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E764u, 0x10E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E76Cu;
label_10e76c:
    // 0x10e76c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E76Cu;
    SET_GPR_U32(ctx, 31, 0x10E774u);
    ctx->pc = 0x10E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E76Cu;
    // 0x10e770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E76Cu, 0x10E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E774u;
label_10e774:
    // 0x10e774: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E774u;
    {
        const bool branch_taken_0x10e774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e774) {
            ctx->pc = 0x10E788u;
            goto label_10e788;
        }
    }
    ctx->pc = 0x10E77Cu;
    // 0x10e77c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10E77Cu;
    {
        const bool branch_taken_0x10e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E77Cu;
        // 0x10e780: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e77c) {
            ctx->pc = 0x10E7C4u;
            goto label_10e7c4;
        }
    }
    ctx->pc = 0x10E784u;
    // 0x10e784: 0x0  nop
    ctx->pc = 0x10e784u;
    // NOP
label_10e788:
    // 0x10e788: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E788u;
    {
        const bool branch_taken_0x10e788 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10e788) {
            ctx->pc = 0x10E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E788u;
            // 0x10e78c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7A0u;
            goto label_10e7a0;
        }
    }
    ctx->pc = 0x10E790u;
    // 0x10e790: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x10e794: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x10e794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x10e798: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E798u;
    {
        const bool branch_taken_0x10e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E798u;
        // 0x10e79c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e798) {
            ctx->pc = 0x10E7C4u;
            goto label_10e7c4;
        }
    }
    ctx->pc = 0x10E7A0u;
label_10e7a0:
    // 0x10e7a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10e7a4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x10e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x10e7a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E7A8u;
    {
        const bool branch_taken_0x10e7a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A8u;
        // 0x10e7ac: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7a8) {
            ctx->pc = 0x10E7C0u;
            goto label_10e7c0;
        }
    }
    ctx->pc = 0x10E7B0u;
    // 0x10e7b0: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x10e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x10e7b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E7B4u;
    {
        const bool branch_taken_0x10e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7B4u;
        // 0x10e7b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7b4) {
            ctx->pc = 0x10E7C4u;
            goto label_10e7c4;
        }
    }
    ctx->pc = 0x10E7BCu;
    // 0x10e7bc: 0x0  nop
    ctx->pc = 0x10e7bcu;
    // NOP
label_10e7c0:
    // 0x10e7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e7c4:
    // 0x10e7c4: 0x8e1001b8  lw          $s0, 0x1B8($s0)
    ctx->pc = 0x10e7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x10e7c8: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x10e7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10e7cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10e7d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10E7D0u;
    SET_GPR_U32(ctx, 31, 0x10E7D8u);
    ctx->pc = 0x10E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7D0u;
    // 0x10e7d4: 0x118980  sll         $s1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10E7D0u, 0x10E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7D8u;
label_10e7d8:
    // 0x10e7d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10E7D8u;
    SET_GPR_U32(ctx, 31, 0x10E7E0u);
    ctx->pc = 0x10E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7D8u;
    // 0x10e7dc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10E7D8u, 0x10E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7E0u;
label_10e7e0:
    // 0x10e7e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10e7e4: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x10e7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10e7e8:
    // 0x10e7e8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x10e7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7ec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x10e7ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7f0: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x10e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x10e7f4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E7F4u;
    {
        const bool branch_taken_0x10e7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7f4) {
            ctx->pc = 0x10E85Cu;
            goto label_10e85c;
        }
    }
    ctx->pc = 0x10E7FCu;
    // 0x10e7fc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x10e7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e800: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E800u;
    {
        const bool branch_taken_0x10e800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E800u;
        // 0x10e804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e800) {
            ctx->pc = 0x10E80Cu;
            goto label_10e80c;
        }
    }
    ctx->pc = 0x10E808u;
    // 0x10e808: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10e80c:
    // 0x10e80c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10E80Cu;
    SET_GPR_U32(ctx, 31, 0x10E814u);
    ctx->pc = 0x10E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E80Cu;
    // 0x10e810: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10E80Cu, 0x10E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e818: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10E818u;
    {
        const bool branch_taken_0x10e818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e818) {
            ctx->pc = 0x10E81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E818u;
            // 0x10e81c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E848u;
            goto label_10e848;
        }
    }
    ctx->pc = 0x10E820u;
    // 0x10e820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e828: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10e828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10e82c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x10e82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10e830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10e834: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10e838: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x10e838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10e83c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x10e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x10e840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E840u;
    {
        const bool branch_taken_0x10e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E840u;
        // 0x10e844: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e840) {
            ctx->pc = 0x10E858u;
            goto label_10e858;
        }
    }
    ctx->pc = 0x10E848u;
label_10e848:
    // 0x10e848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e84c: 0x24a53d90  addiu       $a1, $a1, 0x3D90
    ctx->pc = 0x10e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15760));
    // 0x10e850: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10E850u;
    SET_GPR_U32(ctx, 31, 0x10E858u);
    ctx->pc = 0x10E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E850u;
    // 0x10e854: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10E850u, 0x10E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E858u;
label_10e858:
    // 0x10e858: 0xae7001a4  sw          $s0, 0x1A4($s3)
    ctx->pc = 0x10e858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 16));
label_10e85c:
    // 0x10e85c: 0x8e6401a4  lw          $a0, 0x1A4($s3)
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 420)));
    // 0x10e860: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E864u;
    {
        const bool branch_taken_0x10e864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E864u;
        // 0x10e868: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e864) {
            ctx->pc = 0x10E888u;
            goto label_10e888;
        }
    }
    ctx->pc = 0x10E86Cu;
    // 0x10e86c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e870: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x10e870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e874: 0xc064f00  jal         func_193C00
    ctx->pc = 0x10E874u;
    SET_GPR_U32(ctx, 31, 0x10E87Cu);
    ctx->pc = 0x10E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E874u;
    // 0x10e878: 0x8ca60194  lw          $a2, 0x194($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x10E874u, 0x10E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E87Cu;
label_10e87c:
    // 0x10e87c: 0xc0654ea  jal         func_1953A8
    ctx->pc = 0x10E87Cu;
    SET_GPR_U32(ctx, 31, 0x10E884u);
    ctx->pc = 0x10E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E87Cu;
    // 0x10e880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1953A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953A8u, 0x10E87Cu, 0x10E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E884u;
label_10e884:
    // 0x10e884: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10e884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e888:
    // 0x10e888: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10e888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10e88c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e890: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10e890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10e894: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10e894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e898: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x10e898u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10e89c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8A0u;
        // 0x10e8a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E8A8u;
}

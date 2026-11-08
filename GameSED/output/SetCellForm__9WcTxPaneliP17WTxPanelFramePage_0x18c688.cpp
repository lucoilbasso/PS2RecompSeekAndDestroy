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

// Function: SetCellForm__9WcTxPaneliP17WTxPanelFramePage
// Address: 0x18c688 - 0x18cb94
void SetCellForm__9WcTxPaneliP17WTxPanelFramePage_0x18c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCellForm__9WcTxPaneliP17WTxPanelFramePage_0x18c688");
#endif

    switch (ctx->pc) {
        case 0x18c6c0u: goto label_18c6c0;
        case 0x18c6dcu: goto label_18c6dc;
        case 0x18c6ecu: goto label_18c6ec;
        case 0x18c6fcu: goto label_18c6fc;
        case 0x18c70cu: goto label_18c70c;
        case 0x18c71cu: goto label_18c71c;
        case 0x18c72cu: goto label_18c72c;
        case 0x18c738u: goto label_18c738;
        case 0x18c798u: goto label_18c798;
        case 0x18c7b0u: goto label_18c7b0;
        case 0x18c800u: goto label_18c800;
        case 0x18c830u: goto label_18c830;
        case 0x18c850u: goto label_18c850;
        case 0x18c870u: goto label_18c870;
        case 0x18c898u: goto label_18c898;
        case 0x18c8b8u: goto label_18c8b8;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c90cu: goto label_18c90c;
        case 0x18cb78u: goto label_18cb78;
        default: break;
    }

    ctx->pc = 0x18c688u;

    // 0x18c688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c68c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18c698: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c69c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18c6a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18c6a4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x18c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18c6a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C6A8u;
    {
        const bool branch_taken_0x18c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6A8u;
        // 0x18c6ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6a8) {
            ctx->pc = 0x18C6C0u;
            goto label_18c6c0;
        }
    }
    ctx->pc = 0x18C6B0u;
    // 0x18c6b0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18c6b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18c6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c6b8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18C6B8u;
    SET_GPR_U32(ctx, 31, 0x18C6C0u);
    ctx->pc = 0x18C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6B8u;
    // 0x18c6bc: 0x24a58048  addiu       $a1, $a1, -0x7FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18C6B8u, 0x18C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6C0u;
label_18c6c0:
    // 0x18c6c0: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18c6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6c8: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18c6cc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x18c6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c6d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18c6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18c6d4: 0xc0638de  jal         func_18E378
    ctx->pc = 0x18C6D4u;
    SET_GPR_U32(ctx, 31, 0x18C6DCu);
    ctx->pc = 0x18C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6D4u;
    // 0x18c6d8: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E378u, 0x18C6D4u, 0x18C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6DCu;
label_18c6dc:
    // 0x18c6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6e0: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18c6e4: 0xc0638de  jal         func_18E378
    ctx->pc = 0x18C6E4u;
    SET_GPR_U32(ctx, 31, 0x18C6ECu);
    ctx->pc = 0x18C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6E4u;
    // 0x18c6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E378u, 0x18C6E4u, 0x18C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6ECu;
label_18c6ec:
    // 0x18c6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6f0: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x18c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x18c6f4: 0xc0638de  jal         func_18E378
    ctx->pc = 0x18C6F4u;
    SET_GPR_U32(ctx, 31, 0x18C6FCu);
    ctx->pc = 0x18C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6F4u;
    // 0x18c6f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E378u, 0x18C6F4u, 0x18C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6FCu;
label_18c6fc:
    // 0x18c6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c700: 0xae02021c  sw          $v0, 0x21C($s0)
    ctx->pc = 0x18c700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
    // 0x18c704: 0xc063900  jal         func_18E400
    ctx->pc = 0x18C704u;
    SET_GPR_U32(ctx, 31, 0x18C70Cu);
    ctx->pc = 0x18C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C704u;
    // 0x18c708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x18C704u, 0x18C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C70Cu;
label_18c70c:
    // 0x18c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c710: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x18c710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x18c714: 0xc063900  jal         func_18E400
    ctx->pc = 0x18C714u;
    SET_GPR_U32(ctx, 31, 0x18C71Cu);
    ctx->pc = 0x18C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C714u;
    // 0x18c718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x18C714u, 0x18C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C71Cu;
label_18c71c:
    // 0x18c71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c720: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x18c720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x18c724: 0xc062e02  jal         func_18B808
    ctx->pc = 0x18C724u;
    SET_GPR_U32(ctx, 31, 0x18C72Cu);
    ctx->pc = 0x18C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C724u;
    // 0x18c728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B808u, 0x18C724u, 0x18C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C72Cu;
label_18c72c:
    // 0x18c72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c730: 0xc0639c4  jal         func_18E710
    ctx->pc = 0x18C730u;
    SET_GPR_U32(ctx, 31, 0x18C738u);
    ctx->pc = 0x18C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C730u;
    // 0x18c734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E710u, 0x18C730u, 0x18C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C738u;
label_18c738:
    // 0x18c738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c73c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c740: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c744: 0x14430074  bne         $v0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x18C744u;
    {
        const bool branch_taken_0x18c744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C744u;
        // 0x18c748: 0xae040238  sw          $a0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c744) {
            ctx->pc = 0x18C918u;
            goto label_18c918;
        }
    }
    ctx->pc = 0x18C74Cu;
    // 0x18c74c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18c750: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x18c750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x18c754: 0x2421824  and         $v1, $s2, $v0
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18c758: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C758u;
    {
        const bool branch_taken_0x18c758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C758u;
        // 0x18c75c: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c758) {
            ctx->pc = 0x18C7A0u;
            goto label_18c7a0;
        }
    }
    ctx->pc = 0x18C760u;
    // 0x18c760: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C760u;
    {
        const bool branch_taken_0x18c760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C760u;
        // 0x18c764: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c760) {
            ctx->pc = 0x18C780u;
            goto label_18c780;
        }
    }
    ctx->pc = 0x18C768u;
    // 0x18c768: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c76c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C76Cu;
    {
        const bool branch_taken_0x18c76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C76Cu;
        // 0x18c770: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c76c) {
            ctx->pc = 0x18C790u;
            goto label_18c790;
        }
    }
    ctx->pc = 0x18C774u;
    // 0x18c774: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x18C774u;
    {
        const bool branch_taken_0x18c774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C774u;
        // 0x18c778: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c774) {
            ctx->pc = 0x18C904u;
            goto label_18c904;
        }
    }
    ctx->pc = 0x18C77Cu;
    // 0x18c77c: 0x0  nop
    ctx->pc = 0x18c77cu;
    // NOP
label_18c780:
    // 0x18c780: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18C780u;
    {
        const bool branch_taken_0x18c780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c780) {
            ctx->pc = 0x18C7B8u;
            goto label_18c7b8;
        }
    }
    ctx->pc = 0x18C788u;
    // 0x18c788: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18C788u;
    {
        const bool branch_taken_0x18c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C788u;
        // 0x18c78c: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c788) {
            ctx->pc = 0x18C900u;
            goto label_18c900;
        }
    }
    ctx->pc = 0x18C790u;
label_18c790:
    // 0x18c790: 0xc063a56  jal         func_18E958
    ctx->pc = 0x18C790u;
    SET_GPR_U32(ctx, 31, 0x18C798u);
    ctx->pc = 0x18C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C790u;
    // 0x18c794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E958u, 0x18C790u, 0x18C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C798u;
label_18c798:
    // 0x18c798: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18C798u;
    {
        const bool branch_taken_0x18c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C798u;
        // 0x18c79c: 0x8e030238  lw          $v1, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c798) {
            ctx->pc = 0x18C910u;
            goto label_18c910;
        }
    }
    ctx->pc = 0x18C7A0u;
label_18c7a0:
    // 0x18c7a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7a8: 0xc063a64  jal         func_18E990
    ctx->pc = 0x18C7A8u;
    SET_GPR_U32(ctx, 31, 0x18C7B0u);
    ctx->pc = 0x18C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7A8u;
    // 0x18c7ac: 0x3247ffff  andi        $a3, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E990u, 0x18C7A8u, 0x18C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7B0u;
label_18c7b0:
    // 0x18c7b0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x18C7B0u;
    {
        const bool branch_taken_0x18c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7B0u;
        // 0x18c7b4: 0x8e030238  lw          $v1, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7b0) {
            ctx->pc = 0x18C910u;
            goto label_18c910;
        }
    }
    ctx->pc = 0x18C7B8u;
label_18c7b8:
    // 0x18c7b8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x18c7bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c7c0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18c7c4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x18c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x18c7c8: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x18c7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x18c7cc: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x18C7CCu;
    {
        const bool branch_taken_0x18c7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c7cc) {
            ctx->pc = 0x18C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C7CCu;
            // 0x18c7d0: 0x8e020238  lw          $v0, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8F8u;
            goto label_18c8f8;
        }
    }
    ctx->pc = 0x18C7D4u;
    // 0x18c7d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c7d8: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x18c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x18c7dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c7e0: 0x8c638060  lw          $v1, -0x7FA0($v1)
    ctx->pc = 0x18c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934624)));
    // 0x18c7e4: 0x600008  jr          $v1
    ctx->pc = 0x18C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C7F0u: goto label_18c7f0;
            case 0x18C820u: goto label_18c820;
            case 0x18C840u: goto label_18c840;
            case 0x18C860u: goto label_18c860;
            case 0x18C880u: goto label_18c880;
            case 0x18C8A8u: goto label_18c8a8;
            case 0x18C8C8u: goto label_18c8c8;
            case 0x18C8F4u: goto label_18c8f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18C7ECu;
    // 0x18c7ec: 0x0  nop
    ctx->pc = 0x18c7ecu;
    // NOP
label_18c7f0:
    // 0x18c7f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7f8: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C7F8u;
    SET_GPR_U32(ctx, 31, 0x18C800u);
    ctx->pc = 0x18C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7F8u;
    // 0x18c7fc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C7F8u, 0x18C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C800u;
label_18c800:
    // 0x18c800: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c804: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18c808: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18c808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18c80c: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x18c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x18c810: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x18c810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x18c814: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18C814u;
    {
        const bool branch_taken_0x18c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C814u;
        // 0x18c818: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c814) {
            ctx->pc = 0x18C8F4u;
            goto label_18c8f4;
        }
    }
    ctx->pc = 0x18C81Cu;
    // 0x18c81c: 0x0  nop
    ctx->pc = 0x18c81cu;
    // NOP
label_18c820:
    // 0x18c820: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c828: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C828u;
    SET_GPR_U32(ctx, 31, 0x18C830u);
    ctx->pc = 0x18C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C828u;
    // 0x18c82c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C828u, 0x18C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C830u;
label_18c830:
    // 0x18c830: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c834: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x18c834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x18c838: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18C838u;
    {
        const bool branch_taken_0x18c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C838u;
        // 0x18c83c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c838) {
            ctx->pc = 0x18C8E4u;
            goto label_18c8e4;
        }
    }
    ctx->pc = 0x18C840u;
label_18c840:
    // 0x18c840: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c848: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C848u;
    SET_GPR_U32(ctx, 31, 0x18C850u);
    ctx->pc = 0x18C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C848u;
    // 0x18c84c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C848u, 0x18C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C850u;
label_18c850:
    // 0x18c850: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c854: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x18c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c858: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18C858u;
    {
        const bool branch_taken_0x18c858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C858u;
        // 0x18c85c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c858) {
            ctx->pc = 0x18C8E4u;
            goto label_18c8e4;
        }
    }
    ctx->pc = 0x18C860u;
label_18c860:
    // 0x18c860: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c864: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c868: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C868u;
    SET_GPR_U32(ctx, 31, 0x18C870u);
    ctx->pc = 0x18C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C868u;
    // 0x18c86c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C868u, 0x18C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C870u;
label_18c870:
    // 0x18c870: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c874: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18c878: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18C878u;
    {
        const bool branch_taken_0x18c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C878u;
        // 0x18c87c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c878) {
            ctx->pc = 0x18C8E4u;
            goto label_18c8e4;
        }
    }
    ctx->pc = 0x18C880u;
label_18c880:
    // 0x18c880: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c888: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x18c888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x18c88c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18c890: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C890u;
    SET_GPR_U32(ctx, 31, 0x18C898u);
    ctx->pc = 0x18C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C890u;
    // 0x18c894: 0x8c640044  lw          $a0, 0x44($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C890u, 0x18C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C898u;
label_18c898:
    // 0x18c898: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c89c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18c8a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18C8A0u;
    {
        const bool branch_taken_0x18c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8A0u;
        // 0x18c8a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8a0) {
            ctx->pc = 0x18C8E4u;
            goto label_18c8e4;
        }
    }
    ctx->pc = 0x18C8A8u;
label_18c8a8:
    // 0x18c8a8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c8ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c8b0: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C8B0u;
    SET_GPR_U32(ctx, 31, 0x18C8B8u);
    ctx->pc = 0x18C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8B0u;
    // 0x18c8b4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C8B0u, 0x18C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8B8u;
label_18c8b8:
    // 0x18c8b8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c8bc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18c8c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C8C0u;
    {
        const bool branch_taken_0x18c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8C0u;
        // 0x18c8c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8c0) {
            ctx->pc = 0x18C8E4u;
            goto label_18c8e4;
        }
    }
    ctx->pc = 0x18C8C8u;
label_18c8c8:
    // 0x18c8c8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c8cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c8d0: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C8D0u;
    SET_GPR_U32(ctx, 31, 0x18C8D8u);
    ctx->pc = 0x18C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8D0u;
    // 0x18c8d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C8D0u, 0x18C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8D8u;
label_18c8d8:
    // 0x18c8d8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c8dc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x18c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18c8e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18c8e4:
    // 0x18c8e4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x18c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x18c8e8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x18c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x18c8ec: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x18c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x18c8f0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x18c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
label_18c8f4:
    // 0x18c8f4: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18c8f8:
    // 0x18c8f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C8F8u;
    {
        const bool branch_taken_0x18c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8F8u;
        // 0x18c8fc: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8f8) {
            ctx->pc = 0x18C918u;
            goto label_18c918;
        }
    }
    ctx->pc = 0x18C900u;
label_18c900:
    // 0x18c900: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c904:
    // 0x18c904: 0xc063a2c  jal         func_18E8B0
    ctx->pc = 0x18C904u;
    SET_GPR_U32(ctx, 31, 0x18C90Cu);
    ctx->pc = 0x18C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C904u;
    // 0x18c908: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E8B0u, 0x18C904u, 0x18C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C90Cu;
label_18c90c:
    // 0x18c90c: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x18c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18c910:
    // 0x18c910: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c914: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x18c914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_18c918:
    // 0x18c918: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18c91c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x18c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x18c920: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18c920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18c924: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18C924u;
    {
        const bool branch_taken_0x18c924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c924) {
            ctx->pc = 0x18C928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C924u;
            // 0x18c928: 0x8e050238  lw          $a1, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C95Cu;
            goto label_18c95c;
        }
    }
    ctx->pc = 0x18C92Cu;
    // 0x18c92c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x18c930: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c934: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18c938: 0x28430023  slti        $v1, $v0, 0x23
    ctx->pc = 0x18c938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x18c93c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C93Cu;
    {
        const bool branch_taken_0x18c93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c93c) {
            ctx->pc = 0x18C940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C93Cu;
            // 0x18c940: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C958u;
            goto label_18c958;
        }
    }
    ctx->pc = 0x18C944u;
    // 0x18c944: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18c948: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C948u;
    {
        const bool branch_taken_0x18c948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c948) {
            ctx->pc = 0x18C94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C948u;
            // 0x18c94c: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C958u;
            goto label_18c958;
        }
    }
    ctx->pc = 0x18C950u;
    // 0x18c950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c954: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x18c954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_18c958:
    // 0x18c958: 0x8e050238  lw          $a1, 0x238($s0)
    ctx->pc = 0x18c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18c95c:
    // 0x18c95c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x18c960: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x18c960u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x18c964: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x18c964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18c968: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x18c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x18c96c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x18c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x18c970: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x18c970u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x18c974: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x18c974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x18c978: 0xa4e20050  sh          $v0, 0x50($a3)
    ctx->pc = 0x18c978u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c97c: 0xa4e30052  sh          $v1, 0x52($a3)
    ctx->pc = 0x18c97cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x18c980: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x18c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18c984: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x18c984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x18c988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c98c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c990: 0x94e40056  lhu         $a0, 0x56($a3)
    ctx->pc = 0x18c990u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x18c994: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c998: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c99c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18c9a0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x18c9a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18c9a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18c9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18c9a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18c9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c9b0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x18c9b0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x18c9b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18c9b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18c9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18c9bc: 0xace20058  sw          $v0, 0x58($a3)
    ctx->pc = 0x18c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 2));
    // 0x18c9c0: 0xe4e20060  swc1        $f2, 0x60($a3)
    ctx->pc = 0x18c9c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x18c9c4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x18c9c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18c9c8: 0xe4e5006c  swc1        $f5, 0x6C($a3)
    ctx->pc = 0x18c9c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x18c9cc: 0xc4e20060  lwc1        $f2, 0x60($a3)
    ctx->pc = 0x18c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c9d0: 0xe4e50068  swc1        $f5, 0x68($a3)
    ctx->pc = 0x18c9d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x18c9d4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x18c9d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x18c9d8: 0xe4e40064  swc1        $f4, 0x64($a3)
    ctx->pc = 0x18c9d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x18c9dc: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x18c9dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x18c9e0: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x18c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x18c9e4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x18c9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18c9e8: 0xe4e20028  swc1        $f2, 0x28($a3)
    ctx->pc = 0x18c9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x18c9ec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x18c9ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x18c9f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18c9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c9f4: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x18c9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x18c9f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c9f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c9fc: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x18c9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x18ca00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18ca00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18ca04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ca04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ca08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18ca08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18ca0c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18ca0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18ca10: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18ca14: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18ca14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18ca18: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18ca18u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18ca1c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18ca1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18ca20: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18ca24: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x18ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ca28: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x18ca28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18ca2c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x18ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ca30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ca30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ca34: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x18ca34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18ca38: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18ca38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18ca3c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18ca40: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18ca40u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18ca44: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18ca44u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18ca48: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18ca48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18ca4c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18ca50: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18ca50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ca54: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x18ca54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ca58: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18ca58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18ca5c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18ca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18ca60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18ca64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18ca64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18ca68: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x18ca68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x18ca6c: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x18ca6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x18ca70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ca74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18ca78: 0xc4e10068  lwc1        $f1, 0x68($a3)
    ctx->pc = 0x18ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca7c: 0x8e050230  lw          $a1, 0x230($s0)
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x18ca80: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18ca80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ca84: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18ca84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18ca88: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x18ca8c: 0xa4e50054  sh          $a1, 0x54($a3)
    ctx->pc = 0x18ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 5));
    // 0x18ca90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18ca90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ca94: 0xc4e2006c  lwc1        $f2, 0x6C($a3)
    ctx->pc = 0x18ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ca98: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x18ca98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x18ca9c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x18ca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18caa0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x18caa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18caa4: 0xa4e40056  sh          $a0, 0x56($a3)
    ctx->pc = 0x18caa4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 4));
    // 0x18caa8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x18caa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18caac: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x18caacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x18cab0: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x18cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18cab4: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x18cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x18cab8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18cab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cabc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18cabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18cac0: 0xace4005c  sw          $a0, 0x5C($a3)
    ctx->pc = 0x18cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 4));
    // 0x18cac4: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x18cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cac8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x18cac8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x18cacc: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x18caccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x18cad0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x18cad0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18cad4: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x18cad4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cad8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x18cad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x18cadc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18cadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18cae0: 0xe4e2002c  swc1        $f2, 0x2C($a3)
    ctx->pc = 0x18cae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x18cae4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x18cae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18cae8: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x18cae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x18caec: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x18caecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18caf0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x18caf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x18caf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18caf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18caf8: 0xe4e40024  swc1        $f4, 0x24($a3)
    ctx->pc = 0x18caf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x18cafc: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x18cafcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x18cb00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cb00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cb04: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x18cb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18cb08: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x18cb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18cb0c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18cb10: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18cb10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18cb14: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18cb14u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18cb18: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18cb18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18cb1c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18cb20: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x18cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb24: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x18cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb28: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cb28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cb2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18cb2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18cb30: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x18cb30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18cb34: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18cb38: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18cb38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18cb3c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18cb3cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18cb40: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18cb40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18cb44: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18cb48: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18cb48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18cb4c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x18cb4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18cb50: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18cb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18cb54: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18cb58: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18cb5c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18cb60: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x18cb64: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CB64u;
    {
        const bool branch_taken_0x18cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB64u;
        // 0x18cb68: 0xae120228  sw          $s2, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb64) {
            ctx->pc = 0x18CB78u;
            goto label_18cb78;
        }
    }
    ctx->pc = 0x18CB6Cu;
    // 0x18cb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb70: 0xc063a80  jal         func_18EA00
    ctx->pc = 0x18CB70u;
    SET_GPR_U32(ctx, 31, 0x18CB78u);
    ctx->pc = 0x18CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB70u;
    // 0x18cb74: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA00u, 0x18CB70u, 0x18CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB78u;
label_18cb78:
    // 0x18cb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18cb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18cb84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18cb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cb88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18cb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB8Cu;
        // 0x18cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CB94u;
}

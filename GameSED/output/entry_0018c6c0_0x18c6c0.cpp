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

// Function: entry_0018c6c0
// Address: 0x18c6c0 - 0x18c780
void entry_0018c6c0_0x18c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c6c0_0x18c6c0");
#endif

    switch (ctx->pc) {
        case 0x18c6dcu: goto label_18c6dc;
        case 0x18c6ecu: goto label_18c6ec;
        case 0x18c6fcu: goto label_18c6fc;
        case 0x18c70cu: goto label_18c70c;
        case 0x18c71cu: goto label_18c71c;
        case 0x18c72cu: goto label_18c72c;
        case 0x18c738u: goto label_18c738;
        default: break;
    }

    ctx->pc = 0x18c6c0u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x18C77Cu;
    // 0x18c77c: 0x0  nop
    ctx->pc = 0x18c77cu;
    // NOP
    ctx->pc = 0x18c780u;
}

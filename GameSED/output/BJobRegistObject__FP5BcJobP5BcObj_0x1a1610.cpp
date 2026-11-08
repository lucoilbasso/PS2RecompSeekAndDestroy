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

// Function: BJobRegistObject__FP5BcJobP5BcObj
// Address: 0x1a1610 - 0x1a1674
void BJobRegistObject__FP5BcJobP5BcObj_0x1a1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BJobRegistObject__FP5BcJobP5BcObj_0x1a1610");
#endif

    switch (ctx->pc) {
        case 0x1a1610u: goto label_1a1610;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a1618u: goto label_1a1618;
        case 0x1a161cu: goto label_1a161c;
        case 0x1a1620u: goto label_1a1620;
        case 0x1a1624u: goto label_1a1624;
        case 0x1a1628u: goto label_1a1628;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1630u: goto label_1a1630;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a1638u: goto label_1a1638;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1640u: goto label_1a1640;
        case 0x1a1644u: goto label_1a1644;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a164cu: goto label_1a164c;
        case 0x1a1650u: goto label_1a1650;
        case 0x1a1654u: goto label_1a1654;
        case 0x1a1658u: goto label_1a1658;
        case 0x1a165cu: goto label_1a165c;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1664u: goto label_1a1664;
        case 0x1a1668u: goto label_1a1668;
        case 0x1a166cu: goto label_1a166c;
        case 0x1a1670u: goto label_1a1670;
        default: break;
    }

    ctx->pc = 0x1a1610u;

label_1a1610:
    // 0x1a1610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1614:
    // 0x1a1614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1618:
    // 0x1a1618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a161c:
    // 0x1a161c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a1620:
    // 0x1a1620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1624:
    // 0x1a1624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1628:
    // 0x1a1628: 0xc0683b6  jal         func_1A0ED8
label_1a162c:
    if (ctx->pc == 0x1A162Cu) {
        ctx->pc = 0x1A162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1628u;
        // 0x1a162c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1630u;
        goto label_1a1630;
    }
    ctx->pc = 0x1A1628u;
    SET_GPR_U32(ctx, 31, 0x1A1630u);
    ctx->pc = 0x1A162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1628u;
    // 0x1a162c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A1628u, 0x1A1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1630u;
label_1a1630:
    // 0x1a1630: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a1634:
    // 0x1a1634: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a1634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
label_1a1638:
    // 0x1a1638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a163c:
    // 0x1a163c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a1640:
    if (ctx->pc == 0x1A1640u) {
        ctx->pc = 0x1A1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A163Cu;
        // 0x1a1640: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1644u;
        goto label_1a1644;
    }
    ctx->pc = 0x1A163Cu;
    {
        const bool branch_taken_0x1a163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A163Cu;
        // 0x1a1640: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a163c) {
            ctx->pc = 0x1A164Cu;
            goto label_1a164c;
        }
    }
    ctx->pc = 0x1A1644u;
label_1a1644:
    // 0x1a1644: 0xc068186  jal         func_1A0618
label_1a1648:
    if (ctx->pc == 0x1A1648u) {
        ctx->pc = 0x1A164Cu;
        goto label_1a164c;
    }
    ctx->pc = 0x1A1644u;
    SET_GPR_U32(ctx, 31, 0x1A164Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1644u, 0x1A164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A164Cu;
label_1a164c:
    // 0x1a164c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a1650:
    // 0x1a1650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a1654:
    if (ctx->pc == 0x1A1654u) {
        ctx->pc = 0x1A1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1650u;
        // 0x1a1654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1658u;
        goto label_1a1658;
    }
    ctx->pc = 0x1A1650u;
    {
        const bool branch_taken_0x1a1650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1650u;
        // 0x1a1654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1650) {
            ctx->pc = 0x1A1660u;
            goto label_1a1660;
        }
    }
    ctx->pc = 0x1A1658u;
label_1a1658:
    // 0x1a1658: 0x40f809  jalr        $v0
label_1a165c:
    if (ctx->pc == 0x1A165Cu) {
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1660u;
        goto label_1a1660;
    }
    ctx->pc = 0x1A1658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1660u);
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1658u, 0x1A1660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1660u;
label_1a1660:
    // 0x1a1660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1664:
    // 0x1a1664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1668:
    // 0x1a1668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a166c:
    // 0x1a166c: 0x3e00008  jr          $ra
label_1a1670:
    if (ctx->pc == 0x1A1670u) {
        ctx->pc = 0x1A1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A166Cu;
        // 0x1a1670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1674u;
        goto label_fallthrough_0x1a166c;
    }
    ctx->pc = 0x1A166Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A166Cu;
        // 0x1a1670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A166Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a166c:
    ctx->pc = 0x1A1674u;
}

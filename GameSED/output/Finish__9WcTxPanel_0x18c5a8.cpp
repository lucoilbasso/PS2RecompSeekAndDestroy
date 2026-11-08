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

// Function: Finish__9WcTxPanel
// Address: 0x18c5a8 - 0x18c688
void Finish__9WcTxPanel_0x18c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9WcTxPanel_0x18c5a8");
#endif

    switch (ctx->pc) {
        case 0x18c5ccu: goto label_18c5cc;
        case 0x18c5e0u: goto label_18c5e0;
        case 0x18c5f4u: goto label_18c5f4;
        case 0x18c608u: goto label_18c608;
        case 0x18c61cu: goto label_18c61c;
        case 0x18c630u: goto label_18c630;
        case 0x18c644u: goto label_18c644;
        case 0x18c660u: goto label_18c660;
        case 0x18c678u: goto label_18c678;
        default: break;
    }

    ctx->pc = 0x18c5a8u;

    // 0x18c5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18c5b8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c5bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5BCu;
    {
        const bool branch_taken_0x18c5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5bc) {
            ctx->pc = 0x18C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5BCu;
            // 0x18c5c0: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5D0u;
            goto label_18c5d0;
        }
    }
    ctx->pc = 0x18C5C4u;
    // 0x18c5c4: 0xc0639fa  jal         func_18E7E8
    ctx->pc = 0x18C5C4u;
    SET_GPR_U32(ctx, 31, 0x18C5CCu);
    ctx->pc = 0x18C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5C4u;
    // 0x18c5c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7E8u, 0x18C5C4u, 0x18C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5CCu;
label_18c5cc:
    // 0x18c5cc: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x18c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_18c5d0:
    // 0x18c5d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5D0u;
    {
        const bool branch_taken_0x18c5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5d0) {
            ctx->pc = 0x18C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5D0u;
            // 0x18c5d4: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5E4u;
            goto label_18c5e4;
        }
    }
    ctx->pc = 0x18C5D8u;
    // 0x18c5d8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C5D8u;
    SET_GPR_U32(ctx, 31, 0x18C5E0u);
    ctx->pc = 0x18C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5D8u;
    // 0x18c5dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C5D8u, 0x18C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5E0u;
label_18c5e0:
    // 0x18c5e0: 0x8e040218  lw          $a0, 0x218($s0)
    ctx->pc = 0x18c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_18c5e4:
    // 0x18c5e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5E4u;
    {
        const bool branch_taken_0x18c5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5e4) {
            ctx->pc = 0x18C5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5E4u;
            // 0x18c5e8: 0x8e040254  lw          $a0, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5F8u;
            goto label_18c5f8;
        }
    }
    ctx->pc = 0x18C5ECu;
    // 0x18c5ec: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C5ECu;
    SET_GPR_U32(ctx, 31, 0x18C5F4u);
    ctx->pc = 0x18C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5ECu;
    // 0x18c5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C5ECu, 0x18C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5F4u;
label_18c5f4:
    // 0x18c5f4: 0x8e040254  lw          $a0, 0x254($s0)
    ctx->pc = 0x18c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_18c5f8:
    // 0x18c5f8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5F8u;
    {
        const bool branch_taken_0x18c5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5f8) {
            ctx->pc = 0x18C5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5F8u;
            // 0x18c5fc: 0x8e04021c  lw          $a0, 0x21C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C60Cu;
            goto label_18c60c;
        }
    }
    ctx->pc = 0x18C600u;
    // 0x18c600: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C600u;
    SET_GPR_U32(ctx, 31, 0x18C608u);
    ctx->pc = 0x18C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C600u;
    // 0x18c604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C600u, 0x18C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C608u;
label_18c608:
    // 0x18c608: 0x8e04021c  lw          $a0, 0x21C($s0)
    ctx->pc = 0x18c608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_18c60c:
    // 0x18c60c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C60Cu;
    {
        const bool branch_taken_0x18c60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c60c) {
            ctx->pc = 0x18C610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C60Cu;
            // 0x18c610: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C620u;
            goto label_18c620;
        }
    }
    ctx->pc = 0x18C614u;
    // 0x18c614: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C614u;
    SET_GPR_U32(ctx, 31, 0x18C61Cu);
    ctx->pc = 0x18C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C614u;
    // 0x18c618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C614u, 0x18C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C61Cu;
label_18c61c:
    // 0x18c61c: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x18c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_18c620:
    // 0x18c620: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C620u;
    {
        const bool branch_taken_0x18c620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c620) {
            ctx->pc = 0x18C624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C620u;
            // 0x18c624: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C634u;
            goto label_18c634;
        }
    }
    ctx->pc = 0x18C628u;
    // 0x18c628: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C628u;
    SET_GPR_U32(ctx, 31, 0x18C630u);
    ctx->pc = 0x18C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C628u;
    // 0x18c62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C628u, 0x18C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C630u;
label_18c630:
    // 0x18c630: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_18c634:
    // 0x18c634: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C634u;
    {
        const bool branch_taken_0x18c634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c634) {
            ctx->pc = 0x18C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C634u;
            // 0x18c638: 0x8e020200  lw          $v0, 0x200($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C648u;
            goto label_18c648;
        }
    }
    ctx->pc = 0x18C63Cu;
    // 0x18c63c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C63Cu;
    SET_GPR_U32(ctx, 31, 0x18C644u);
    ctx->pc = 0x18C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C63Cu;
    // 0x18c640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C63Cu, 0x18C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C644u;
label_18c644:
    // 0x18c644: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_18c648:
    // 0x18c648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18c64c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C64Cu;
    {
        const bool branch_taken_0x18c64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C64Cu;
        // 0x18c650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c64c) {
            ctx->pc = 0x18C670u;
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C654u;
    // 0x18c654: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18c654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x18c658: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18C658u;
    SET_GPR_U32(ctx, 31, 0x18C660u);
    ctx->pc = 0x18C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C658u;
    // 0x18c65c: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18C658u, 0x18C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C660u;
label_18c660:
    // 0x18c660: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18c664: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18c668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c66c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x18c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_18c670:
    // 0x18c670: 0xc06310a  jal         func_18C428
    ctx->pc = 0x18C670u;
    SET_GPR_U32(ctx, 31, 0x18C678u);
    ctx->pc = 0x18C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C670u;
    // 0x18c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C428u, 0x18C670u, 0x18C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C678u;
label_18c678:
    // 0x18c678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c67c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18c67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18c680: 0x3e00008  jr          $ra
    ctx->pc = 0x18C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C680u;
        // 0x18c684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C688u;
}

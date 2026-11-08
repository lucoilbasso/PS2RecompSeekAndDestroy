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

// Function: Cmd_PANEL_ARG_STR_Entry__FP15BsSCDEntControl
// Address: 0x10b478 - 0x10b564
void Cmd_PANEL_ARG_STR_Entry__FP15BsSCDEntControl_0x10b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_ARG_STR_Entry__FP15BsSCDEntControl_0x10b478");
#endif

    switch (ctx->pc) {
        case 0x10b4a8u: goto label_10b4a8;
        case 0x10b4d4u: goto label_10b4d4;
        case 0x10b4fcu: goto label_10b4fc;
        case 0x10b508u: goto label_10b508;
        case 0x10b538u: goto label_10b538;
        case 0x10b548u: goto label_10b548;
        default: break;
    }

    ctx->pc = 0x10b478u;

    // 0x10b478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b47c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b488: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b48c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b494: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b49c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b4a0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B4A0u;
    SET_GPR_U32(ctx, 31, 0x10B4A8u);
    ctx->pc = 0x10B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4A0u;
    // 0x10b4a4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B4A0u, 0x10B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4A8u;
label_10b4a8:
    // 0x10b4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4ac: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b4b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B4B0u;
    {
        const bool branch_taken_0x10b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4B0u;
        // 0x10b4b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4b0) {
            ctx->pc = 0x10B4C8u;
            goto label_10b4c8;
        }
    }
    ctx->pc = 0x10B4B8u;
    // 0x10b4b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b4bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b4c0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B4C0u;
    {
        const bool branch_taken_0x10b4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b4c0) {
            ctx->pc = 0x10B4CCu;
            goto label_10b4cc;
        }
    }
    ctx->pc = 0x10B4C8u;
label_10b4c8:
    // 0x10b4c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10b4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b4cc:
    // 0x10b4cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B4CCu;
    SET_GPR_U32(ctx, 31, 0x10B4D4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B4CCu, 0x10B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4D4u;
label_10b4d4:
    // 0x10b4d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b4d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10b4e0: 0x2453f590  addiu       $s3, $v0, -0xA70
    ctx->pc = 0x10b4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964624));
    // 0x10b4e4: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x10b4e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10b4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10B4ECu;
    {
        const bool branch_taken_0x10b4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4ec) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B4F4u;
    // 0x10b4f4: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10B4F4u;
    SET_GPR_U32(ctx, 31, 0x10B4FCu);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10B4F4u, 0x10B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4FCu;
label_10b4fc:
    // 0x10b4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b500: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10B500u;
    SET_GPR_U32(ctx, 31, 0x10B508u);
    ctx->pc = 0x10B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B500u;
    // 0x10b504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10B500u, 0x10B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B508u;
label_10b508:
    // 0x10b508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b518: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b51c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b528: 0x8063b9a  j           func_18EE68
    ctx->pc = 0x10B528u;
    ctx->pc = 0x10B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B528u;
    // 0x10b52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE68u;
    WTxPanelSetStrVar__FP9WcTxPaneliPc_0x18ee68(rdram, ctx, runtime); return;
    ctx->pc = 0x10B530u;
label_10b530:
    // 0x10b530: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B530u;
    SET_GPR_U32(ctx, 31, 0x10B538u);
    ctx->pc = 0x10B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B530u;
    // 0x10b534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B530u, 0x10B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B538u;
label_10b538:
    // 0x10b538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b53c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b540: 0xc063b9a  jal         func_18EE68
    ctx->pc = 0x10B540u;
    SET_GPR_U32(ctx, 31, 0x10B548u);
    ctx->pc = 0x10B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B540u;
    // 0x10b544: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE68u, 0x10B540u, 0x10B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B548u;
label_10b548:
    // 0x10b548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b54c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B55Cu;
        // 0x10b560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B564u;
}

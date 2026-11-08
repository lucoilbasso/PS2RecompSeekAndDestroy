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

// Function: ExtPanelDestroy__9ApcObjRsci
// Address: 0x1d7808 - 0x1d78a0
void ExtPanelDestroy__9ApcObjRsci_0x1d7808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelDestroy__9ApcObjRsci_0x1d7808");
#endif

    switch (ctx->pc) {
        case 0x1d7808u: goto label_1d7808;
        case 0x1d780cu: goto label_1d780c;
        case 0x1d7810u: goto label_1d7810;
        case 0x1d7814u: goto label_1d7814;
        case 0x1d7818u: goto label_1d7818;
        case 0x1d781cu: goto label_1d781c;
        case 0x1d7820u: goto label_1d7820;
        case 0x1d7824u: goto label_1d7824;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7834u: goto label_1d7834;
        case 0x1d7838u: goto label_1d7838;
        case 0x1d783cu: goto label_1d783c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7844u: goto label_1d7844;
        case 0x1d7848u: goto label_1d7848;
        case 0x1d784cu: goto label_1d784c;
        case 0x1d7850u: goto label_1d7850;
        case 0x1d7854u: goto label_1d7854;
        case 0x1d7858u: goto label_1d7858;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7860u: goto label_1d7860;
        case 0x1d7864u: goto label_1d7864;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d786cu: goto label_1d786c;
        case 0x1d7870u: goto label_1d7870;
        case 0x1d7874u: goto label_1d7874;
        case 0x1d7878u: goto label_1d7878;
        case 0x1d787cu: goto label_1d787c;
        case 0x1d7880u: goto label_1d7880;
        case 0x1d7884u: goto label_1d7884;
        case 0x1d7888u: goto label_1d7888;
        case 0x1d788cu: goto label_1d788c;
        case 0x1d7890u: goto label_1d7890;
        case 0x1d7894u: goto label_1d7894;
        case 0x1d7898u: goto label_1d7898;
        case 0x1d789cu: goto label_1d789c;
        default: break;
    }

    ctx->pc = 0x1d7808u;

label_1d7808:
    // 0x1d7808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d780c:
    // 0x1d780c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1d7810:
    // 0x1d7810: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d7810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7814:
    // 0x1d7814: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d7814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d7818:
    // 0x1d7818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d781c:
    // 0x1d781c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1d781cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d7820:
    // 0x1d7820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1d7824:
    // 0x1d7824: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_1d7828:
    if (ctx->pc == 0x1D7828u) {
        ctx->pc = 0x1D7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7824u;
        // 0x1d7828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D782Cu;
        goto label_1d782c;
    }
    ctx->pc = 0x1D7824u;
    {
        const bool branch_taken_0x1d7824 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7824u;
        // 0x1d7828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7824) {
            ctx->pc = 0x1D783Cu;
            goto label_1d783c;
        }
    }
    ctx->pc = 0x1D782Cu;
label_1d782c:
    // 0x1d782c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1d7830:
    // 0x1d7830: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1d7830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1d7834:
    // 0x1d7834: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d7838:
    if (ctx->pc == 0x1D7838u) {
        ctx->pc = 0x1D783Cu;
        goto label_1d783c;
    }
    ctx->pc = 0x1D7834u;
    {
        const bool branch_taken_0x1d7834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7834) {
            ctx->pc = 0x1D7840u;
            goto label_1d7840;
        }
    }
    ctx->pc = 0x1D783Cu;
label_1d783c:
    // 0x1d783c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7840:
    // 0x1d7840: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d7844:
    if (ctx->pc == 0x1D7844u) {
        ctx->pc = 0x1D7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7840u;
        // 0x1d7844: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7848u;
        goto label_1d7848;
    }
    ctx->pc = 0x1D7840u;
    {
        const bool branch_taken_0x1d7840 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7840u;
        // 0x1d7844: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7840) {
            ctx->pc = 0x1D7860u;
            goto label_1d7860;
        }
    }
    ctx->pc = 0x1D7848u;
label_1d7848:
    // 0x1d7848: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1d7848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1d784c:
    // 0x1d784c: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1d784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
label_1d7850:
    // 0x1d7850: 0xc0415ec  jal         func_1057B0
label_1d7854:
    if (ctx->pc == 0x1D7854u) {
        ctx->pc = 0x1D7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7850u;
        // 0x1d7854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7858u;
        goto label_1d7858;
    }
    ctx->pc = 0x1D7850u;
    SET_GPR_U32(ctx, 31, 0x1D7858u);
    ctx->pc = 0x1D7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7850u;
    // 0x1d7854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1D7850u, 0x1D7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7858u;
label_1d7858:
    // 0x1d7858: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d785c:
    if (ctx->pc == 0x1D785Cu) {
        ctx->pc = 0x1D785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7858u;
        // 0x1d785c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7860u;
        goto label_1d7860;
    }
    ctx->pc = 0x1D7858u;
    {
        const bool branch_taken_0x1d7858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7858u;
        // 0x1d785c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7858) {
            ctx->pc = 0x1D7868u;
            goto label_1d7868;
        }
    }
    ctx->pc = 0x1D7860u;
label_1d7860:
    // 0x1d7860: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1d7864:
    // 0x1d7864: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1d7868:
    // 0x1d7868: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d786c:
    // 0x1d786c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d7870:
    if (ctx->pc == 0x1D7870u) {
        ctx->pc = 0x1D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D786Cu;
        // 0x1d7870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7874u;
        goto label_1d7874;
    }
    ctx->pc = 0x1D786Cu;
    {
        const bool branch_taken_0x1d786c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D786Cu;
        // 0x1d7870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d786c) {
            ctx->pc = 0x1D788Cu;
            goto label_1d788c;
        }
    }
    ctx->pc = 0x1D7874u;
label_1d7874:
    // 0x1d7874: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7878:
    // 0x1d7878: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d787c:
    // 0x1d787c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7880:
    // 0x1d7880: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7884:
    // 0x1d7884: 0x60f809  jalr        $v1
label_1d7888:
    if (ctx->pc == 0x1D7888u) {
        ctx->pc = 0x1D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7884u;
        // 0x1d7888: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D788Cu;
        goto label_1d788c;
    }
    ctx->pc = 0x1D7884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D788Cu);
        ctx->pc = 0x1D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7884u;
        // 0x1d7888: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7884u, 0x1D788Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D788Cu;
label_1d788c:
    // 0x1d788c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d7890:
    // 0x1d7890: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d7894:
    // 0x1d7894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7898:
    // 0x1d7898: 0x3e00008  jr          $ra
label_1d789c:
    if (ctx->pc == 0x1D789Cu) {
        ctx->pc = 0x1D789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7898u;
        // 0x1d789c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D78A0u;
        goto label_fallthrough_0x1d7898;
    }
    ctx->pc = 0x1D7898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7898u;
        // 0x1d789c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7898:
    ctx->pc = 0x1D78A0u;
}

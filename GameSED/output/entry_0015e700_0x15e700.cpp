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

// Function: entry_0015e700
// Address: 0x15e700 - 0x15e74c
void entry_0015e700_0x15e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e700_0x15e700");
#endif

    switch (ctx->pc) {
        case 0x15e728u: goto label_15e728;
        default: break;
    }

    ctx->pc = 0x15e700u;

label_15e700:
    // 0x15e700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e704:
    // 0x15e704: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e708:
    if (ctx->pc == 0x15E708u) {
        ctx->pc = 0x15E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E704u;
        // 0x15e708: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E70Cu;
        goto label_15e70c;
    }
    ctx->pc = 0x15E704u;
    {
        const bool branch_taken_0x15e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e704) {
            ctx->pc = 0x15E708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E704u;
            // 0x15e708: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E750u;
            return;
        }
    }
    ctx->pc = 0x15E70Cu;
label_15e70c:
    // 0x15e70c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e710:
    // 0x15e710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e714:
    // 0x15e714: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e718:
    // 0x15e718: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e71c:
    // 0x15e71c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e720:
    // 0x15e720: 0x60f809  jalr        $v1
label_15e724:
    if (ctx->pc == 0x15E724u) {
        ctx->pc = 0x15E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E720u;
        // 0x15e724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E728u;
        goto label_15e728;
    }
    ctx->pc = 0x15E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E728u);
        ctx->pc = 0x15E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E720u;
        // 0x15e724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E720u, 0x15E728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E728u;
label_15e728:
    // 0x15e728: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e72c:
    // 0x15e72c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e730:
    if (ctx->pc == 0x15E730u) {
        ctx->pc = 0x15E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E72Cu;
        // 0x15e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E734u;
        goto label_15e734;
    }
    ctx->pc = 0x15E72Cu;
    {
        const bool branch_taken_0x15e72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E72Cu;
        // 0x15e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e72c) {
            ctx->pc = 0x15E74Cu;
            return;
        }
    }
    ctx->pc = 0x15E734u;
label_15e734:
    // 0x15e734: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e738:
    // 0x15e738: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e73c:
    // 0x15e73c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e740:
    // 0x15e740: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e744:
    // 0x15e744: 0x60f809  jalr        $v1
label_15e748:
    if (ctx->pc == 0x15E748u) {
        ctx->pc = 0x15E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E744u;
        // 0x15e748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E74Cu;
        goto label_fallthrough_0x15e744;
    }
    ctx->pc = 0x15E744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E74Cu);
        ctx->pc = 0x15E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E744u;
        // 0x15e748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E744u, 0x15E74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e744:
    ctx->pc = 0x15E74Cu;
}

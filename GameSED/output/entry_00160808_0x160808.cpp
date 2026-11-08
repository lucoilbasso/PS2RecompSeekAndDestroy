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

// Function: entry_00160808
// Address: 0x160808 - 0x160854
void entry_00160808_0x160808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160808_0x160808");
#endif

    switch (ctx->pc) {
        case 0x160830u: goto label_160830;
        default: break;
    }

    ctx->pc = 0x160808u;

label_160808:
    // 0x160808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16080c:
    // 0x16080c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_160810:
    if (ctx->pc == 0x160810u) {
        ctx->pc = 0x160810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16080Cu;
        // 0x160810: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160814u;
        goto label_160814;
    }
    ctx->pc = 0x16080Cu;
    {
        const bool branch_taken_0x16080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16080c) {
            ctx->pc = 0x160810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16080Cu;
            // 0x160810: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160858u;
            return;
        }
    }
    ctx->pc = 0x160814u;
label_160814:
    // 0x160814: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160818:
    // 0x160818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16081c:
    // 0x16081c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160820:
    // 0x160820: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160824:
    // 0x160824: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160828:
    // 0x160828: 0x60f809  jalr        $v1
label_16082c:
    if (ctx->pc == 0x16082Cu) {
        ctx->pc = 0x16082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160828u;
        // 0x16082c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160830u;
        goto label_160830;
    }
    ctx->pc = 0x160828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160830u);
        ctx->pc = 0x16082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160828u;
        // 0x16082c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160828u, 0x160830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160830u;
label_160830:
    // 0x160830: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x160830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_160834:
    // 0x160834: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160838:
    if (ctx->pc == 0x160838u) {
        ctx->pc = 0x160838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160834u;
        // 0x160838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16083Cu;
        goto label_16083c;
    }
    ctx->pc = 0x160834u;
    {
        const bool branch_taken_0x160834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160834u;
        // 0x160838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160834) {
            ctx->pc = 0x160854u;
            return;
        }
    }
    ctx->pc = 0x16083Cu;
label_16083c:
    // 0x16083c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160840:
    // 0x160840: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160844:
    // 0x160844: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160848:
    // 0x160848: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16084c:
    // 0x16084c: 0x60f809  jalr        $v1
label_160850:
    if (ctx->pc == 0x160850u) {
        ctx->pc = 0x160850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16084Cu;
        // 0x160850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160854u;
        goto label_fallthrough_0x16084c;
    }
    ctx->pc = 0x16084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160854u);
        ctx->pc = 0x160850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16084Cu;
        // 0x160850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16084Cu, 0x160854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16084c:
    ctx->pc = 0x160854u;
}

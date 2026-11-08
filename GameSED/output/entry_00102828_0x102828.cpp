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

// Function: entry_00102828
// Address: 0x102828 - 0x102860
void entry_00102828_0x102828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102828_0x102828");
#endif

    ctx->pc = 0x102828u;

label_102828:
    // 0x102828: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x102828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_10282c:
    // 0x10282c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_102830:
    // 0x102830: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102834:
    // 0x102834: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102838:
    // 0x102838: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10283c:
    // 0x10283c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_102840:
    if (ctx->pc == 0x102840u) {
        ctx->pc = 0x102840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10283Cu;
        // 0x102840: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102844u;
        goto label_102844;
    }
    ctx->pc = 0x10283Cu;
    {
        const bool branch_taken_0x10283c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10283Cu;
        // 0x102840: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10283c) {
            ctx->pc = 0x102860u;
            return;
        }
    }
    ctx->pc = 0x102844u;
label_102844:
    // 0x102844: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102848:
    // 0x102848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10284c:
    // 0x10284c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102850:
    // 0x102850: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102854:
    // 0x102854: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102858:
    // 0x102858: 0x60f809  jalr        $v1
label_10285c:
    if (ctx->pc == 0x10285Cu) {
        ctx->pc = 0x10285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102858u;
        // 0x10285c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102860u;
        goto label_fallthrough_0x102858;
    }
    ctx->pc = 0x102858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102860u);
        ctx->pc = 0x10285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102858u;
        // 0x10285c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102858u, 0x102860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x102858:
    ctx->pc = 0x102860u;
}

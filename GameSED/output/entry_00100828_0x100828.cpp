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

// Function: entry_00100828
// Address: 0x100828 - 0x10084c
void entry_00100828_0x100828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100828_0x100828");
#endif

    ctx->pc = 0x100828u;

label_100828:
    // 0x100828: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x100828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10082c:
    // 0x10082c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100830:
    if (ctx->pc == 0x100830u) {
        ctx->pc = 0x100830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10082Cu;
        // 0x100830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100834u;
        goto label_100834;
    }
    ctx->pc = 0x10082Cu;
    {
        const bool branch_taken_0x10082c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10082Cu;
        // 0x100830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10082c) {
            ctx->pc = 0x10084Cu;
            return;
        }
    }
    ctx->pc = 0x100834u;
label_100834:
    // 0x100834: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100838:
    // 0x100838: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10083c:
    // 0x10083c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100840:
    // 0x100840: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100844:
    // 0x100844: 0x60f809  jalr        $v1
label_100848:
    if (ctx->pc == 0x100848u) {
        ctx->pc = 0x100848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100844u;
        // 0x100848: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10084Cu;
        goto label_fallthrough_0x100844;
    }
    ctx->pc = 0x100844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10084Cu);
        ctx->pc = 0x100848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100844u;
        // 0x100848: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100844u, 0x10084Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100844:
    ctx->pc = 0x10084Cu;
}

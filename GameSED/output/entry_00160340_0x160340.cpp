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

// Function: entry_00160340
// Address: 0x160340 - 0x160360
void entry_00160340_0x160340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160340_0x160340");
#endif

    ctx->pc = 0x160340u;

label_160340:
    // 0x160340: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160344:
    if (ctx->pc == 0x160344u) {
        ctx->pc = 0x160344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160340u;
        // 0x160344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160348u;
        goto label_160348;
    }
    ctx->pc = 0x160340u;
    {
        const bool branch_taken_0x160340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160340u;
        // 0x160344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160340) {
            ctx->pc = 0x160360u;
            return;
        }
    }
    ctx->pc = 0x160348u;
label_160348:
    // 0x160348: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16034c:
    // 0x16034c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160350:
    // 0x160350: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160354:
    // 0x160354: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160358:
    // 0x160358: 0x60f809  jalr        $v1
label_16035c:
    if (ctx->pc == 0x16035Cu) {
        ctx->pc = 0x16035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160358u;
        // 0x16035c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160360u;
        goto label_fallthrough_0x160358;
    }
    ctx->pc = 0x160358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160360u);
        ctx->pc = 0x16035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160358u;
        // 0x16035c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160358u, 0x160360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x160358:
    ctx->pc = 0x160360u;
}

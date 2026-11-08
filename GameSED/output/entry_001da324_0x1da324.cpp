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

// Function: entry_001da324
// Address: 0x1da324 - 0x1da348
void entry_001da324_0x1da324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da324_0x1da324");
#endif

    ctx->pc = 0x1da324u;

label_1da324:
    // 0x1da324: 0x8e460168  lw          $a2, 0x168($s2)
    ctx->pc = 0x1da324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_1da328:
    // 0x1da328: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da32c:
    if (ctx->pc == 0x1DA32Cu) {
        ctx->pc = 0x1DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA328u;
        // 0x1da32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA330u;
        goto label_1da330;
    }
    ctx->pc = 0x1DA328u;
    {
        const bool branch_taken_0x1da328 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA328u;
        // 0x1da32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da328) {
            ctx->pc = 0x1DA348u;
            return;
        }
    }
    ctx->pc = 0x1DA330u;
label_1da330:
    // 0x1da330: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da334:
    // 0x1da334: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da338:
    // 0x1da338: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da33c:
    // 0x1da33c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da340:
    // 0x1da340: 0x60f809  jalr        $v1
label_1da344:
    if (ctx->pc == 0x1DA344u) {
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA348u;
        goto label_fallthrough_0x1da340;
    }
    ctx->pc = 0x1DA340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA348u);
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA340u, 0x1DA348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da340:
    ctx->pc = 0x1DA348u;
}

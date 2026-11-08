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

// Function: entry_001da418
// Address: 0x1da418 - 0x1da43c
void entry_001da418_0x1da418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da418_0x1da418");
#endif

    ctx->pc = 0x1da418u;

label_1da418:
    // 0x1da418: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1da418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1da41c:
    // 0x1da41c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da420:
    if (ctx->pc == 0x1DA420u) {
        ctx->pc = 0x1DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA41Cu;
        // 0x1da420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA424u;
        goto label_1da424;
    }
    ctx->pc = 0x1DA41Cu;
    {
        const bool branch_taken_0x1da41c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA41Cu;
        // 0x1da420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da41c) {
            ctx->pc = 0x1DA43Cu;
            return;
        }
    }
    ctx->pc = 0x1DA424u;
label_1da424:
    // 0x1da424: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da428:
    // 0x1da428: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da42c:
    // 0x1da42c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da430:
    // 0x1da430: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da434:
    // 0x1da434: 0x60f809  jalr        $v1
label_1da438:
    if (ctx->pc == 0x1DA438u) {
        ctx->pc = 0x1DA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA434u;
        // 0x1da438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA43Cu;
        goto label_fallthrough_0x1da434;
    }
    ctx->pc = 0x1DA434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA43Cu);
        ctx->pc = 0x1DA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA434u;
        // 0x1da438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA434u, 0x1DA43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da434:
    ctx->pc = 0x1DA43Cu;
}

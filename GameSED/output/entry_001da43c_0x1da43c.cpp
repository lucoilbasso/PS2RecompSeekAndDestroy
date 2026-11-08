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

// Function: entry_001da43c
// Address: 0x1da43c - 0x1da460
void entry_001da43c_0x1da43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da43c_0x1da43c");
#endif

    ctx->pc = 0x1da43cu;

label_1da43c:
    // 0x1da43c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da440:
    // 0x1da440: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da444:
    if (ctx->pc == 0x1DA444u) {
        ctx->pc = 0x1DA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA440u;
        // 0x1da444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA448u;
        goto label_1da448;
    }
    ctx->pc = 0x1DA440u;
    {
        const bool branch_taken_0x1da440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA440u;
        // 0x1da444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da440) {
            ctx->pc = 0x1DA460u;
            return;
        }
    }
    ctx->pc = 0x1DA448u;
label_1da448:
    // 0x1da448: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da44c:
    // 0x1da44c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da450:
    // 0x1da450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da454:
    // 0x1da454: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da458:
    // 0x1da458: 0x60f809  jalr        $v1
label_1da45c:
    if (ctx->pc == 0x1DA45Cu) {
        ctx->pc = 0x1DA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA458u;
        // 0x1da45c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA460u;
        goto label_fallthrough_0x1da458;
    }
    ctx->pc = 0x1DA458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA460u);
        ctx->pc = 0x1DA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA458u;
        // 0x1da45c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA458u, 0x1DA460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da458:
    ctx->pc = 0x1DA460u;
}

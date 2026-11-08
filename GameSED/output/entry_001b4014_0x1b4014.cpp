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

// Function: entry_001b4014
// Address: 0x1b4014 - 0x1b4038
void entry_001b4014_0x1b4014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4014_0x1b4014");
#endif

    switch (ctx->pc) {
        case 0x1b4020u: goto label_1b4020;
        case 0x1b4030u: goto label_1b4030;
        default: break;
    }

    ctx->pc = 0x1b4014u;

    // 0x1b4014: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1b4018: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4018u;
    SET_GPR_U32(ctx, 31, 0x1B4020u);
    ctx->pc = 0x1B401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4018u;
    // 0x1b401c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4018u, 0x1B4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4020u;
label_1b4020:
    // 0x1b4020: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4020u;
    {
        const bool branch_taken_0x1b4020 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4020) {
            ctx->pc = 0x1B4038u;
            return;
        }
    }
    ctx->pc = 0x1B4028u;
    // 0x1b4028: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4028u;
    SET_GPR_U32(ctx, 31, 0x1B4030u);
    ctx->pc = 0x1B402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4028u;
    // 0x1b402c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4028u, 0x1B4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4030u;
label_1b4030:
    // 0x1b4030: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4030u;
    {
        const bool branch_taken_0x1b4030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4030u;
        // 0x1b4034: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4030) {
            ctx->pc = 0x1B404Cu;
            return;
        }
    }
    ctx->pc = 0x1B4038u;
}

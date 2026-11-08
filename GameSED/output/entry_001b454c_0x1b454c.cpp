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

// Function: entry_001b454c
// Address: 0x1b454c - 0x1b4570
void entry_001b454c_0x1b454c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b454c_0x1b454c");
#endif

    switch (ctx->pc) {
        case 0x1b4558u: goto label_1b4558;
        case 0x1b4568u: goto label_1b4568;
        default: break;
    }

    ctx->pc = 0x1b454cu;

    // 0x1b454c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b4550: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4550u;
    SET_GPR_U32(ctx, 31, 0x1B4558u);
    ctx->pc = 0x1B4554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4550u;
    // 0x1b4554: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4550u, 0x1B4558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4558u;
label_1b4558:
    // 0x1b4558: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4558u;
    {
        const bool branch_taken_0x1b4558 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4558) {
            ctx->pc = 0x1B4570u;
            return;
        }
    }
    ctx->pc = 0x1B4560u;
    // 0x1b4560: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4560u;
    SET_GPR_U32(ctx, 31, 0x1B4568u);
    ctx->pc = 0x1B4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4560u;
    // 0x1b4564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4560u, 0x1B4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4568u;
label_1b4568:
    // 0x1b4568: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4568u;
    {
        const bool branch_taken_0x1b4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4568u;
        // 0x1b456c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4568) {
            ctx->pc = 0x1B4584u;
            return;
        }
    }
    ctx->pc = 0x1B4570u;
}

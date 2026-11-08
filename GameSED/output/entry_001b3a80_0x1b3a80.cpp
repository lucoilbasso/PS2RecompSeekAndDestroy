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

// Function: entry_001b3a80
// Address: 0x1b3a80 - 0x1b3aa4
void entry_001b3a80_0x1b3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3a80_0x1b3a80");
#endif

    switch (ctx->pc) {
        case 0x1b3a8cu: goto label_1b3a8c;
        case 0x1b3a9cu: goto label_1b3a9c;
        default: break;
    }

    ctx->pc = 0x1b3a80u;

    // 0x1b3a80: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b3a84: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3A84u;
    SET_GPR_U32(ctx, 31, 0x1B3A8Cu);
    ctx->pc = 0x1B3A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A84u;
    // 0x1b3a88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3A84u, 0x1B3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A8Cu;
label_1b3a8c:
    // 0x1b3a8c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3A8Cu;
    {
        const bool branch_taken_0x1b3a8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a8c) {
            ctx->pc = 0x1B3AA4u;
            return;
        }
    }
    ctx->pc = 0x1B3A94u;
    // 0x1b3a94: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3A94u;
    SET_GPR_U32(ctx, 31, 0x1B3A9Cu);
    ctx->pc = 0x1B3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A94u;
    // 0x1b3a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3A94u, 0x1B3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A9Cu;
label_1b3a9c:
    // 0x1b3a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3A9Cu;
    {
        const bool branch_taken_0x1b3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A9Cu;
        // 0x1b3aa0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a9c) {
            ctx->pc = 0x1B3AB8u;
            return;
        }
    }
    ctx->pc = 0x1B3AA4u;
}

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

// Function: entry_001b338c
// Address: 0x1b338c - 0x1b33a4
void entry_001b338c_0x1b338c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b338c_0x1b338c");
#endif

    switch (ctx->pc) {
        case 0x1b339cu: goto label_1b339c;
        default: break;
    }

    ctx->pc = 0x1b338cu;

    // 0x1b338c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B338Cu;
    {
        const bool branch_taken_0x1b338c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b338c) {
            ctx->pc = 0x1B33A4u;
            return;
        }
    }
    ctx->pc = 0x1B3394u;
    // 0x1b3394: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3394u;
    SET_GPR_U32(ctx, 31, 0x1B339Cu);
    ctx->pc = 0x1B3398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3394u;
    // 0x1b3398: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3394u, 0x1B339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B339Cu;
label_1b339c:
    // 0x1b339c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B339Cu;
    {
        const bool branch_taken_0x1b339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B339Cu;
        // 0x1b33a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b339c) {
            ctx->pc = 0x1B33B8u;
            return;
        }
    }
    ctx->pc = 0x1B33A4u;
}

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

// Function: entry_00199d64
// Address: 0x199d64 - 0x199d74
void entry_00199d64_0x199d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d64_0x199d64");
#endif

    ctx->pc = 0x199d64u;

    // 0x199d64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199D64u;
    {
        const bool branch_taken_0x199d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d64) {
            ctx->pc = 0x199D74u;
            return;
        }
    }
    ctx->pc = 0x199D6Cu;
    // 0x199d6c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x199D6Cu;
    SET_GPR_U32(ctx, 31, 0x199D74u);
    ctx->pc = 0x199D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D6Cu;
    // 0x199d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199D6Cu, 0x199D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D74u;
}

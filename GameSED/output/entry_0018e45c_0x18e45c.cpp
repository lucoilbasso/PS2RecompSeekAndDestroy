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

// Function: entry_0018e45c
// Address: 0x18e45c - 0x18e468
void entry_0018e45c_0x18e45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e45c_0x18e45c");
#endif

    ctx->pc = 0x18e45cu;

    // 0x18e45c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18e45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e460: 0xc063922  jal         func_18E488
    ctx->pc = 0x18E460u;
    SET_GPR_U32(ctx, 31, 0x18E468u);
    ctx->pc = 0x18E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E460u;
    // 0x18e464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E488u, 0x18E460u, 0x18E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E468u;
}

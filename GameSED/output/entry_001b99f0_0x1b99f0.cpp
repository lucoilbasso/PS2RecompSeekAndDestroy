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

// Function: entry_001b99f0
// Address: 0x1b99f0 - 0x1b99f8
void entry_001b99f0_0x1b99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b99f0_0x1b99f0");
#endif

    ctx->pc = 0x1b99f0u;

    // 0x1b99f0: 0xc06e612  jal         func_1B9848
    ctx->pc = 0x1B99F0u;
    SET_GPR_U32(ctx, 31, 0x1B99F8u);
    ctx->pc = 0x1B99F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99F0u;
    // 0x1b99f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9848u, 0x1B99F0u, 0x1B99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99F8u;
}

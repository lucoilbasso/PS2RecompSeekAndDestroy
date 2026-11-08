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

// Function: entry_001a3808
// Address: 0x1a3808 - 0x1a3810
void entry_001a3808_0x1a3808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3808_0x1a3808");
#endif

    ctx->pc = 0x1a3808u;

    // 0x1a3808: 0xc06881e  jal         func_1A2078
    ctx->pc = 0x1A3808u;
    SET_GPR_U32(ctx, 31, 0x1A3810u);
    ctx->pc = 0x1A380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3808u;
    // 0x1a380c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A3808u, 0x1A3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3810u;
}

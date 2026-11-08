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

// Function: entry_001a31e0
// Address: 0x1a31e0 - 0x1a31e8
void entry_001a31e0_0x1a31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a31e0_0x1a31e0");
#endif

    ctx->pc = 0x1a31e0u;

    // 0x1a31e0: 0xc06881e  jal         func_1A2078
    ctx->pc = 0x1A31E0u;
    SET_GPR_U32(ctx, 31, 0x1A31E8u);
    ctx->pc = 0x1A31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31E0u;
    // 0x1a31e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A31E0u, 0x1A31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31E8u;
}

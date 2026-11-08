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

// Function: entry_001b6b80
// Address: 0x1b6b80 - 0x1b6b8c
void entry_001b6b80_0x1b6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b80_0x1b6b80");
#endif

    ctx->pc = 0x1b6b80u;

    // 0x1b6b80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b84: 0xc06da3c  jal         func_1B68F0
    ctx->pc = 0x1B6B84u;
    SET_GPR_U32(ctx, 31, 0x1B6B8Cu);
    ctx->pc = 0x1B6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B84u;
    // 0x1b6b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B68F0u, 0x1B6B84u, 0x1B6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B8Cu;
}

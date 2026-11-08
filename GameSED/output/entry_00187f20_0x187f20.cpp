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

// Function: entry_00187f20
// Address: 0x187f20 - 0x187f28
void entry_00187f20_0x187f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f20_0x187f20");
#endif

    ctx->pc = 0x187f20u;

    // 0x187f20: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x187F20u;
    SET_GPR_U32(ctx, 31, 0x187F28u);
    ctx->pc = 0x187F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F20u;
    // 0x187f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x187F20u, 0x187F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F28u;
}

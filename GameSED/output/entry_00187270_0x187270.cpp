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

// Function: entry_00187270
// Address: 0x187270 - 0x187278
void entry_00187270_0x187270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187270_0x187270");
#endif

    ctx->pc = 0x187270u;

    // 0x187270: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x187270u;
    SET_GPR_U32(ctx, 31, 0x187278u);
    ctx->pc = 0x187274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187270u;
    // 0x187274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x187270u, 0x187278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187278u;
}

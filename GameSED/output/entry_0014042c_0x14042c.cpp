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

// Function: entry_0014042c
// Address: 0x14042c - 0x140434
void entry_0014042c_0x14042c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014042c_0x14042c");
#endif

    ctx->pc = 0x14042cu;

    // 0x14042c: 0xc0501b0  jal         func_1406C0
    ctx->pc = 0x14042Cu;
    SET_GPR_U32(ctx, 31, 0x140434u);
    ctx->pc = 0x140430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14042Cu;
    // 0x140430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1406C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1406C0u, 0x14042Cu, 0x140434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140434u;
}

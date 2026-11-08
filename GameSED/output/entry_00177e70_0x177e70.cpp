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

// Function: entry_00177e70
// Address: 0x177e70 - 0x177e78
void entry_00177e70_0x177e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e70_0x177e70");
#endif

    ctx->pc = 0x177e70u;

    // 0x177e70: 0xc05dfa6  jal         func_177E98
    ctx->pc = 0x177E70u;
    SET_GPR_U32(ctx, 31, 0x177E78u);
    ctx->pc = 0x177E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E70u;
    // 0x177e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E98u, 0x177E70u, 0x177E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E78u;
}

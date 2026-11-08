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

// Function: entry_00146590
// Address: 0x146590 - 0x146598
void entry_00146590_0x146590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146590_0x146590");
#endif

    ctx->pc = 0x146590u;

    // 0x146590: 0xc051da2  jal         func_147688
    ctx->pc = 0x146590u;
    SET_GPR_U32(ctx, 31, 0x146598u);
    ctx->pc = 0x146594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146590u;
    // 0x146594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147688u, 0x146590u, 0x146598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146598u;
}

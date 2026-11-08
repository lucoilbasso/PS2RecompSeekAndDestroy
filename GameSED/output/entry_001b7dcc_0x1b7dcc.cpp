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

// Function: entry_001b7dcc
// Address: 0x1b7dcc - 0x1b7dd4
void entry_001b7dcc_0x1b7dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7dcc_0x1b7dcc");
#endif

    ctx->pc = 0x1b7dccu;

    // 0x1b7dcc: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1B7DCCu;
    SET_GPR_U32(ctx, 31, 0x1B7DD4u);
    ctx->pc = 0x1B7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DCCu;
    // 0x1b7dd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1B7DCCu, 0x1B7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DD4u;
}

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

// Function: entry_001d41c8
// Address: 0x1d41c8 - 0x1d41d0
void entry_001d41c8_0x1d41c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41c8_0x1d41c8");
#endif

    ctx->pc = 0x1d41c8u;

    // 0x1d41c8: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D41C8u;
    SET_GPR_U32(ctx, 31, 0x1D41D0u);
    ctx->pc = 0x1D41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41C8u;
    // 0x1d41cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D41C8u, 0x1D41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41D0u;
}

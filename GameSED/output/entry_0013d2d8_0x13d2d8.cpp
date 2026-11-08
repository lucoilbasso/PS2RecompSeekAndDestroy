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

// Function: entry_0013d2d8
// Address: 0x13d2d8 - 0x13d2e0
void entry_0013d2d8_0x13d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d2d8_0x13d2d8");
#endif

    ctx->pc = 0x13d2d8u;

    // 0x13d2d8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x13D2D8u;
    SET_GPR_U32(ctx, 31, 0x13D2E0u);
    ctx->pc = 0x13D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2D8u;
    // 0x13d2dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x13D2D8u, 0x13D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2E0u;
}

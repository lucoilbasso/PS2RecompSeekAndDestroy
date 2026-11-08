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

// Function: entry_0016f530
// Address: 0x16f530 - 0x16f538
void entry_0016f530_0x16f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f530_0x16f530");
#endif

    ctx->pc = 0x16f530u;

    // 0x16f530: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x16F530u;
    SET_GPR_U32(ctx, 31, 0x16F538u);
    ctx->pc = 0x16F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F530u;
    // 0x16f534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x16F530u, 0x16F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F538u;
}

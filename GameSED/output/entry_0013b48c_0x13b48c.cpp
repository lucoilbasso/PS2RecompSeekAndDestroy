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

// Function: entry_0013b48c
// Address: 0x13b48c - 0x13b494
void entry_0013b48c_0x13b48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b48c_0x13b48c");
#endif

    ctx->pc = 0x13b48cu;

    // 0x13b48c: 0xc0518aa  jal         func_1462A8
    ctx->pc = 0x13B48Cu;
    SET_GPR_U32(ctx, 31, 0x13B494u);
    ctx->pc = 0x13B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B48Cu;
    // 0x13b490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1462A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1462A8u, 0x13B48Cu, 0x13B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B494u;
}

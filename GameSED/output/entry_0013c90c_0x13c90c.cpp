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

// Function: entry_0013c90c
// Address: 0x13c90c - 0x13c918
void entry_0013c90c_0x13c90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c90c_0x13c90c");
#endif

    ctx->pc = 0x13c90cu;

    // 0x13c90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c910: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x13C910u;
    SET_GPR_U32(ctx, 31, 0x13C918u);
    ctx->pc = 0x13C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C910u;
    // 0x13c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13C910u, 0x13C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C918u;
}

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

// Function: entry_0017422c
// Address: 0x17422c - 0x174234
void entry_0017422c_0x17422c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017422c_0x17422c");
#endif

    ctx->pc = 0x17422cu;

    // 0x17422c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x17422Cu;
    SET_GPR_U32(ctx, 31, 0x174234u);
    ctx->pc = 0x174230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17422Cu;
    // 0x174230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x17422Cu, 0x174234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174234u;
}

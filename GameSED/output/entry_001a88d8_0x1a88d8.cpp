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

// Function: entry_001a88d8
// Address: 0x1a88d8 - 0x1a88e0
void entry_001a88d8_0x1a88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a88d8_0x1a88d8");
#endif

    ctx->pc = 0x1a88d8u;

    // 0x1a88d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A88D8u;
    SET_GPR_U32(ctx, 31, 0x1A88E0u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A88D8u, 0x1A88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88E0u;
}

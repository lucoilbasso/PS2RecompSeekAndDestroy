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

// Function: entry_001b1f58
// Address: 0x1b1f58 - 0x1b1f60
void entry_001b1f58_0x1b1f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1f58_0x1b1f58");
#endif

    ctx->pc = 0x1b1f58u;

    // 0x1b1f58: 0xc06c75e  jal         func_1B1D78
    ctx->pc = 0x1B1F58u;
    SET_GPR_U32(ctx, 31, 0x1B1F60u);
    ctx->pc = 0x1B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1D78u, 0x1B1F58u, 0x1B1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F60u;
}

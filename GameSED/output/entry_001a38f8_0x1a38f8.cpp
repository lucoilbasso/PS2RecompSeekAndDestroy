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

// Function: entry_001a38f8
// Address: 0x1a38f8 - 0x1a3900
void entry_001a38f8_0x1a38f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a38f8_0x1a38f8");
#endif

    ctx->pc = 0x1a38f8u;

    // 0x1a38f8: 0xc06881e  jal         func_1A2078
    ctx->pc = 0x1A38F8u;
    SET_GPR_U32(ctx, 31, 0x1A3900u);
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A38F8u, 0x1A3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3900u;
}

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

// Function: entry_001703c0
// Address: 0x1703c0 - 0x1703c8
void entry_001703c0_0x1703c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001703c0_0x1703c0");
#endif

    ctx->pc = 0x1703c0u;

    // 0x1703c0: 0xc05c120  jal         func_170480
    ctx->pc = 0x1703C0u;
    SET_GPR_U32(ctx, 31, 0x1703C8u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x1703C0u, 0x1703C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703C8u;
}

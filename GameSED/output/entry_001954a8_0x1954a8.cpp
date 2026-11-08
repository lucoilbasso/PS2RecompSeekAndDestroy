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

// Function: entry_001954a8
// Address: 0x1954a8 - 0x1954b0
void entry_001954a8_0x1954a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001954a8_0x1954a8");
#endif

    ctx->pc = 0x1954a8u;

    // 0x1954a8: 0xc064f62  jal         func_193D88
    ctx->pc = 0x1954A8u;
    SET_GPR_U32(ctx, 31, 0x1954B0u);
    ctx->pc = 0x193D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D88u, 0x1954A8u, 0x1954B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954B0u;
}

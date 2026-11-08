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

// Function: entry_0011dab0
// Address: 0x11dab0 - 0x11dab8
void entry_0011dab0_0x11dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dab0_0x11dab0");
#endif

    ctx->pc = 0x11dab0u;

    // 0x11dab0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DAB0u;
    SET_GPR_U32(ctx, 31, 0x11DAB8u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DAB0u, 0x11DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAB8u;
}

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

// Function: entry_0016f398
// Address: 0x16f398 - 0x16f3a0
void entry_0016f398_0x16f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f398_0x16f398");
#endif

    ctx->pc = 0x16f398u;

    // 0x16f398: 0xc05bf04  jal         func_16FC10
    ctx->pc = 0x16F398u;
    SET_GPR_U32(ctx, 31, 0x16F3A0u);
    ctx->pc = 0x16FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FC10u, 0x16F398u, 0x16F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3A0u;
}

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

// Function: entry_001cff64
// Address: 0x1cff64 - 0x1cff6c
void entry_001cff64_0x1cff64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff64_0x1cff64");
#endif

    ctx->pc = 0x1cff64u;

    // 0x1cff64: 0xc074086  jal         func_1D0218
    ctx->pc = 0x1CFF64u;
    SET_GPR_U32(ctx, 31, 0x1CFF6Cu);
    ctx->pc = 0x1D0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0218u, 0x1CFF64u, 0x1CFF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF6Cu;
}

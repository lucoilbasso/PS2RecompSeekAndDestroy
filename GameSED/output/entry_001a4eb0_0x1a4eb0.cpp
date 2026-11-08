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

// Function: entry_001a4eb0
// Address: 0x1a4eb0 - 0x1a4eb8
void entry_001a4eb0_0x1a4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4eb0_0x1a4eb0");
#endif

    ctx->pc = 0x1a4eb0u;

    // 0x1a4eb0: 0xc06881e  jal         func_1A2078
    ctx->pc = 0x1A4EB0u;
    SET_GPR_U32(ctx, 31, 0x1A4EB8u);
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A4EB0u, 0x1A4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EB8u;
}

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

// Function: entry_001b82b4
// Address: 0x1b82b4 - 0x1b82bc
void entry_001b82b4_0x1b82b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b82b4_0x1b82b4");
#endif

    ctx->pc = 0x1b82b4u;

    // 0x1b82b4: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B82B4u;
    SET_GPR_U32(ctx, 31, 0x1B82BCu);
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B82B4u, 0x1B82BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82BCu;
}

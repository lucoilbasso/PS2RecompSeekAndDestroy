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

// Function: entry_001c2170
// Address: 0x1c2170 - 0x1c2178
void entry_001c2170_0x1c2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2170_0x1c2170");
#endif

    ctx->pc = 0x1c2170u;

    // 0x1c2170: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C2170u;
    SET_GPR_U32(ctx, 31, 0x1C2178u);
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2170u, 0x1C2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2178u;
}

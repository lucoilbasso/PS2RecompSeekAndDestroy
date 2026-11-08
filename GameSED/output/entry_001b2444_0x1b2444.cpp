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

// Function: entry_001b2444
// Address: 0x1b2444 - 0x1b244c
void entry_001b2444_0x1b2444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2444_0x1b2444");
#endif

    ctx->pc = 0x1b2444u;

    // 0x1b2444: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B2444u;
    SET_GPR_U32(ctx, 31, 0x1B244Cu);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B2444u, 0x1B244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B244Cu;
}

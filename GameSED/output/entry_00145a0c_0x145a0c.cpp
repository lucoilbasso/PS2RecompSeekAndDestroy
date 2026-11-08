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

// Function: entry_00145a0c
// Address: 0x145a0c - 0x145a14
void entry_00145a0c_0x145a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a0c_0x145a0c");
#endif

    ctx->pc = 0x145a0cu;

    // 0x145a0c: 0xc04b9ca  jal         func_12E728
    ctx->pc = 0x145A0Cu;
    SET_GPR_U32(ctx, 31, 0x145A14u);
    ctx->pc = 0x12E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E728u, 0x145A0Cu, 0x145A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A14u;
}

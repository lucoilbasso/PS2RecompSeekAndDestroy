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

// Function: entry_0017dd7c
// Address: 0x17dd7c - 0x17dd84
void entry_0017dd7c_0x17dd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd7c_0x17dd7c");
#endif

    ctx->pc = 0x17dd7cu;

    // 0x17dd7c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17DD7Cu;
    SET_GPR_U32(ctx, 31, 0x17DD84u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17DD7Cu, 0x17DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD84u;
}

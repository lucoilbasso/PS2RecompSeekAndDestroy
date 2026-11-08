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

// Function: entry_00171768
// Address: 0x171768 - 0x171770
void entry_00171768_0x171768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171768_0x171768");
#endif

    ctx->pc = 0x171768u;

    // 0x171768: 0xc06f330  jal         func_1BCCC0
    ctx->pc = 0x171768u;
    SET_GPR_U32(ctx, 31, 0x171770u);
    ctx->pc = 0x1BCCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCCC0u, 0x171768u, 0x171770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171770u;
}

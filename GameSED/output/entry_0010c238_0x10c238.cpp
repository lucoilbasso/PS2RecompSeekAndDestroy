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

// Function: entry_0010c238
// Address: 0x10c238 - 0x10c240
void entry_0010c238_0x10c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c238_0x10c238");
#endif

    ctx->pc = 0x10c238u;

    // 0x10c238: 0xc041f0a  jal         func_107C28
    ctx->pc = 0x10C238u;
    SET_GPR_U32(ctx, 31, 0x10C240u);
    ctx->pc = 0x107C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C28u, 0x10C238u, 0x10C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C240u;
}

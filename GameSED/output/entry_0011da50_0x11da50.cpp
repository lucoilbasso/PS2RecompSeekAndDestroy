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

// Function: entry_0011da50
// Address: 0x11da50 - 0x11da58
void entry_0011da50_0x11da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da50_0x11da50");
#endif

    ctx->pc = 0x11da50u;

    // 0x11da50: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DA50u;
    SET_GPR_U32(ctx, 31, 0x11DA58u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DA50u, 0x11DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA58u;
}

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

// Function: entry_00110534
// Address: 0x110534 - 0x11053c
void entry_00110534_0x110534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110534_0x110534");
#endif

    ctx->pc = 0x110534u;

    // 0x110534: 0xc040d98  jal         func_103660
    ctx->pc = 0x110534u;
    SET_GPR_U32(ctx, 31, 0x11053Cu);
    ctx->pc = 0x103660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103660u, 0x110534u, 0x11053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11053Cu;
}

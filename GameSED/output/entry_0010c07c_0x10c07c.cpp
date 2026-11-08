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

// Function: entry_0010c07c
// Address: 0x10c07c - 0x10c084
void entry_0010c07c_0x10c07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c07c_0x10c07c");
#endif

    ctx->pc = 0x10c07cu;

    // 0x10c07c: 0xc041160  jal         func_104580
    ctx->pc = 0x10C07Cu;
    SET_GPR_U32(ctx, 31, 0x10C084u);
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x10C07Cu, 0x10C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C084u;
}

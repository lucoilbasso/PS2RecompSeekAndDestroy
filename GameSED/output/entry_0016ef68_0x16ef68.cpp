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

// Function: entry_0016ef68
// Address: 0x16ef68 - 0x16ef70
void entry_0016ef68_0x16ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef68_0x16ef68");
#endif

    ctx->pc = 0x16ef68u;

    // 0x16ef68: 0xc05ba8c  jal         func_16EA30
    ctx->pc = 0x16EF68u;
    SET_GPR_U32(ctx, 31, 0x16EF70u);
    ctx->pc = 0x16EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA30u, 0x16EF68u, 0x16EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF70u;
}

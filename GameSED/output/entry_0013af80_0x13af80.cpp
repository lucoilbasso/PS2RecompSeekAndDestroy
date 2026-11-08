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

// Function: entry_0013af80
// Address: 0x13af80 - 0x13af88
void entry_0013af80_0x13af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013af80_0x13af80");
#endif

    ctx->pc = 0x13af80u;

    // 0x13af80: 0xc046be0  jal         func_11AF80
    ctx->pc = 0x13AF80u;
    SET_GPR_U32(ctx, 31, 0x13AF88u);
    ctx->pc = 0x11AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF80u, 0x13AF80u, 0x13AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF88u;
}

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

// Function: entry_00159e28
// Address: 0x159e28 - 0x159e30
void entry_00159e28_0x159e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159e28_0x159e28");
#endif

    ctx->pc = 0x159e28u;

    // 0x159e28: 0xc055e78  jal         func_1579E0
    ctx->pc = 0x159E28u;
    SET_GPR_U32(ctx, 31, 0x159E30u);
    ctx->pc = 0x1579E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1579E0u, 0x159E28u, 0x159E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E30u;
}

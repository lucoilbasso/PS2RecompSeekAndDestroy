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

// Function: entry_00170908
// Address: 0x170908 - 0x170910
void entry_00170908_0x170908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170908_0x170908");
#endif

    ctx->pc = 0x170908u;

    // 0x170908: 0xc05c120  jal         func_170480
    ctx->pc = 0x170908u;
    SET_GPR_U32(ctx, 31, 0x170910u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x170908u, 0x170910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170910u;
}

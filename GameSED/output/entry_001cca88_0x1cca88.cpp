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

// Function: entry_001cca88
// Address: 0x1cca88 - 0x1cca90
void entry_001cca88_0x1cca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca88_0x1cca88");
#endif

    ctx->pc = 0x1cca88u;

    // 0x1cca88: 0xc07329a  jal         func_1CCA68
    ctx->pc = 0x1CCA88u;
    SET_GPR_U32(ctx, 31, 0x1CCA90u);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCA88u, 0x1CCA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA90u;
}

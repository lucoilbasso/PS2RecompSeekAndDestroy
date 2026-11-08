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

// Function: entry_001560d0
// Address: 0x1560d0 - 0x1560d8
void entry_001560d0_0x1560d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560d0_0x1560d0");
#endif

    ctx->pc = 0x1560d0u;

    // 0x1560d0: 0xc054760  jal         func_151D80
    ctx->pc = 0x1560D0u;
    SET_GPR_U32(ctx, 31, 0x1560D8u);
    ctx->pc = 0x151D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151D80u, 0x1560D0u, 0x1560D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560D8u;
}

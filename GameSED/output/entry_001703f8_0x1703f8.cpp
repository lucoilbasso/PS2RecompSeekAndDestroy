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

// Function: entry_001703f8
// Address: 0x1703f8 - 0x170400
void entry_001703f8_0x1703f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001703f8_0x1703f8");
#endif

    ctx->pc = 0x1703f8u;

    // 0x1703f8: 0xc05c120  jal         func_170480
    ctx->pc = 0x1703F8u;
    SET_GPR_U32(ctx, 31, 0x170400u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x1703F8u, 0x170400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170400u;
}

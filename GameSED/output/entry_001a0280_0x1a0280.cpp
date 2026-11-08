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

// Function: entry_001a0280
// Address: 0x1a0280 - 0x1a0288
void entry_001a0280_0x1a0280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0280_0x1a0280");
#endif

    ctx->pc = 0x1a0280u;

    // 0x1a0280: 0xc067d0e  jal         func_19F438
    ctx->pc = 0x1A0280u;
    SET_GPR_U32(ctx, 31, 0x1A0288u);
    ctx->pc = 0x19F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F438u, 0x1A0280u, 0x1A0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0288u;
}

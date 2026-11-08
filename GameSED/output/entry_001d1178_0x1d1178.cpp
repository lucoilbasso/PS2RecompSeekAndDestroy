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

// Function: entry_001d1178
// Address: 0x1d1178 - 0x1d1180
void entry_001d1178_0x1d1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1178_0x1d1178");
#endif

    ctx->pc = 0x1d1178u;

    // 0x1d1178: 0xc075294  jal         func_1D4A50
    ctx->pc = 0x1D1178u;
    SET_GPR_U32(ctx, 31, 0x1D1180u);
    ctx->pc = 0x1D4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A50u, 0x1D1178u, 0x1D1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1180u;
}

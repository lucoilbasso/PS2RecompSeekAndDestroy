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

// Function: entry_001d6628
// Address: 0x1d6628 - 0x1d6630
void entry_001d6628_0x1d6628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6628_0x1d6628");
#endif

    ctx->pc = 0x1d6628u;

    // 0x1d6628: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1D6628u;
    SET_GPR_U32(ctx, 31, 0x1D6630u);
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1D6628u, 0x1D6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6630u;
}

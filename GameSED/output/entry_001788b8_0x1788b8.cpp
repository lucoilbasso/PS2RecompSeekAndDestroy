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

// Function: entry_001788b8
// Address: 0x1788b8 - 0x1788c0
void entry_001788b8_0x1788b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001788b8_0x1788b8");
#endif

    ctx->pc = 0x1788b8u;

    // 0x1788b8: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x1788B8u;
    SET_GPR_U32(ctx, 31, 0x1788C0u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x1788B8u, 0x1788C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788C0u;
}

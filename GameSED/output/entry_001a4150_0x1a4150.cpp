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

// Function: entry_001a4150
// Address: 0x1a4150 - 0x1a4158
void entry_001a4150_0x1a4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4150_0x1a4150");
#endif

    ctx->pc = 0x1a4150u;

    // 0x1a4150: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A4150u;
    SET_GPR_U32(ctx, 31, 0x1A4158u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4150u, 0x1A4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4158u;
}

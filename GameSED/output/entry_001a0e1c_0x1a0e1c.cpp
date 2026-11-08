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

// Function: entry_001a0e1c
// Address: 0x1a0e1c - 0x1a0e24
void entry_001a0e1c_0x1a0e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0e1c_0x1a0e1c");
#endif

    ctx->pc = 0x1a0e1cu;

    // 0x1a0e1c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E24u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0E1Cu, 0x1A0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E24u;
}

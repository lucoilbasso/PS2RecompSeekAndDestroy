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

// Function: entry_001a0c38
// Address: 0x1a0c38 - 0x1a0c40
void entry_001a0c38_0x1a0c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0c38_0x1a0c38");
#endif

    ctx->pc = 0x1a0c38u;

    // 0x1a0c38: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A0C38u;
    SET_GPR_U32(ctx, 31, 0x1A0C40u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A0C38u, 0x1A0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C40u;
}

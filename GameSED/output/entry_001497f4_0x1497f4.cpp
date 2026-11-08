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

// Function: entry_001497f4
// Address: 0x1497f4 - 0x1497fc
void entry_001497f4_0x1497f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001497f4_0x1497f4");
#endif

    ctx->pc = 0x1497f4u;

    // 0x1497f4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1497F4u;
    SET_GPR_U32(ctx, 31, 0x1497FCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1497F4u, 0x1497FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497FCu;
}

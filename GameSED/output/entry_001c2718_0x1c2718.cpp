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

// Function: entry_001c2718
// Address: 0x1c2718 - 0x1c2720
void entry_001c2718_0x1c2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2718_0x1c2718");
#endif

    ctx->pc = 0x1c2718u;

    // 0x1c2718: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C2718u;
    SET_GPR_U32(ctx, 31, 0x1C2720u);
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2718u, 0x1C2720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2720u;
}

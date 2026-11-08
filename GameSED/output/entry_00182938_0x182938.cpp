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

// Function: entry_00182938
// Address: 0x182938 - 0x182940
void entry_00182938_0x182938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182938_0x182938");
#endif

    ctx->pc = 0x182938u;

    // 0x182938: 0xc05fee2  jal         func_17FB88
    ctx->pc = 0x182938u;
    SET_GPR_U32(ctx, 31, 0x182940u);
    ctx->pc = 0x17FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB88u, 0x182938u, 0x182940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182940u;
}

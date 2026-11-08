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

// Function: entry_0013ebc8
// Address: 0x13ebc8 - 0x13ebd0
void entry_0013ebc8_0x13ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ebc8_0x13ebc8");
#endif

    ctx->pc = 0x13ebc8u;

    // 0x13ebc8: 0xc04c8c4  jal         func_132310
    ctx->pc = 0x13EBC8u;
    SET_GPR_U32(ctx, 31, 0x13EBD0u);
    ctx->pc = 0x132310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132310u, 0x13EBC8u, 0x13EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBD0u;
}

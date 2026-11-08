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

// Function: entry_001cb640
// Address: 0x1cb640 - 0x1cb648
void entry_001cb640_0x1cb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb640_0x1cb640");
#endif

    ctx->pc = 0x1cb640u;

    // 0x1cb640: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CB640u;
    SET_GPR_U32(ctx, 31, 0x1CB648u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CB640u, 0x1CB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB648u;
}

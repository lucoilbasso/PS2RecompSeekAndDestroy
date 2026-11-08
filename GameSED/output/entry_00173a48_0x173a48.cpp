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

// Function: entry_00173a48
// Address: 0x173a48 - 0x173a50
void entry_00173a48_0x173a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a48_0x173a48");
#endif

    ctx->pc = 0x173a48u;

    // 0x173a48: 0xc05cbe6  jal         func_172F98
    ctx->pc = 0x173A48u;
    SET_GPR_U32(ctx, 31, 0x173A50u);
    ctx->pc = 0x172F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172F98u, 0x173A48u, 0x173A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A50u;
}

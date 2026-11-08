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

// Function: entry_0010cf60
// Address: 0x10cf60 - 0x10cf68
void entry_0010cf60_0x10cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cf60_0x10cf60");
#endif

    ctx->pc = 0x10cf60u;

    // 0x10cf60: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10CF60u;
    SET_GPR_U32(ctx, 31, 0x10CF68u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10CF60u, 0x10CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF68u;
}

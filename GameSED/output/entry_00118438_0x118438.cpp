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

// Function: entry_00118438
// Address: 0x118438 - 0x11843c
void entry_00118438_0x118438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118438_0x118438");
#endif

    ctx->pc = 0x118438u;

    // 0x118438: 0xc046334  jal         func_118CD0
    ctx->pc = 0x118438u;
    SET_GPR_U32(ctx, 31, 0x118440u);
    ctx->pc = 0x118CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CD0u, 0x118438u, 0x118440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118440u;
}

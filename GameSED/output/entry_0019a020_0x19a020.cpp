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

// Function: entry_0019a020
// Address: 0x19a020 - 0x19a028
void entry_0019a020_0x19a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a020_0x19a020");
#endif

    ctx->pc = 0x19a020u;

    // 0x19a020: 0xc066844  jal         func_19A110
    ctx->pc = 0x19A020u;
    SET_GPR_U32(ctx, 31, 0x19A028u);
    ctx->pc = 0x19A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A110u, 0x19A020u, 0x19A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A028u;
}

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

// Function: entry_00110960
// Address: 0x110960 - 0x110968
void entry_00110960_0x110960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110960_0x110960");
#endif

    ctx->pc = 0x110960u;

    // 0x110960: 0xc043d8a  jal         func_10F628
    ctx->pc = 0x110960u;
    SET_GPR_U32(ctx, 31, 0x110968u);
    ctx->pc = 0x10F628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F628u, 0x110960u, 0x110968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110968u;
}

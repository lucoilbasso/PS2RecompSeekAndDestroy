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

// Function: entry_001ccb08
// Address: 0x1ccb08 - 0x1ccb10
void entry_001ccb08_0x1ccb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb08_0x1ccb08");
#endif

    ctx->pc = 0x1ccb08u;

    // 0x1ccb08: 0xc0734a6  jal         func_1CD298
    ctx->pc = 0x1CCB08u;
    SET_GPR_U32(ctx, 31, 0x1CCB10u);
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CCB08u, 0x1CCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB10u;
}

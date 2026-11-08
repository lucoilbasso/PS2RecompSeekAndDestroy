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

// Function: entry_00105c90
// Address: 0x105c90 - 0x105c98
void entry_00105c90_0x105c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105c90_0x105c90");
#endif

    ctx->pc = 0x105c90u;

    // 0x105c90: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x105C90u;
    SET_GPR_U32(ctx, 31, 0x105C98u);
    ctx->pc = 0x1A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8760u, 0x105C90u, 0x105C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C98u;
}

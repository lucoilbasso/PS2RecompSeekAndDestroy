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

// Function: entry_00141c68
// Address: 0x141c68 - 0x141c6c
void entry_00141c68_0x141c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c68_0x141c68");
#endif

    ctx->pc = 0x141c68u;

    // 0x141c68: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x141C68u;
    SET_GPR_U32(ctx, 31, 0x141C70u);
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x141C68u, 0x141C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C70u;
}

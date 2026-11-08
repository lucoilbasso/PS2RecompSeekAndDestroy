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

// Function: entry_00170114
// Address: 0x170114 - 0x17011c
void entry_00170114_0x170114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170114_0x170114");
#endif

    ctx->pc = 0x170114u;

    // 0x170114: 0xc05c216  jal         func_170858
    ctx->pc = 0x170114u;
    SET_GPR_U32(ctx, 31, 0x17011Cu);
    ctx->pc = 0x170858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170858u, 0x170114u, 0x17011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17011Cu;
}

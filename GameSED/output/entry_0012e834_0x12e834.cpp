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

// Function: entry_0012e834
// Address: 0x12e834 - 0x12e83c
void entry_0012e834_0x12e834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e834_0x12e834");
#endif

    ctx->pc = 0x12e834u;

    // 0x12e834: 0xc04b4ce  jal         func_12D338
    ctx->pc = 0x12E834u;
    SET_GPR_U32(ctx, 31, 0x12E83Cu);
    ctx->pc = 0x12D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D338u, 0x12E834u, 0x12E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E83Cu;
}

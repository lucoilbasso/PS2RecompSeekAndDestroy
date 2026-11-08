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

// Function: entry_001b7490
// Address: 0x1b7490 - 0x1b74a0
void entry_001b7490_0x1b7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7490_0x1b7490");
#endif

    switch (ctx->pc) {
        case 0x1b7498u: goto label_1b7498;
        default: break;
    }

    ctx->pc = 0x1b7490u;

    // 0x1b7490: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B7490u;
    SET_GPR_U32(ctx, 31, 0x1B7498u);
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B7490u, 0x1B7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7498u;
label_1b7498:
    // 0x1b7498: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B7498u;
    {
        const bool branch_taken_0x1b7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7498) {
            ctx->pc = 0x1B7408u;
            return;
        }
    }
    ctx->pc = 0x1B74A0u;
}

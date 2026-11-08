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

// Function: entry_001cd90c
// Address: 0x1cd90c - 0x1cd918
void entry_001cd90c_0x1cd90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd90c_0x1cd90c");
#endif

    switch (ctx->pc) {
        case 0x1cd914u: goto label_1cd914;
        default: break;
    }

    ctx->pc = 0x1cd90cu;

    // 0x1cd90c: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CD90Cu;
    SET_GPR_U32(ctx, 31, 0x1CD914u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD90Cu, 0x1CD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD914u;
label_1cd914:
    // 0x1cd914: 0x0  nop
    ctx->pc = 0x1cd914u;
    // NOP
    ctx->pc = 0x1cd918u;
}

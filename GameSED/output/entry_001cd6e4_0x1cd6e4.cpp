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

// Function: entry_001cd6e4
// Address: 0x1cd6e4 - 0x1cd6f0
void entry_001cd6e4_0x1cd6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6e4_0x1cd6e4");
#endif

    switch (ctx->pc) {
        case 0x1cd6ecu: goto label_1cd6ec;
        default: break;
    }

    ctx->pc = 0x1cd6e4u;

    // 0x1cd6e4: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CD6E4u;
    SET_GPR_U32(ctx, 31, 0x1CD6ECu);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD6E4u, 0x1CD6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6ECu;
label_1cd6ec:
    // 0x1cd6ec: 0x0  nop
    ctx->pc = 0x1cd6ecu;
    // NOP
    ctx->pc = 0x1cd6f0u;
}

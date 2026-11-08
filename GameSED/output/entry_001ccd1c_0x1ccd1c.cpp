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

// Function: entry_001ccd1c
// Address: 0x1ccd1c - 0x1ccd28
void entry_001ccd1c_0x1ccd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd1c_0x1ccd1c");
#endif

    switch (ctx->pc) {
        case 0x1ccd24u: goto label_1ccd24;
        default: break;
    }

    ctx->pc = 0x1ccd1cu;

    // 0x1ccd1c: 0xc07329a  jal         func_1CCA68
    ctx->pc = 0x1CCD1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD24u);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCD1Cu, 0x1CCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD24u;
label_1ccd24:
    // 0x1ccd24: 0x0  nop
    ctx->pc = 0x1ccd24u;
    // NOP
    ctx->pc = 0x1ccd28u;
}

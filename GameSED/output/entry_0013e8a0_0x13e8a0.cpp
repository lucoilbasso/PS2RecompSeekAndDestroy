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

// Function: entry_0013e8a0
// Address: 0x13e8a0 - 0x13e8ac
void entry_0013e8a0_0x13e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e8a0_0x13e8a0");
#endif

    switch (ctx->pc) {
        case 0x13e8a8u: goto label_13e8a8;
        default: break;
    }

    ctx->pc = 0x13e8a0u;

    // 0x13e8a0: 0xc0621f4  jal         func_1887D0
    ctx->pc = 0x13E8A0u;
    SET_GPR_U32(ctx, 31, 0x13E8A8u);
    ctx->pc = 0x1887D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887D0u, 0x13E8A0u, 0x13E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8A8u;
label_13e8a8:
    // 0x13e8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13e8acu;
}

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

// Function: entry_00113590
// Address: 0x113590 - 0x11359c
void entry_00113590_0x113590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113590_0x113590");
#endif

    switch (ctx->pc) {
        case 0x113598u: goto label_113598;
        default: break;
    }

    ctx->pc = 0x113590u;

    // 0x113590: 0xc05beba  jal         func_16FAE8
    ctx->pc = 0x113590u;
    SET_GPR_U32(ctx, 31, 0x113598u);
    ctx->pc = 0x16FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAE8u, 0x113590u, 0x113598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113598u;
label_113598:
    // 0x113598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11359cu;
}

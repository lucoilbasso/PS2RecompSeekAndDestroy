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

// Function: entry_001c767c
// Address: 0x1c767c - 0x1c7688
void entry_001c767c_0x1c767c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c767c_0x1c767c");
#endif

    switch (ctx->pc) {
        case 0x1c7684u: goto label_1c7684;
        default: break;
    }

    ctx->pc = 0x1c767cu;

    // 0x1c767c: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C767Cu;
    SET_GPR_U32(ctx, 31, 0x1C7684u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C767Cu, 0x1C7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7684u;
label_1c7684:
    // 0x1c7684: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c7684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1c7688u;
}

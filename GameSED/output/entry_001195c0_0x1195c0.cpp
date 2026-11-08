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

// Function: entry_001195c0
// Address: 0x1195c0 - 0x1195cc
void entry_001195c0_0x1195c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001195c0_0x1195c0");
#endif

    switch (ctx->pc) {
        case 0x1195c8u: goto label_1195c8;
        default: break;
    }

    ctx->pc = 0x1195c0u;

    // 0x1195c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1195C0u;
    SET_GPR_U32(ctx, 31, 0x1195C8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1195C0u, 0x1195C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195C8u;
label_1195c8:
    // 0x1195c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1195ccu;
}

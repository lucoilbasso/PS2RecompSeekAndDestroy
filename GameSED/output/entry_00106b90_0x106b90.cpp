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

// Function: entry_00106b90
// Address: 0x106b90 - 0x106b9c
void entry_00106b90_0x106b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106b90_0x106b90");
#endif

    switch (ctx->pc) {
        case 0x106b98u: goto label_106b98;
        default: break;
    }

    ctx->pc = 0x106b90u;

    // 0x106b90: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106B90u;
    SET_GPR_U32(ctx, 31, 0x106B98u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106B90u, 0x106B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B98u;
label_106b98:
    // 0x106b98: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x106b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x106b9cu;
}

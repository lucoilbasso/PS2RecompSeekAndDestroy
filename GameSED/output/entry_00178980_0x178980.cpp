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

// Function: entry_00178980
// Address: 0x178980 - 0x17898c
void entry_00178980_0x178980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178980_0x178980");
#endif

    switch (ctx->pc) {
        case 0x178988u: goto label_178988;
        default: break;
    }

    ctx->pc = 0x178980u;

    // 0x178980: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x178980u;
    SET_GPR_U32(ctx, 31, 0x178988u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x178980u, 0x178988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178988u;
label_178988:
    // 0x178988: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x178988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x17898cu;
}

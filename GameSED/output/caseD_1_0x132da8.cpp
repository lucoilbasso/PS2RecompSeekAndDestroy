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

// Function: caseD_1
// Address: 0x132da8 - 0x132db4
void caseD_1_0x132da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x132da8");
#endif

    switch (ctx->pc) {
        case 0x132db0u: goto label_132db0;
        default: break;
    }

    ctx->pc = 0x132da8u;

    // 0x132da8: 0xc06696c  jal         func_19A5B0
    ctx->pc = 0x132DA8u;
    SET_GPR_U32(ctx, 31, 0x132DB0u);
    ctx->pc = 0x19A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5B0u, 0x132DA8u, 0x132DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DB0u;
label_132db0:
    // 0x132db0: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x132db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    ctx->pc = 0x132db4u;
}

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

// Function: entry_001c4bcc
// Address: 0x1c4bcc - 0x1c4bdc
void entry_001c4bcc_0x1c4bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4bcc_0x1c4bcc");
#endif

    switch (ctx->pc) {
        case 0x1c4bd4u: goto label_1c4bd4;
        default: break;
    }

    ctx->pc = 0x1c4bccu;

    // 0x1c4bcc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C4BCCu;
    SET_GPR_U32(ctx, 31, 0x1C4BD4u);
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C4BCCu, 0x1C4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BD4u;
label_1c4bd4:
    // 0x1c4bd4: 0x8e03dc80  lw          $v1, -0x2380($s0)
    ctx->pc = 0x1c4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958208)));
    // 0x1c4bd8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1c4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x1c4bdcu;
}

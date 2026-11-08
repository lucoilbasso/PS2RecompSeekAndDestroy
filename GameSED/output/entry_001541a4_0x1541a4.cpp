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

// Function: entry_001541a4
// Address: 0x1541a4 - 0x1541b8
void entry_001541a4_0x1541a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001541a4_0x1541a4");
#endif

    ctx->pc = 0x1541a4u;

    // 0x1541a4: 0x8c840690  lw          $a0, 0x690($a0)
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
    // 0x1541a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1541A8u;
    {
        const bool branch_taken_0x1541a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1541a8) {
            ctx->pc = 0x1541B8u;
            return;
        }
    }
    ctx->pc = 0x1541B0u;
    // 0x1541b0: 0xc058ab0  jal         func_162AC0
    ctx->pc = 0x1541B0u;
    SET_GPR_U32(ctx, 31, 0x1541B8u);
    ctx->pc = 0x162AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162AC0u, 0x1541B0u, 0x1541B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541B8u;
}

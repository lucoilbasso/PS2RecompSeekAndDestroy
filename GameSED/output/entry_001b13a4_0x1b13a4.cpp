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

// Function: entry_001b13a4
// Address: 0x1b13a4 - 0x1b13b4
void entry_001b13a4_0x1b13a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b13a4_0x1b13a4");
#endif

    ctx->pc = 0x1b13a4u;

    // 0x1b13a4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B13A4u;
    {
        const bool branch_taken_0x1b13a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1b13a4) {
            ctx->pc = 0x1B13B4u;
            return;
        }
    }
    ctx->pc = 0x1B13ACu;
    // 0x1b13ac: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B13ACu;
    SET_GPR_U32(ctx, 31, 0x1B13B4u);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B13ACu, 0x1B13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13B4u;
}

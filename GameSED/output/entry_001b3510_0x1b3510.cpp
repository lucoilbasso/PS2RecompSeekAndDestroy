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

// Function: entry_001b3510
// Address: 0x1b3510 - 0x1b3520
void entry_001b3510_0x1b3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3510_0x1b3510");
#endif

    switch (ctx->pc) {
        case 0x1b3518u: goto label_1b3518;
        default: break;
    }

    ctx->pc = 0x1b3510u;

    // 0x1b3510: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B3510u;
    SET_GPR_U32(ctx, 31, 0x1B3518u);
    ctx->pc = 0x1B3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3510u;
    // 0x1b3514: 0x8e04aa14  lw          $a0, -0x55EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B3510u, 0x1B3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3518u;
label_1b3518:
    // 0x1b3518: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B3518u;
    {
        const bool branch_taken_0x1b3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3518) {
            ctx->pc = 0x1B3578u;
            return;
        }
    }
    ctx->pc = 0x1B3520u;
}

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

// Function: entry_001b328c
// Address: 0x1b328c - 0x1b329c
void entry_001b328c_0x1b328c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b328c_0x1b328c");
#endif

    switch (ctx->pc) {
        case 0x1b3294u: goto label_1b3294;
        default: break;
    }

    ctx->pc = 0x1b328cu;

    // 0x1b328c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B328Cu;
    SET_GPR_U32(ctx, 31, 0x1B3294u);
    ctx->pc = 0x1B3290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B328Cu;
    // 0x1b3290: 0x8e64aa14  lw          $a0, -0x55EC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B328Cu, 0x1B3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3294u;
label_1b3294:
    // 0x1b3294: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3294u;
    {
        const bool branch_taken_0x1b3294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3294) {
            ctx->pc = 0x1B32A4u;
            return;
        }
    }
    ctx->pc = 0x1B329Cu;
}

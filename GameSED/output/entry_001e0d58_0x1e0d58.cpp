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

// Function: entry_001e0d58
// Address: 0x1e0d58 - 0x1e0d70
void entry_001e0d58_0x1e0d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d58_0x1e0d58");
#endif

    switch (ctx->pc) {
        case 0x1e0d60u: goto label_1e0d60;
        default: break;
    }

    ctx->pc = 0x1e0d58u;

    // 0x1e0d58: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1E0D58u;
    SET_GPR_U32(ctx, 31, 0x1E0D60u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1E0D58u, 0x1E0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D60u;
label_1e0d60:
    // 0x1e0d60: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e0d64: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0D64u;
    {
        const bool branch_taken_0x1e0d64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D64u;
        // 0x1e0d68: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d64) {
            ctx->pc = 0x1E0D8Cu;
            return;
        }
    }
    ctx->pc = 0x1E0D6Cu;
    // 0x1e0d6c: 0x0  nop
    ctx->pc = 0x1e0d6cu;
    // NOP
    ctx->pc = 0x1e0d70u;
}

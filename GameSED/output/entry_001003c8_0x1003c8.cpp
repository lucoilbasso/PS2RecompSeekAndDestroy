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

// Function: entry_001003c8
// Address: 0x1003c8 - 0x1003d8
void entry_001003c8_0x1003c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001003c8_0x1003c8");
#endif

    switch (ctx->pc) {
        case 0x1003d0u: goto label_1003d0;
        default: break;
    }

    ctx->pc = 0x1003c8u;

label_1003c8:
    // 0x1003c8: 0xc06daa4  jal         func_1B6A90
    ctx->pc = 0x1003C8u;
    SET_GPR_U32(ctx, 31, 0x1003D0u);
    ctx->pc = 0x1003CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003C8u;
    // 0x1003cc: 0x260417a0  addiu       $a0, $s0, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6A90u, 0x1003C8u, 0x1003D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003D0u;
label_1003d0:
    // 0x1003d0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1003D0u;
    {
        const bool branch_taken_0x1003d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003d0) {
            ctx->pc = 0x1003C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1003c8;
        }
    }
    ctx->pc = 0x1003D8u;
}

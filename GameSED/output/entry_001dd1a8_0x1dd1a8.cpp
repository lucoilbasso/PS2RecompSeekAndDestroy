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

// Function: entry_001dd1a8
// Address: 0x1dd1a8 - 0x1dd1b8
void entry_001dd1a8_0x1dd1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd1a8_0x1dd1a8");
#endif

    switch (ctx->pc) {
        case 0x1dd1b0u: goto label_1dd1b0;
        default: break;
    }

    ctx->pc = 0x1dd1a8u;

label_1dd1a8:
    // 0x1dd1a8: 0xc061934  jal         func_1864D0
    ctx->pc = 0x1DD1A8u;
    SET_GPR_U32(ctx, 31, 0x1DD1B0u);
    ctx->pc = 0x1DD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1A8u;
    // 0x1dd1ac: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x1DD1A8u, 0x1DD1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1B0u;
label_1dd1b0:
    // 0x1dd1b0: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1DD1B0u;
    {
        const bool branch_taken_0x1dd1b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1B0u;
        // 0x1dd1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1b0) {
            ctx->pc = 0x1DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd1a8;
        }
    }
    ctx->pc = 0x1DD1B8u;
}

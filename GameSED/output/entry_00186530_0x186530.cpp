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

// Function: entry_00186530
// Address: 0x186530 - 0x186540
void entry_00186530_0x186530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186530_0x186530");
#endif

    switch (ctx->pc) {
        case 0x186538u: goto label_186538;
        default: break;
    }

    ctx->pc = 0x186530u;

label_186530:
    // 0x186530: 0xc061934  jal         func_1864D0
    ctx->pc = 0x186530u;
    SET_GPR_U32(ctx, 31, 0x186538u);
    ctx->pc = 0x186534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186530u;
    // 0x186534: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x186530u, 0x186538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186538u;
label_186538:
    // 0x186538: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x186538u;
    {
        const bool branch_taken_0x186538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186538u;
        // 0x18653c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186538) {
            ctx->pc = 0x186530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186530;
        }
    }
    ctx->pc = 0x186540u;
}

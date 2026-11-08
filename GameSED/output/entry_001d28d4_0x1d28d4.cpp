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

// Function: entry_001d28d4
// Address: 0x1d28d4 - 0x1d28ec
void entry_001d28d4_0x1d28d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d28d4_0x1d28d4");
#endif

    switch (ctx->pc) {
        case 0x1d28e4u: goto label_1d28e4;
        default: break;
    }

    ctx->pc = 0x1d28d4u;

    // 0x1d28d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D28D4u;
    {
        const bool branch_taken_0x1d28d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D4u;
        // 0x1d28d8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d4) {
            ctx->pc = 0x1D28ECu;
            return;
        }
    }
    ctx->pc = 0x1D28DCu;
    // 0x1d28dc: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D28DCu;
    SET_GPR_U32(ctx, 31, 0x1D28E4u);
    ctx->pc = 0x1D28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28DCu;
    // 0x1d28e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D28DCu, 0x1D28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E4u;
label_1d28e4:
    // 0x1d28e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D28E4u;
    {
        const bool branch_taken_0x1d28e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28E4u;
        // 0x1d28e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28e4) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D28ECu;
}

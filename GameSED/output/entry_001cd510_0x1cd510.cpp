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

// Function: entry_001cd510
// Address: 0x1cd510 - 0x1cd52c
void entry_001cd510_0x1cd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd510_0x1cd510");
#endif

    switch (ctx->pc) {
        case 0x1cd528u: goto label_1cd528;
        default: break;
    }

    ctx->pc = 0x1cd510u;

    // 0x1cd510: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cd514: 0x8c43de18  lw          $v1, -0x21E8($v0)
    ctx->pc = 0x1cd514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DE18u));
    // 0x1cd518: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD518u;
    {
        const bool branch_taken_0x1cd518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd518) {
            ctx->pc = 0x1CD51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD518u;
            // 0x1cd51c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD52Cu;
            return;
        }
    }
    ctx->pc = 0x1CD520u;
    // 0x1cd520: 0xc0734b0  jal         func_1CD2C0
    ctx->pc = 0x1CD520u;
    SET_GPR_U32(ctx, 31, 0x1CD528u);
    ctx->pc = 0x1CD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD2C0u, 0x1CD520u, 0x1CD528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD528u;
label_1cd528:
    // 0x1cd528: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1cd52cu;
}

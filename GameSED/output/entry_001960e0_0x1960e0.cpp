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

// Function: entry_001960e0
// Address: 0x1960e0 - 0x1960f4
void entry_001960e0_0x1960e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001960e0_0x1960e0");
#endif

    ctx->pc = 0x1960e0u;

    // 0x1960e0: 0x8e040244  lw          $a0, 0x244($s0)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1960e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1960E4u;
    {
        const bool branch_taken_0x1960e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960e4) {
            ctx->pc = 0x1960F4u;
            return;
        }
    }
    ctx->pc = 0x1960ECu;
    // 0x1960ec: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1960ECu;
    SET_GPR_U32(ctx, 31, 0x1960F4u);
    ctx->pc = 0x1960F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960ECu;
    // 0x1960f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1960ECu, 0x1960F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960F4u;
}

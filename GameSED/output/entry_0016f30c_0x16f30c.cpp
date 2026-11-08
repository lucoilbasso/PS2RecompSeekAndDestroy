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

// Function: entry_0016f30c
// Address: 0x16f30c - 0x16f318
void entry_0016f30c_0x16f30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f30c_0x16f30c");
#endif

    ctx->pc = 0x16f30cu;

    // 0x16f30c: 0x8f848b58  lw          $a0, -0x74A8($gp)
    ctx->pc = 0x16f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x16f310: 0xc063b42  jal         func_18ED08
    ctx->pc = 0x16F310u;
    SET_GPR_U32(ctx, 31, 0x16F318u);
    ctx->pc = 0x16F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F310u;
    // 0x16f314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED08u, 0x16F310u, 0x16F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F318u;
}

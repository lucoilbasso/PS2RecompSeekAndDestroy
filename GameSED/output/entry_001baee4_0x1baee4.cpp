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

// Function: entry_001baee4
// Address: 0x1baee4 - 0x1baef4
void entry_001baee4_0x1baee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baee4_0x1baee4");
#endif

    ctx->pc = 0x1baee4u;

    // 0x1baee4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAEE4u;
    {
        const bool branch_taken_0x1baee4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEE4u;
        // 0x1baee8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baee4) {
            ctx->pc = 0x1BAEF4u;
            return;
        }
    }
    ctx->pc = 0x1BAEECu;
    // 0x1baeec: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BAEECu;
    SET_GPR_U32(ctx, 31, 0x1BAEF4u);
    ctx->pc = 0x1BAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEECu;
    // 0x1baef0: 0x2484b070  addiu       $a0, $a0, -0x4F90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BAEECu, 0x1BAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEF4u;
}

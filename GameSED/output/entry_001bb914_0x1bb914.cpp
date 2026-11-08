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

// Function: entry_001bb914
// Address: 0x1bb914 - 0x1bb924
void entry_001bb914_0x1bb914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb914_0x1bb914");
#endif

    ctx->pc = 0x1bb914u;

    // 0x1bb914: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB914u;
    {
        const bool branch_taken_0x1bb914 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1BB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB914u;
        // 0x1bb918: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb914) {
            ctx->pc = 0x1BB924u;
            return;
        }
    }
    ctx->pc = 0x1BB91Cu;
    // 0x1bb91c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB91Cu;
    SET_GPR_U32(ctx, 31, 0x1BB924u);
    ctx->pc = 0x1BB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB91Cu;
    // 0x1bb920: 0x2484b1f8  addiu       $a0, $a0, -0x4E08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB91Cu, 0x1BB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB924u;
}

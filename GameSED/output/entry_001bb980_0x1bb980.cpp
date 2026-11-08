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

// Function: entry_001bb980
// Address: 0x1bb980 - 0x1bb990
void entry_001bb980_0x1bb980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb980_0x1bb980");
#endif

    ctx->pc = 0x1bb980u;

    // 0x1bb980: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB980u;
    {
        const bool branch_taken_0x1bb980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB980u;
        // 0x1bb984: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb980) {
            ctx->pc = 0x1BB990u;
            return;
        }
    }
    ctx->pc = 0x1BB988u;
    // 0x1bb988: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB988u;
    SET_GPR_U32(ctx, 31, 0x1BB990u);
    ctx->pc = 0x1BB98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB988u;
    // 0x1bb98c: 0x2484b210  addiu       $a0, $a0, -0x4DF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB988u, 0x1BB990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB990u;
}

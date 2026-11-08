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

// Function: entry_001bb70c
// Address: 0x1bb70c - 0x1bb71c
void entry_001bb70c_0x1bb70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb70c_0x1bb70c");
#endif

    ctx->pc = 0x1bb70cu;

    // 0x1bb70c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB70Cu;
    {
        const bool branch_taken_0x1bb70c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB70Cu;
        // 0x1bb710: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb70c) {
            ctx->pc = 0x1BB71Cu;
            return;
        }
    }
    ctx->pc = 0x1BB714u;
    // 0x1bb714: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB714u;
    SET_GPR_U32(ctx, 31, 0x1BB71Cu);
    ctx->pc = 0x1BB718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB714u;
    // 0x1bb718: 0x2484b178  addiu       $a0, $a0, -0x4E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB714u, 0x1BB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB71Cu;
}

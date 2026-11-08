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

// Function: entry_001b89b4
// Address: 0x1b89b4 - 0x1b89c8
void entry_001b89b4_0x1b89b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b89b4_0x1b89b4");
#endif

    ctx->pc = 0x1b89b4u;

    // 0x1b89b4: 0x8c43c024  lw          $v1, -0x3FDC($v0)
    ctx->pc = 0x1b89b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950948)));
    // 0x1b89b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B89B8u;
    {
        const bool branch_taken_0x1b89b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89B8u;
        // 0x1b89bc: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89b8) {
            ctx->pc = 0x1B89C8u;
            return;
        }
    }
    ctx->pc = 0x1B89C0u;
    // 0x1b89c0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B89C0u;
    SET_GPR_U32(ctx, 31, 0x1B89C8u);
    ctx->pc = 0x1B89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89C0u;
    // 0x1b89c4: 0x2484ad80  addiu       $a0, $a0, -0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B89C0u, 0x1B89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89C8u;
}

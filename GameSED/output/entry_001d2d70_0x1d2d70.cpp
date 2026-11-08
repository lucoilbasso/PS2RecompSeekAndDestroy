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

// Function: entry_001d2d70
// Address: 0x1d2d70 - 0x1d2d7c
void entry_001d2d70_0x1d2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d70_0x1d2d70");
#endif

    ctx->pc = 0x1d2d70u;

    // 0x1d2d70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2D70u;
    {
        const bool branch_taken_0x1d2d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D70u;
        // 0x1d2d74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d70) {
            ctx->pc = 0x1D2D7Cu;
            return;
        }
    }
    ctx->pc = 0x1D2D78u;
    // 0x1d2d78: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1d2d7cu;
}

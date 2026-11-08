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

// Function: entry_001a0530
// Address: 0x1a0530 - 0x1a0538
void entry_001a0530_0x1a0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0530_0x1a0530");
#endif

    ctx->pc = 0x1a0530u;

    // 0x1a0530: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0530u;
    {
        const bool branch_taken_0x1a0530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0530) {
            ctx->pc = 0x1A0534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0530u;
            // 0x1a0534: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0540u;
            return;
        }
    }
    ctx->pc = 0x1A0538u;
}

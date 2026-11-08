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

// Function: entry_001ccf60
// Address: 0x1ccf60 - 0x1ccf68
void entry_001ccf60_0x1ccf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf60_0x1ccf60");
#endif

    ctx->pc = 0x1ccf60u;

    // 0x1ccf60: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CCF60u;
    {
        const bool branch_taken_0x1ccf60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF60u;
        // 0x1ccf64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf60) {
            ctx->pc = 0x1CCF10u;
            return;
        }
    }
    ctx->pc = 0x1CCF68u;
}

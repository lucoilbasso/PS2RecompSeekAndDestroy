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

// Function: entry_001ccee0
// Address: 0x1ccee0 - 0x1ccee8
void entry_001ccee0_0x1ccee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccee0_0x1ccee0");
#endif

    ctx->pc = 0x1ccee0u;

    // 0x1ccee0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CCEE0u;
    {
        const bool branch_taken_0x1ccee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEE0u;
        // 0x1ccee4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccee0) {
            ctx->pc = 0x1CCEB0u;
            return;
        }
    }
    ctx->pc = 0x1CCEE8u;
}

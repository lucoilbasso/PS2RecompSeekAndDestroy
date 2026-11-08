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

// Function: entry_001d5754
// Address: 0x1d5754 - 0x1d575c
void entry_001d5754_0x1d5754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5754_0x1d5754");
#endif

    ctx->pc = 0x1d5754u;

    // 0x1d5754: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5754u;
    {
        const bool branch_taken_0x1d5754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5754u;
        // 0x1d5758: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5754) {
            ctx->pc = 0x1D5764u;
            return;
        }
    }
    ctx->pc = 0x1D575Cu;
}

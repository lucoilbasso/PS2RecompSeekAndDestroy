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

// Function: entry_0012bf10
// Address: 0x12bf10 - 0x12bf18
void entry_0012bf10_0x12bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bf10_0x12bf10");
#endif

    ctx->pc = 0x12bf10u;

    // 0x12bf10: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x12BF10u;
    {
        const bool branch_taken_0x12bf10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF10u;
        // 0x12bf14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf10) {
            ctx->pc = 0x12BF4Cu;
            return;
        }
    }
    ctx->pc = 0x12BF18u;
}

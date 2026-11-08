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

// Function: entry_001cdc70
// Address: 0x1cdc70 - 0x1cdc78
void entry_001cdc70_0x1cdc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc70_0x1cdc70");
#endif

    ctx->pc = 0x1cdc70u;

    // 0x1cdc70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDC70u;
    {
        const bool branch_taken_0x1cdc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc70) {
            ctx->pc = 0x1CDC90u;
            return;
        }
    }
    ctx->pc = 0x1CDC78u;
}

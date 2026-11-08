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

// Function: entry_00115e70
// Address: 0x115e70 - 0x115e78
void entry_00115e70_0x115e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e70_0x115e70");
#endif

    ctx->pc = 0x115e70u;

    // 0x115e70: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x115E70u;
    {
        const bool branch_taken_0x115e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E70u;
        // 0x115e74: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e70) {
            ctx->pc = 0x116064u;
            return;
        }
    }
    ctx->pc = 0x115E78u;
}

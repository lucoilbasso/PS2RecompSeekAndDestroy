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

// Function: entry_001ceb88
// Address: 0x1ceb88 - 0x1ceb90
void entry_001ceb88_0x1ceb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb88_0x1ceb88");
#endif

    ctx->pc = 0x1ceb88u;

    // 0x1ceb88: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1CEB88u;
    {
        const bool branch_taken_0x1ceb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB88u;
        // 0x1ceb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb88) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEB90u;
}

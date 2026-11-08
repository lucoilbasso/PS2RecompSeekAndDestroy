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

// Function: entry_001aa098
// Address: 0x1aa098 - 0x1aa0a0
void entry_001aa098_0x1aa098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa098_0x1aa098");
#endif

    ctx->pc = 0x1aa098u;

    // 0x1aa098: 0x521ffe9  bgez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1AA098u;
    {
        const bool branch_taken_0x1aa098 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1AA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA098u;
        // 0x1aa09c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa098) {
            ctx->pc = 0x1AA040u;
            return;
        }
    }
    ctx->pc = 0x1AA0A0u;
}

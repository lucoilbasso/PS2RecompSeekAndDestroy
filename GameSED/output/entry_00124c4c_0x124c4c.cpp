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

// Function: entry_00124c4c
// Address: 0x124c4c - 0x124c58
void entry_00124c4c_0x124c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c4c_0x124c4c");
#endif

    ctx->pc = 0x124c4cu;

    // 0x124c4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124C4Cu;
    {
        const bool branch_taken_0x124c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C4Cu;
        // 0x124c50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c4c) {
            ctx->pc = 0x124C74u;
            return;
        }
    }
    ctx->pc = 0x124C54u;
    // 0x124c54: 0x0  nop
    ctx->pc = 0x124c54u;
    // NOP
    ctx->pc = 0x124c58u;
}

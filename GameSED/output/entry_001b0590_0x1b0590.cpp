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

// Function: entry_001b0590
// Address: 0x1b0590 - 0x1b059c
void entry_001b0590_0x1b0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0590_0x1b0590");
#endif

    ctx->pc = 0x1b0590u;

    // 0x1b0590: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1b0590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b0594: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1B0594u;
    {
        const bool branch_taken_0x1b0594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0594u;
        // 0x1b0598: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0594) {
            ctx->pc = 0x1B0528u;
            return;
        }
    }
    ctx->pc = 0x1B059Cu;
}

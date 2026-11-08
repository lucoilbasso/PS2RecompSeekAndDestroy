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

// Function: entry_001917e0
// Address: 0x1917e0 - 0x1917e8
void entry_001917e0_0x1917e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917e0_0x1917e0");
#endif

    ctx->pc = 0x1917e0u;

    // 0x1917e0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1917E0u;
    {
        const bool branch_taken_0x1917e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917E0u;
        // 0x1917e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917e0) {
            ctx->pc = 0x1918C0u;
            return;
        }
    }
    ctx->pc = 0x1917E8u;
}

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

// Function: entry_001b0588
// Address: 0x1b0588 - 0x1b0590
void entry_001b0588_0x1b0588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0588_0x1b0588");
#endif

    ctx->pc = 0x1b0588u;

    // 0x1b0588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0588u;
    {
        const bool branch_taken_0x1b0588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0588u;
        // 0x1b058c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0588) {
            ctx->pc = 0x1B05A0u;
            return;
        }
    }
    ctx->pc = 0x1B0590u;
}

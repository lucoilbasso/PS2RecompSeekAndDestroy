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

// Function: entry_001c8df4
// Address: 0x1c8df4 - 0x1c8dfc
void entry_001c8df4_0x1c8df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8df4_0x1c8df4");
#endif

    ctx->pc = 0x1c8df4u;

    // 0x1c8df4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8DF4u;
    {
        const bool branch_taken_0x1c8df4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8df4) {
            ctx->pc = 0x1C8DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DF4u;
            // 0x1c8df8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DFCu;
            return;
        }
    }
    ctx->pc = 0x1C8DFCu;
}

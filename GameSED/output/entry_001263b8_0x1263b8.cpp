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

// Function: entry_001263b8
// Address: 0x1263b8 - 0x1263c0
void entry_001263b8_0x1263b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001263b8_0x1263b8");
#endif

    ctx->pc = 0x1263b8u;

    // 0x1263b8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1263B8u;
    {
        const bool branch_taken_0x1263b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263b8) {
            ctx->pc = 0x1263BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1263B8u;
            // 0x1263bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1263C0u;
            return;
        }
    }
    ctx->pc = 0x1263C0u;
}

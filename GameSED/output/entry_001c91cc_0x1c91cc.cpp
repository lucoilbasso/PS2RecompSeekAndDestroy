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

// Function: entry_001c91cc
// Address: 0x1c91cc - 0x1c91d4
void entry_001c91cc_0x1c91cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c91cc_0x1c91cc");
#endif

    ctx->pc = 0x1c91ccu;

    // 0x1c91cc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C91CCu;
    {
        const bool branch_taken_0x1c91cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91cc) {
            ctx->pc = 0x1C91D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C91CCu;
            // 0x1c91d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91D4u;
            return;
        }
    }
    ctx->pc = 0x1C91D4u;
}

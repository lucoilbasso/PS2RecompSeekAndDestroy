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

// Function: entry_001b8da4
// Address: 0x1b8da4 - 0x1b8dac
void entry_001b8da4_0x1b8da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8da4_0x1b8da4");
#endif

    ctx->pc = 0x1b8da4u;

    // 0x1b8da4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B8DA4u;
    {
        const bool branch_taken_0x1b8da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA4u;
        // 0x1b8da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8da4) {
            ctx->pc = 0x1B8E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B8DACu;
}

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

// Function: entry_001d15d8
// Address: 0x1d15d8 - 0x1d15e0
void entry_001d15d8_0x1d15d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d15d8_0x1d15d8");
#endif

    ctx->pc = 0x1d15d8u;

    // 0x1d15d8: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x1D15D8u;
    {
        const bool branch_taken_0x1d15d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15D8u;
        // 0x1d15dc: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15d8) {
            ctx->pc = 0x1D1460u;
            return;
        }
    }
    ctx->pc = 0x1D15E0u;
}

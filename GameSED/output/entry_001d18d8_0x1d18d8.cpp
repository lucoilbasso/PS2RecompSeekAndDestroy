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

// Function: entry_001d18d8
// Address: 0x1d18d8 - 0x1d18e0
void entry_001d18d8_0x1d18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d18d8_0x1d18d8");
#endif

    ctx->pc = 0x1d18d8u;

    // 0x1d18d8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D18D8u;
    {
        const bool branch_taken_0x1d18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18D8u;
        // 0x1d18dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18d8) {
            ctx->pc = 0x1D1A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D18E0u;
}

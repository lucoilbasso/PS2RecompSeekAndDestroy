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

// Function: entry_001d44b8
// Address: 0x1d44b8 - 0x1d44c0
void entry_001d44b8_0x1d44b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d44b8_0x1d44b8");
#endif

    ctx->pc = 0x1d44b8u;

    // 0x1d44b8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D44B8u;
    {
        const bool branch_taken_0x1d44b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44B8u;
        // 0x1d44bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44b8) {
            ctx->pc = 0x1D4450u;
            return;
        }
    }
    ctx->pc = 0x1D44C0u;
}

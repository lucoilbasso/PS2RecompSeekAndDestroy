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

// Function: entry_001ce5b0
// Address: 0x1ce5b0 - 0x1ce5b8
void entry_001ce5b0_0x1ce5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce5b0_0x1ce5b0");
#endif

    ctx->pc = 0x1ce5b0u;

    // 0x1ce5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE5B0u;
    {
        const bool branch_taken_0x1ce5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5B0u;
        // 0x1ce5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5b0) {
            ctx->pc = 0x1CE5BCu;
            return;
        }
    }
    ctx->pc = 0x1CE5B8u;
}

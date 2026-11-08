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

// Function: entry_001b37f0
// Address: 0x1b37f0 - 0x1b3800
void entry_001b37f0_0x1b37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b37f0_0x1b37f0");
#endif

    ctx->pc = 0x1b37f0u;

    // 0x1b37f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B37F0u;
    {
        const bool branch_taken_0x1b37f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37F0u;
        // 0x1b37f4: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37f0) {
            ctx->pc = 0x1B3800u;
            return;
        }
    }
    ctx->pc = 0x1B37F8u;
    // 0x1b37f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B37F8u;
    {
        const bool branch_taken_0x1b37f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b37f8) {
            ctx->pc = 0x1B3810u;
            return;
        }
    }
    ctx->pc = 0x1B3800u;
}

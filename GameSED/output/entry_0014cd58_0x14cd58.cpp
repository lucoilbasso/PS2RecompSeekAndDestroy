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

// Function: entry_0014cd58
// Address: 0x14cd58 - 0x14cd60
void entry_0014cd58_0x14cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd58_0x14cd58");
#endif

    ctx->pc = 0x14cd58u;

    // 0x14cd58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CD58u;
    {
        const bool branch_taken_0x14cd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD58u;
        // 0x14cd5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd58) {
            ctx->pc = 0x14CD6Cu;
            return;
        }
    }
    ctx->pc = 0x14CD60u;
}

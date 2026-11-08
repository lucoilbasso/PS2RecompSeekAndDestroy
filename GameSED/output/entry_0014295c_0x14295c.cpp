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

// Function: entry_0014295c
// Address: 0x14295c - 0x142964
void entry_0014295c_0x14295c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014295c_0x14295c");
#endif

    ctx->pc = 0x14295cu;

    // 0x14295c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14295Cu;
    {
        const bool branch_taken_0x14295c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14295Cu;
        // 0x142960: 0x34a51000  ori         $a1, $a1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14295c) {
            ctx->pc = 0x142980u;
            return;
        }
    }
    ctx->pc = 0x142964u;
}

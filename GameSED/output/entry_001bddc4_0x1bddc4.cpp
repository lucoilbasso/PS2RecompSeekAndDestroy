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

// Function: entry_001bddc4
// Address: 0x1bddc4 - 0x1bddcc
void entry_001bddc4_0x1bddc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bddc4_0x1bddc4");
#endif

    ctx->pc = 0x1bddc4u;

    // 0x1bddc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDDC4u;
    {
        const bool branch_taken_0x1bddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDC4u;
        // 0x1bddc8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddc4) {
            ctx->pc = 0x1BDDE4u;
            return;
        }
    }
    ctx->pc = 0x1BDDCCu;
}

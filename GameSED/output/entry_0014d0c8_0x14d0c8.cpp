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

// Function: entry_0014d0c8
// Address: 0x14d0c8 - 0x14d0d0
void entry_0014d0c8_0x14d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d0c8_0x14d0c8");
#endif

    ctx->pc = 0x14d0c8u;

    // 0x14d0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D0C8u;
    {
        const bool branch_taken_0x14d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0C8u;
        // 0x14d0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0c8) {
            ctx->pc = 0x14D0E0u;
            return;
        }
    }
    ctx->pc = 0x14D0D0u;
}

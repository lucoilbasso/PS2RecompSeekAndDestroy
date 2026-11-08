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

// Function: entry_00145b80
// Address: 0x145b80 - 0x145b88
void entry_00145b80_0x145b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b80_0x145b80");
#endif

    ctx->pc = 0x145b80u;

    // 0x145b80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145B80u;
    {
        const bool branch_taken_0x145b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B80u;
        // 0x145b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b80) {
            ctx->pc = 0x145B94u;
            return;
        }
    }
    ctx->pc = 0x145B88u;
}

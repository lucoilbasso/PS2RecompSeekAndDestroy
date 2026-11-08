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

// Function: entry_00102730
// Address: 0x102730 - 0x102738
void entry_00102730_0x102730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102730_0x102730");
#endif

    ctx->pc = 0x102730u;

    // 0x102730: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102730u;
    {
        const bool branch_taken_0x102730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102730u;
        // 0x102734: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102730) {
            ctx->pc = 0x102764u;
            return;
        }
    }
    ctx->pc = 0x102738u;
}

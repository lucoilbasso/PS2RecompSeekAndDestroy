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

// Function: entry_00111608
// Address: 0x111608 - 0x111610
void entry_00111608_0x111608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111608_0x111608");
#endif

    ctx->pc = 0x111608u;

    // 0x111608: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x111608u;
    {
        const bool branch_taken_0x111608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111608u;
        // 0x11160c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111608) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111610u;
}

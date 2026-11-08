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

// Function: entry_00147d24
// Address: 0x147d24 - 0x147d2c
void entry_00147d24_0x147d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d24_0x147d24");
#endif

    ctx->pc = 0x147d24u;

    // 0x147d24: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x147D24u;
    {
        const bool branch_taken_0x147d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x147d24) {
            ctx->pc = 0x147D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D24u;
            // 0x147d28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D2Cu;
            return;
        }
    }
    ctx->pc = 0x147D2Cu;
}

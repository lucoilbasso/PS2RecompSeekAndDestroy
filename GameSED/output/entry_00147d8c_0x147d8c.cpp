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

// Function: entry_00147d8c
// Address: 0x147d8c - 0x147d94
void entry_00147d8c_0x147d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d8c_0x147d8c");
#endif

    ctx->pc = 0x147d8cu;

    // 0x147d8c: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x147D8Cu;
    {
        const bool branch_taken_0x147d8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x147d8c) {
            ctx->pc = 0x147D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D8Cu;
            // 0x147d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D94u;
            return;
        }
    }
    ctx->pc = 0x147D94u;
}

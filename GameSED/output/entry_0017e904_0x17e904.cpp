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

// Function: entry_0017e904
// Address: 0x17e904 - 0x17e910
void entry_0017e904_0x17e904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e904_0x17e904");
#endif

    ctx->pc = 0x17e904u;

    // 0x17e904: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17E904u;
    {
        const bool branch_taken_0x17e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E904u;
        // 0x17e908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e904) {
            ctx->pc = 0x17E94Cu;
            return;
        }
    }
    ctx->pc = 0x17E90Cu;
    // 0x17e90c: 0x0  nop
    ctx->pc = 0x17e90cu;
    // NOP
    ctx->pc = 0x17e910u;
}

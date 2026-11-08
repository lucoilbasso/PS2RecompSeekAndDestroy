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

// Function: entry_0019f820
// Address: 0x19f820 - 0x19f828
void entry_0019f820_0x19f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f820_0x19f820");
#endif

    ctx->pc = 0x19f820u;

    // 0x19f820: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19F820u;
    {
        const bool branch_taken_0x19f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F820u;
        // 0x19f824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f820) {
            ctx->pc = 0x19F86Cu;
            return;
        }
    }
    ctx->pc = 0x19F828u;
}

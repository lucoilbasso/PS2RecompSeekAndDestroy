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

// Function: entry_0019ef80
// Address: 0x19ef80 - 0x19ef88
void entry_0019ef80_0x19ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef80_0x19ef80");
#endif

    ctx->pc = 0x19ef80u;

    // 0x19ef80: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19EF80u;
    {
        const bool branch_taken_0x19ef80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef80) {
            ctx->pc = 0x19EF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EF80u;
            // 0x19ef84: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EFA0u;
            return;
        }
    }
    ctx->pc = 0x19EF88u;
}

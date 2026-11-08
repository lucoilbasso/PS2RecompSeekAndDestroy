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

// Function: entry_0012c1ac
// Address: 0x12c1ac - 0x12c1b4
void entry_0012c1ac_0x12c1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c1ac_0x12c1ac");
#endif

    ctx->pc = 0x12c1acu;

    // 0x12c1ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C1ACu;
    {
        const bool branch_taken_0x12c1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1ACu;
        // 0x12c1b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1ac) {
            ctx->pc = 0x12C1BCu;
            return;
        }
    }
    ctx->pc = 0x12C1B4u;
}

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

// Function: entry_001755c8
// Address: 0x1755c8 - 0x1755d4
void entry_001755c8_0x1755c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755c8_0x1755c8");
#endif

    ctx->pc = 0x1755c8u;

    // 0x1755c8: 0x2010  mfhi        $a0
    ctx->pc = 0x1755c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1755cc: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1755CCu;
    {
        const bool branch_taken_0x1755cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1755D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755CCu;
        // 0x1755d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755cc) {
            ctx->pc = 0x175580u;
            return;
        }
    }
    ctx->pc = 0x1755D4u;
}

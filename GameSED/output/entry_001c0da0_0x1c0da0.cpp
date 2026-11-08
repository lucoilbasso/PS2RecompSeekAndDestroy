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

// Function: entry_001c0da0
// Address: 0x1c0da0 - 0x1c0dac
void entry_001c0da0_0x1c0da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0da0_0x1c0da0");
#endif

    ctx->pc = 0x1c0da0u;

    // 0x1c0da0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1C0DA0u;
    {
        const bool branch_taken_0x1c0da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DA0u;
        // 0x1c0da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0da0) {
            ctx->pc = 0x1C0D10u;
            return;
        }
    }
    ctx->pc = 0x1C0DA8u;
    // 0x1c0da8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c0da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c0dacu;
}

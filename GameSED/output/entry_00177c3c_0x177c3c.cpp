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

// Function: entry_00177c3c
// Address: 0x177c3c - 0x177c44
void entry_00177c3c_0x177c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c3c_0x177c3c");
#endif

    ctx->pc = 0x177c3cu;

    // 0x177c3c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x177C3Cu;
    {
        const bool branch_taken_0x177c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C3Cu;
        // 0x177c40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c3c) {
            ctx->pc = 0x177BE0u;
            return;
        }
    }
    ctx->pc = 0x177C44u;
}

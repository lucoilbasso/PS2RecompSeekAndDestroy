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

// Function: entry_0012430c
// Address: 0x12430c - 0x124318
void entry_0012430c_0x12430c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012430c_0x12430c");
#endif

    ctx->pc = 0x12430cu;

    // 0x12430c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12430Cu;
    {
        const bool branch_taken_0x12430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12430Cu;
        // 0x124310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12430c) {
            ctx->pc = 0x12433Cu;
            return;
        }
    }
    ctx->pc = 0x124314u;
    // 0x124314: 0x0  nop
    ctx->pc = 0x124314u;
    // NOP
    ctx->pc = 0x124318u;
}

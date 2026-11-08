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

// Function: entry_001928f8
// Address: 0x1928f8 - 0x192900
void entry_001928f8_0x1928f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001928f8_0x1928f8");
#endif

    ctx->pc = 0x1928f8u;

    // 0x1928f8: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1928F8u;
    {
        const bool branch_taken_0x1928f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928F8u;
        // 0x1928fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928f8) {
            ctx->pc = 0x19291Cu;
            return;
        }
    }
    ctx->pc = 0x192900u;
}

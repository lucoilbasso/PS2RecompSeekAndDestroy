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

// Function: entry_001a1514
// Address: 0x1a1514 - 0x1a1520
void entry_001a1514_0x1a1514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1514_0x1a1514");
#endif

    ctx->pc = 0x1a1514u;

    // 0x1a1514: 0x2c84004c  sltiu       $a0, $a0, 0x4C
    ctx->pc = 0x1a1514u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x1a1518: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1518u;
    {
        const bool branch_taken_0x1a1518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1518) {
            ctx->pc = 0x1A151Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1518u;
            // 0x1a151c: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1538u;
            return;
        }
    }
    ctx->pc = 0x1A1520u;
}

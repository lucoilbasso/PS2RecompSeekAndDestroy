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

// Function: entry_001d5544
// Address: 0x1d5544 - 0x1d5558
void entry_001d5544_0x1d5544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5544_0x1d5544");
#endif

    ctx->pc = 0x1d5544u;

    // 0x1d5544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5548: 0x1812  mflo        $v1
    ctx->pc = 0x1d5548u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d554c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1d554cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d5550: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5550u;
    {
        const bool branch_taken_0x1d5550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5550u;
        // 0x1d5554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5550) {
            ctx->pc = 0x1D5574u;
            return;
        }
    }
    ctx->pc = 0x1D5558u;
}

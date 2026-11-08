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

// Function: entry_001d5cd0
// Address: 0x1d5cd0 - 0x1d5ce8
void entry_001d5cd0_0x1d5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5cd0_0x1d5cd0");
#endif

    ctx->pc = 0x1d5cd0u;

    // 0x1d5cd0: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5CD0u;
    {
        const bool branch_taken_0x1d5cd0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5cd0) {
            ctx->pc = 0x1D5CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5CD0u;
            // 0x1d5cd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5CE8u;
            return;
        }
    }
    ctx->pc = 0x1D5CD8u;
    // 0x1d5cd8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1d5cd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cdc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1d5cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ce0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d5ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ce4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1d5ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d5ce8u;
}

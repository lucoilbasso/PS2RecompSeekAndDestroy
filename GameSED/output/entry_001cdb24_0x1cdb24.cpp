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

// Function: entry_001cdb24
// Address: 0x1cdb24 - 0x1cdb30
void entry_001cdb24_0x1cdb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb24_0x1cdb24");
#endif

    ctx->pc = 0x1cdb24u;

    // 0x1cdb24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDB24u;
    {
        const bool branch_taken_0x1cdb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB24u;
        // 0x1cdb28: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb24) {
            ctx->pc = 0x1CDB48u;
            return;
        }
    }
    ctx->pc = 0x1CDB2Cu;
    // 0x1cdb2c: 0x0  nop
    ctx->pc = 0x1cdb2cu;
    // NOP
    ctx->pc = 0x1cdb30u;
}

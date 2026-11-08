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

// Function: entry_001cac00
// Address: 0x1cac00 - 0x1cac10
void entry_001cac00_0x1cac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac00_0x1cac00");
#endif

    ctx->pc = 0x1cac00u;

    // 0x1cac00: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1cac00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cac04: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAC04u;
    {
        const bool branch_taken_0x1cac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC04u;
        // 0x1cac08: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac04) {
            ctx->pc = 0x1CACACu;
            return;
        }
    }
    ctx->pc = 0x1CAC0Cu;
    // 0x1cac0c: 0x0  nop
    ctx->pc = 0x1cac0cu;
    // NOP
    ctx->pc = 0x1cac10u;
}

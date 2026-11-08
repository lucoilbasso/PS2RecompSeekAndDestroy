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

// Function: entry_001caa10
// Address: 0x1caa10 - 0x1caa20
void entry_001caa10_0x1caa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa10_0x1caa10");
#endif

    ctx->pc = 0x1caa10u;

    // 0x1caa10: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1caa14: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAA14u;
    {
        const bool branch_taken_0x1caa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA14u;
        // 0x1caa18: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa14) {
            ctx->pc = 0x1CAABCu;
            return;
        }
    }
    ctx->pc = 0x1CAA1Cu;
    // 0x1caa1c: 0x0  nop
    ctx->pc = 0x1caa1cu;
    // NOP
    ctx->pc = 0x1caa20u;
}

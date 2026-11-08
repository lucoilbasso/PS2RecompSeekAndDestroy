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

// Function: caseD_1
// Address: 0x115cb8 - 0x115cc0
void caseD_1_0x115cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x115cb8");
#endif

    ctx->pc = 0x115cb8u;

    // 0x115cb8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115CB8u;
    {
        const bool branch_taken_0x115cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CB8u;
        // 0x115cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cb8) {
            ctx->pc = 0x115D0Cu;
            return;
        }
    }
    ctx->pc = 0x115CC0u;
}

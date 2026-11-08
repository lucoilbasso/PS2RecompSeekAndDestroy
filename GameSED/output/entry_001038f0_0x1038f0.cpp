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

// Function: entry_001038f0
// Address: 0x1038f0 - 0x1038fc
void entry_001038f0_0x1038f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001038f0_0x1038f0");
#endif

    ctx->pc = 0x1038f0u;

    // 0x1038f0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1038F0u;
    {
        const bool branch_taken_0x1038f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038F0u;
        // 0x1038f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038f0) {
            ctx->pc = 0x1038FCu;
            return;
        }
    }
    ctx->pc = 0x1038F8u;
    // 0x1038f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1038f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1038fcu;
}

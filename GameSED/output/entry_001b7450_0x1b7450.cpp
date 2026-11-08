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

// Function: entry_001b7450
// Address: 0x1b7450 - 0x1b7460
void entry_001b7450_0x1b7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7450_0x1b7450");
#endif

    ctx->pc = 0x1b7450u;

    // 0x1b7450: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7450u;
    {
        const bool branch_taken_0x1b7450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7450u;
        // 0x1b7454: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7450) {
            ctx->pc = 0x1B7480u;
            return;
        }
    }
    ctx->pc = 0x1B7458u;
    // 0x1b7458: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B7458u;
    {
        const bool branch_taken_0x1b7458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7458) {
            ctx->pc = 0x1B7490u;
            return;
        }
    }
    ctx->pc = 0x1B7460u;
}

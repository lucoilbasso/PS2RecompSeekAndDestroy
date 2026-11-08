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

// Function: entry_001c2980
// Address: 0x1c2980 - 0x1c2988
void entry_001c2980_0x1c2980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2980_0x1c2980");
#endif

    ctx->pc = 0x1c2980u;

    // 0x1c2980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2980u;
    {
        const bool branch_taken_0x1c2980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2980u;
        // 0x1c2984: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2980) {
            ctx->pc = 0x1C2990u;
            return;
        }
    }
    ctx->pc = 0x1C2988u;
}

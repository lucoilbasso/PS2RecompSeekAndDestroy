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

// Function: entry_001c2b2c
// Address: 0x1c2b2c - 0x1c2b34
void entry_001c2b2c_0x1c2b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b2c_0x1c2b2c");
#endif

    ctx->pc = 0x1c2b2cu;

    // 0x1c2b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2B2Cu;
    {
        const bool branch_taken_0x1c2b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B2Cu;
        // 0x1c2b30: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b2c) {
            ctx->pc = 0x1C2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1C2B34u;
}

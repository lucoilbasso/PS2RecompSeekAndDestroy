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

// Function: entry_001d4320
// Address: 0x1d4320 - 0x1d4328
void entry_001d4320_0x1d4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4320_0x1d4320");
#endif

    ctx->pc = 0x1d4320u;

    // 0x1d4320: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D4320u;
    {
        const bool branch_taken_0x1d4320 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1D4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4320u;
        // 0x1d4324: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4320) {
            ctx->pc = 0x1D4300u;
            return;
        }
    }
    ctx->pc = 0x1D4328u;
}

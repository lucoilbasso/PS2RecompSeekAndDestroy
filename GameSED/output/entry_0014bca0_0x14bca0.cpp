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

// Function: entry_0014bca0
// Address: 0x14bca0 - 0x14bca8
void entry_0014bca0_0x14bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bca0_0x14bca0");
#endif

    ctx->pc = 0x14bca0u;

    // 0x14bca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14BCA0u;
    {
        const bool branch_taken_0x14bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCA0u;
        // 0x14bca4: 0x8e420188  lw          $v0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bca0) {
            ctx->pc = 0x14BCACu;
            return;
        }
    }
    ctx->pc = 0x14BCA8u;
}

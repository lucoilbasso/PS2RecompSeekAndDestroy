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

// Function: entry_00146070
// Address: 0x146070 - 0x146078
void entry_00146070_0x146070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146070_0x146070");
#endif

    ctx->pc = 0x146070u;

    // 0x146070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146070u;
    {
        const bool branch_taken_0x146070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146070u;
        // 0x146074: 0x8c900034  lw          $s0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146070) {
            ctx->pc = 0x146084u;
            return;
        }
    }
    ctx->pc = 0x146078u;
}

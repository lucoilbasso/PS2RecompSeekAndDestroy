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

// Function: entry_001508c8
// Address: 0x1508c8 - 0x1508e0
void entry_001508c8_0x1508c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001508c8_0x1508c8");
#endif

    ctx->pc = 0x1508c8u;

    // 0x1508c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1508C8u;
    {
        const bool branch_taken_0x1508c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1508c8) {
            ctx->pc = 0x1508E0u;
            return;
        }
    }
    ctx->pc = 0x1508D0u;
    // 0x1508d0: 0x526b0006  beql        $s3, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1508D0u;
    {
        const bool branch_taken_0x1508d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 11));
        if (branch_taken_0x1508d0) {
            ctx->pc = 0x1508D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1508D0u;
            // 0x1508d4: 0x8e4303b0  lw          $v1, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1508ECu;
            return;
        }
    }
    ctx->pc = 0x1508D8u;
    // 0x1508d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1508D8u;
    {
        const bool branch_taken_0x1508d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508d8) {
            ctx->pc = 0x150910u;
            return;
        }
    }
    ctx->pc = 0x1508E0u;
}

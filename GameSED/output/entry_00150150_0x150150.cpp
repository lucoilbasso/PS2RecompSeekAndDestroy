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

// Function: entry_00150150
// Address: 0x150150 - 0x150160
void entry_00150150_0x150150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150150_0x150150");
#endif

    ctx->pc = 0x150150u;

    // 0x150150: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150150u;
    {
        const bool branch_taken_0x150150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150150) {
            ctx->pc = 0x150154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150150u;
            // 0x150154: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1501B0u;
            return;
        }
    }
    ctx->pc = 0x150158u;
    // 0x150158: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x150158u;
    {
        const bool branch_taken_0x150158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150158) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x150160u;
}

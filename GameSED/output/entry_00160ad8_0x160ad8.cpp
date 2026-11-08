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

// Function: entry_00160ad8
// Address: 0x160ad8 - 0x160ae4
void entry_00160ad8_0x160ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ad8_0x160ad8");
#endif

    ctx->pc = 0x160ad8u;

    // 0x160ad8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160AD8u;
    {
        const bool branch_taken_0x160ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ad8) {
            ctx->pc = 0x160ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160AD8u;
            // 0x160adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160AF0u;
            return;
        }
    }
    ctx->pc = 0x160AE0u;
    // 0x160ae0: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x160ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    ctx->pc = 0x160ae4u;
}

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

// Function: entry_0017c870
// Address: 0x17c870 - 0x17c87c
void entry_0017c870_0x17c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c870_0x17c870");
#endif

    ctx->pc = 0x17c870u;

    // 0x17c870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c874: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x17C874u;
    {
        const bool branch_taken_0x17c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17c874) {
            ctx->pc = 0x17C878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C874u;
            // 0x17c878: 0x8c710004  lw          $s1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C87Cu;
            return;
        }
    }
    ctx->pc = 0x17C87Cu;
}

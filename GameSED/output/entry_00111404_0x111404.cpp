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

// Function: entry_00111404
// Address: 0x111404 - 0x11140c
void entry_00111404_0x111404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111404_0x111404");
#endif

    ctx->pc = 0x111404u;

    // 0x111404: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111404u;
    {
        const bool branch_taken_0x111404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x111404) {
            ctx->pc = 0x111408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111404u;
            // 0x111408: 0x8e700024  lw          $s0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11140Cu;
            return;
        }
    }
    ctx->pc = 0x11140Cu;
}

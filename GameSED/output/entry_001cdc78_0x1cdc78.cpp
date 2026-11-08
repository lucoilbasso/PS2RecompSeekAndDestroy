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

// Function: entry_001cdc78
// Address: 0x1cdc78 - 0x1cdc80
void entry_001cdc78_0x1cdc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc78_0x1cdc78");
#endif

    ctx->pc = 0x1cdc78u;

    // 0x1cdc78: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDC78u;
    {
        const bool branch_taken_0x1cdc78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc78) {
            ctx->pc = 0x1CDC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC78u;
            // 0x1cdc7c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC80u;
            return;
        }
    }
    ctx->pc = 0x1CDC80u;
}

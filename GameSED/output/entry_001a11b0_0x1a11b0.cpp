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

// Function: entry_001a11b0
// Address: 0x1a11b0 - 0x1a11bc
void entry_001a11b0_0x1a11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a11b0_0x1a11b0");
#endif

    ctx->pc = 0x1a11b0u;

    // 0x1a11b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11b4: 0x5460ffd4  bnel        $v1, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1A11B4u;
    {
        const bool branch_taken_0x1a11b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a11b4) {
            ctx->pc = 0x1A11B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A11B4u;
            // 0x1a11b8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1108u;
            return;
        }
    }
    ctx->pc = 0x1A11BCu;
}

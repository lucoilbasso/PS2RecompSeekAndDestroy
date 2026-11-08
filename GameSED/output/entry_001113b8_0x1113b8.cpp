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

// Function: entry_001113b8
// Address: 0x1113b8 - 0x1113c0
void entry_001113b8_0x1113b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113b8_0x1113b8");
#endif

    ctx->pc = 0x1113b8u;

    // 0x1113b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1113B8u;
    {
        const bool branch_taken_0x1113b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113b8) {
            ctx->pc = 0x1113BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1113B8u;
            // 0x1113bc: 0x8e700024  lw          $s0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113C0u;
            return;
        }
    }
    ctx->pc = 0x1113C0u;
}

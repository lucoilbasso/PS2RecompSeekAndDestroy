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

// Function: entry_001b1cc8
// Address: 0x1b1cc8 - 0x1b1ce0
void entry_001b1cc8_0x1b1cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1cc8_0x1b1cc8");
#endif

    ctx->pc = 0x1b1cc8u;

    // 0x1b1cc8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1CC8u;
    {
        const bool branch_taken_0x1b1cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1cc8) {
            ctx->pc = 0x1B1D00u;
            return;
        }
    }
    ctx->pc = 0x1B1CD0u;
    // 0x1b1cd0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b1cd4: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1CD4u;
    {
        const bool branch_taken_0x1b1cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1b1cd4) {
            ctx->pc = 0x1B1CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1CD4u;
            // 0x1b1cd8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1CFCu;
            return;
        }
    }
    ctx->pc = 0x1B1CDCu;
    // 0x1b1cdc: 0x0  nop
    ctx->pc = 0x1b1cdcu;
    // NOP
    ctx->pc = 0x1b1ce0u;
}

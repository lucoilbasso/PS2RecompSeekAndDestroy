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

// Function: entry_001cca28
// Address: 0x1cca28 - 0x1cca30
void entry_001cca28_0x1cca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca28_0x1cca28");
#endif

    ctx->pc = 0x1cca28u;

    // 0x1cca28: 0x5617ffdb  bnel        $s0, $s7, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CCA28u;
    {
        const bool branch_taken_0x1cca28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x1cca28) {
            ctx->pc = 0x1CCA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCA28u;
            // 0x1cca2c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC998u;
            return;
        }
    }
    ctx->pc = 0x1CCA30u;
}

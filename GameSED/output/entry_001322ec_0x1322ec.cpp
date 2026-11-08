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

// Function: entry_001322ec
// Address: 0x1322ec - 0x1322f8
void entry_001322ec_0x1322ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001322ec_0x1322ec");
#endif

    ctx->pc = 0x1322ecu;

    // 0x1322ec: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x1322ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1322f0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1322F0u;
    {
        const bool branch_taken_0x1322f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1322F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322F0u;
        // 0x1322f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322f0) {
            ctx->pc = 0x1322E0u;
            return;
        }
    }
    ctx->pc = 0x1322F8u;
}

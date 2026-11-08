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

// Function: entry_001555e0
// Address: 0x1555e0 - 0x1555e8
void entry_001555e0_0x1555e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001555e0_0x1555e0");
#endif

    ctx->pc = 0x1555e0u;

    // 0x1555e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1555E0u;
    {
        const bool branch_taken_0x1555e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555E0u;
        // 0x1555e4: 0xae4208a0  sw          $v0, 0x8A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555e0) {
            ctx->pc = 0x155690u;
            return;
        }
    }
    ctx->pc = 0x1555E8u;
}

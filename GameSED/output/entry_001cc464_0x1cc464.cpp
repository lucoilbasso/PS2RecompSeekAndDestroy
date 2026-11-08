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

// Function: entry_001cc464
// Address: 0x1cc464 - 0x1cc470
void entry_001cc464_0x1cc464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc464_0x1cc464");
#endif

    ctx->pc = 0x1cc464u;

    // 0x1cc464: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CC464u;
    {
        const bool branch_taken_0x1cc464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC464u;
        // 0x1cc468: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc464) {
            ctx->pc = 0x1CC490u;
            return;
        }
    }
    ctx->pc = 0x1CC46Cu;
    // 0x1cc46c: 0x0  nop
    ctx->pc = 0x1cc46cu;
    // NOP
    ctx->pc = 0x1cc470u;
}

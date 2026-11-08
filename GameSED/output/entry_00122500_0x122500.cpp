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

// Function: entry_00122500
// Address: 0x122500 - 0x122508
void entry_00122500_0x122500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122500_0x122500");
#endif

    ctx->pc = 0x122500u;

    // 0x122500: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x122500u;
    {
        const bool branch_taken_0x122500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122500u;
        // 0x122504: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122500) {
            ctx->pc = 0x12252Cu;
            return;
        }
    }
    ctx->pc = 0x122508u;
}

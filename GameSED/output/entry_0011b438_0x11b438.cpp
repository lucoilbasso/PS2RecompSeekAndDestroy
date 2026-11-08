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

// Function: entry_0011b438
// Address: 0x11b438 - 0x11b440
void entry_0011b438_0x11b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b438_0x11b438");
#endif

    ctx->pc = 0x11b438u;

    // 0x11b438: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11B438u;
    {
        const bool branch_taken_0x11b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B438u;
        // 0x11b43c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b438) {
            ctx->pc = 0x11B410u;
            return;
        }
    }
    ctx->pc = 0x11B440u;
}

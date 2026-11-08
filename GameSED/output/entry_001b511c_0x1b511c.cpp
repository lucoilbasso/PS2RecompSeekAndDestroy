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

// Function: entry_001b511c
// Address: 0x1b511c - 0x1b5124
void entry_001b511c_0x1b511c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b511c_0x1b511c");
#endif

    ctx->pc = 0x1b511cu;

    // 0x1b511c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B511Cu;
    {
        const bool branch_taken_0x1b511c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b511c) {
            ctx->pc = 0x1B5120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B511Cu;
            // 0x1b5120: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5124u;
            return;
        }
    }
    ctx->pc = 0x1B5124u;
}

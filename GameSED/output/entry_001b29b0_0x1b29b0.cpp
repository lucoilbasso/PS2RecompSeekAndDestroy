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

// Function: entry_001b29b0
// Address: 0x1b29b0 - 0x1b29b8
void entry_001b29b0_0x1b29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b29b0_0x1b29b0");
#endif

    ctx->pc = 0x1b29b0u;

    // 0x1b29b0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B29B0u;
    {
        const bool branch_taken_0x1b29b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b29b0) {
            ctx->pc = 0x1B29B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B29B0u;
            // 0x1b29b4: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B29B8u;
            return;
        }
    }
    ctx->pc = 0x1B29B8u;
}

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

// Function: entry_001b4ab4
// Address: 0x1b4ab4 - 0x1b4abc
void entry_001b4ab4_0x1b4ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4ab4_0x1b4ab4");
#endif

    ctx->pc = 0x1b4ab4u;

    // 0x1b4ab4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4AB4u;
    {
        const bool branch_taken_0x1b4ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4ab4) {
            ctx->pc = 0x1B4AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4AB4u;
            // 0x1b4ab8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4ABCu;
            return;
        }
    }
    ctx->pc = 0x1B4ABCu;
}

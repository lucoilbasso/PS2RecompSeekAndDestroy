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

// Function: entry_0010ce40
// Address: 0x10ce40 - 0x10ce48
void entry_0010ce40_0x10ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ce40_0x10ce40");
#endif

    ctx->pc = 0x10ce40u;

    // 0x10ce40: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10CE40u;
    {
        const bool branch_taken_0x10ce40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10ce40) {
            ctx->pc = 0x10CE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CE40u;
            // 0x10ce44: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE48u;
            return;
        }
    }
    ctx->pc = 0x10CE48u;
}

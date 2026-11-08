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

// Function: entry_00131590
// Address: 0x131590 - 0x131598
void entry_00131590_0x131590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131590_0x131590");
#endif

    ctx->pc = 0x131590u;

    // 0x131590: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x131590u;
    {
        const bool branch_taken_0x131590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x131590) {
            ctx->pc = 0x131594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131590u;
            // 0x131594: 0xa4670118  sh          $a3, 0x118($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131598u;
            return;
        }
    }
    ctx->pc = 0x131598u;
}

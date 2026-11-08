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

// Function: entry_001b48a4
// Address: 0x1b48a4 - 0x1b48ac
void entry_001b48a4_0x1b48a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48a4_0x1b48a4");
#endif

    ctx->pc = 0x1b48a4u;

    // 0x1b48a4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B48A4u;
    {
        const bool branch_taken_0x1b48a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b48a4) {
            ctx->pc = 0x1B48A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B48A4u;
            // 0x1b48a8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B48ACu;
            return;
        }
    }
    ctx->pc = 0x1B48ACu;
}

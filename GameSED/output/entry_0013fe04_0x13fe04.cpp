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

// Function: entry_0013fe04
// Address: 0x13fe04 - 0x13fe0c
void entry_0013fe04_0x13fe04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fe04_0x13fe04");
#endif

    ctx->pc = 0x13fe04u;

    // 0x13fe04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FE04u;
    {
        const bool branch_taken_0x13fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fe04) {
            ctx->pc = 0x13FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FE04u;
            // 0x13fe08: 0xac400148  sw          $zero, 0x148($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FE0Cu;
            return;
        }
    }
    ctx->pc = 0x13FE0Cu;
}

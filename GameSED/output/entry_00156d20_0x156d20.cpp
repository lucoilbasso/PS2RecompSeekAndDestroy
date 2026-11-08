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

// Function: entry_00156d20
// Address: 0x156d20 - 0x156d28
void entry_00156d20_0x156d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d20_0x156d20");
#endif

    ctx->pc = 0x156d20u;

    // 0x156d20: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x156D20u;
    {
        const bool branch_taken_0x156d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D20u;
        // 0x156d24: 0xa0400003  sb          $zero, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d20) {
            ctx->pc = 0x156C74u;
            return;
        }
    }
    ctx->pc = 0x156D28u;
}

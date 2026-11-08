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

// Function: entry_00117d54
// Address: 0x117d54 - 0x117d5c
void entry_00117d54_0x117d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d54_0x117d54");
#endif

    ctx->pc = 0x117d54u;

    // 0x117d54: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x117D54u;
    {
        const bool branch_taken_0x117d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x117D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D54u;
        // 0x117d58: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d54) {
            ctx->pc = 0x117D30u;
            return;
        }
    }
    ctx->pc = 0x117D5Cu;
}

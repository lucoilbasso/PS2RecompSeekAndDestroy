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

// Function: entry_0013248c
// Address: 0x13248c - 0x132494
void entry_0013248c_0x13248c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013248c_0x13248c");
#endif

    ctx->pc = 0x13248cu;

    // 0x13248c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13248Cu;
    {
        const bool branch_taken_0x13248c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x132490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13248Cu;
        // 0x132490: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13248c) {
            ctx->pc = 0x132468u;
            return;
        }
    }
    ctx->pc = 0x132494u;
}

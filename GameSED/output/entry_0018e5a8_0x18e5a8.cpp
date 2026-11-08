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

// Function: entry_0018e5a8
// Address: 0x18e5a8 - 0x18e5b0
void entry_0018e5a8_0x18e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e5a8_0x18e5a8");
#endif

    ctx->pc = 0x18e5a8u;

    // 0x18e5a8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18E5A8u;
    {
        const bool branch_taken_0x18e5a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5A8u;
        // 0x18e5ac: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5a8) {
            ctx->pc = 0x18E560u;
            return;
        }
    }
    ctx->pc = 0x18E5B0u;
}

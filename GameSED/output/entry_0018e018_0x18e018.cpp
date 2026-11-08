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

// Function: entry_0018e018
// Address: 0x18e018 - 0x18e020
void entry_0018e018_0x18e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e018_0x18e018");
#endif

    ctx->pc = 0x18e018u;

    // 0x18e018: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18E018u;
    {
        const bool branch_taken_0x18e018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E018u;
        // 0x18e01c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e018) {
            ctx->pc = 0x18DFD0u;
            return;
        }
    }
    ctx->pc = 0x18E020u;
}

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

// Function: entry_0018e634
// Address: 0x18e634 - 0x18e63c
void entry_0018e634_0x18e634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e634_0x18e634");
#endif

    ctx->pc = 0x18e634u;

    // 0x18e634: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E634u;
    {
        const bool branch_taken_0x18e634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E634u;
        // 0x18e638: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e634) {
            ctx->pc = 0x18E5E8u;
            return;
        }
    }
    ctx->pc = 0x18E63Cu;
}

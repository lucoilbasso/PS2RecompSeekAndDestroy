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

// Function: entry_0018df78
// Address: 0x18df78 - 0x18df8c
void entry_0018df78_0x18df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018df78_0x18df78");
#endif

    ctx->pc = 0x18df78u;

    // 0x18df78: 0x0  nop
    ctx->pc = 0x18df78u;
    // NOP
    // 0x18df7c: 0x0  nop
    ctx->pc = 0x18df7cu;
    // NOP
    // 0x18df80: 0x0  nop
    ctx->pc = 0x18df80u;
    // NOP
    // 0x18df84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DF84u;
    {
        const bool branch_taken_0x18df84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF84u;
        // 0x18df88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df84) {
            ctx->pc = 0x18DF70u;
            return;
        }
    }
    ctx->pc = 0x18DF8Cu;
}

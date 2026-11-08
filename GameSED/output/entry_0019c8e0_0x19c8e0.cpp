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

// Function: entry_0019c8e0
// Address: 0x19c8e0 - 0x19c8ec
void entry_0019c8e0_0x19c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8e0_0x19c8e0");
#endif

    ctx->pc = 0x19c8e0u;

    // 0x19c8e0: 0x0  nop
    ctx->pc = 0x19c8e0u;
    // NOP
    // 0x19c8e4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C8E4u;
    {
        const bool branch_taken_0x19c8e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8E4u;
        // 0x19c8e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8e4) {
            ctx->pc = 0x19C8D0u;
            return;
        }
    }
    ctx->pc = 0x19C8ECu;
}

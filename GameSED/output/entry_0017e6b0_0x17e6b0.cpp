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

// Function: entry_0017e6b0
// Address: 0x17e6b0 - 0x17e6b8
void entry_0017e6b0_0x17e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6b0_0x17e6b0");
#endif

    ctx->pc = 0x17e6b0u;

    // 0x17e6b0: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17E6B0u;
    {
        const bool branch_taken_0x17e6b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6B0u;
        // 0x17e6b4: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6b0) {
            ctx->pc = 0x17E648u;
            return;
        }
    }
    ctx->pc = 0x17E6B8u;
}

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

// Function: entry_0019c998
// Address: 0x19c998 - 0x19c9a4
void entry_0019c998_0x19c998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c998_0x19c998");
#endif

    ctx->pc = 0x19c998u;

    // 0x19c998: 0x0  nop
    ctx->pc = 0x19c998u;
    // NOP
    // 0x19c99c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C99Cu;
    {
        const bool branch_taken_0x19c99c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C99Cu;
        // 0x19c9a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c99c) {
            ctx->pc = 0x19C988u;
            return;
        }
    }
    ctx->pc = 0x19C9A4u;
}

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

// Function: entry_00117b98
// Address: 0x117b98 - 0x117ba0
void entry_00117b98_0x117b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b98_0x117b98");
#endif

    ctx->pc = 0x117b98u;

    // 0x117b98: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x117B98u;
    {
        const bool branch_taken_0x117b98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B98u;
        // 0x117b9c: 0x2522fffe  addiu       $v0, $t1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b98) {
            ctx->pc = 0x117B18u;
            return;
        }
    }
    ctx->pc = 0x117BA0u;
}

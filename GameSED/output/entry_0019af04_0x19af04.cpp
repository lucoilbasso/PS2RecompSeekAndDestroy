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

// Function: entry_0019af04
// Address: 0x19af04 - 0x19af1c
void entry_0019af04_0x19af04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af04_0x19af04");
#endif

    ctx->pc = 0x19af04u;

    // 0x19af04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19af08: 0x0  nop
    ctx->pc = 0x19af08u;
    // NOP
    // 0x19af0c: 0x0  nop
    ctx->pc = 0x19af0cu;
    // NOP
    // 0x19af10: 0x0  nop
    ctx->pc = 0x19af10u;
    // NOP
    // 0x19af14: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AF14u;
    {
        const bool branch_taken_0x19af14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF14u;
        // 0x19af18: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af14) {
            ctx->pc = 0x19AEF0u;
            return;
        }
    }
    ctx->pc = 0x19AF1Cu;
}

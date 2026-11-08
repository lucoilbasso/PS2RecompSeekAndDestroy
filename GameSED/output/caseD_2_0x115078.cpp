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

// Function: caseD_2
// Address: 0x115078 - 0x115080
void caseD_2_0x115078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x115078");
#endif

    ctx->pc = 0x115078u;

    // 0x115078: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115078u;
    {
        const bool branch_taken_0x115078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115078u;
        // 0x11507c: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115078) {
            ctx->pc = 0x1150C4u;
            return;
        }
    }
    ctx->pc = 0x115080u;
}

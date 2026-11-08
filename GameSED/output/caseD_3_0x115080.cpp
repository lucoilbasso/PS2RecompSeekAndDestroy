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

// Function: caseD_3
// Address: 0x115080 - 0x115088
void caseD_3_0x115080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x115080");
#endif

    ctx->pc = 0x115080u;

    // 0x115080: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115080u;
    {
        const bool branch_taken_0x115080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115080u;
        // 0x115084: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115080) {
            ctx->pc = 0x1150C4u;
            return;
        }
    }
    ctx->pc = 0x115088u;
}

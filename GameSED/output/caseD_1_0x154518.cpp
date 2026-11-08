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

// Function: caseD_1
// Address: 0x154518 - 0x154520
void caseD_1_0x154518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x154518");
#endif

    ctx->pc = 0x154518u;

    // 0x154518: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x154518u;
    {
        const bool branch_taken_0x154518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154518u;
        // 0x15451c: 0x26120268  addiu       $s2, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154518) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154520u;
}

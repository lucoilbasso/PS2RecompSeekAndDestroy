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

// Function: caseD_f
// Address: 0x154620 - 0x154628
void caseD_f_0x154620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x154620");
#endif

    ctx->pc = 0x154620u;

    // 0x154620: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x154620u;
    {
        const bool branch_taken_0x154620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154620u;
        // 0x154624: 0x26120358  addiu       $s2, $s0, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154620) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154628u;
}

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

// Function: caseD_5
// Address: 0x136080 - 0x136088
void caseD_5_0x136080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x136080");
#endif

    ctx->pc = 0x136080u;

    // 0x136080: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x136080u;
    {
        const bool branch_taken_0x136080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136080u;
        // 0x136084: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136080) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136088u;
}

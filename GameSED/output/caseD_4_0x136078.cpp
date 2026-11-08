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

// Function: caseD_4
// Address: 0x136078 - 0x136080
void caseD_4_0x136078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x136078");
#endif

    ctx->pc = 0x136078u;

    // 0x136078: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x136078u;
    {
        const bool branch_taken_0x136078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136078u;
        // 0x13607c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136078) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136080u;
}

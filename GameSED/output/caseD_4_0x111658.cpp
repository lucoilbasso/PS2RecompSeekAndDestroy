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
// Address: 0x111658 - 0x111668
void caseD_4_0x111658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x111658");
#endif

    ctx->pc = 0x111658u;

    // 0x111658: 0x8e713630  lw          $s1, 0x3630($s3)
    ctx->pc = 0x111658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13872)));
    // 0x11165c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11165Cu;
    {
        const bool branch_taken_0x11165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11165Cu;
        // 0x111660: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11165c) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111664u;
    // 0x111664: 0x0  nop
    ctx->pc = 0x111664u;
    // NOP
    ctx->pc = 0x111668u;
}

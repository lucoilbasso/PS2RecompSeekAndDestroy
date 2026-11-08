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

// Function: caseD_7
// Address: 0x111690 - 0x1116a0
void caseD_7_0x111690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x111690");
#endif

    ctx->pc = 0x111690u;

    // 0x111690: 0x8f918a30  lw          $s1, -0x75D0($gp)
    ctx->pc = 0x111690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x111694: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x111694u;
    {
        const bool branch_taken_0x111694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111694u;
        // 0x111698: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111694) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x11169Cu;
    // 0x11169c: 0x0  nop
    ctx->pc = 0x11169cu;
    // NOP
    ctx->pc = 0x1116a0u;
}

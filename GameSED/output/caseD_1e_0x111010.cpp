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

// Function: caseD_1e
// Address: 0x111010 - 0x111020
void caseD_1e_0x111010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x111010");
#endif

    ctx->pc = 0x111010u;

    // 0x111010: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x111010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111014: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x111014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x111018: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x111018u;
    {
        const bool branch_taken_0x111018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111018u;
        // 0x11101c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111018) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x111020u;
}

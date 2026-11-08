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

// Function: caseD_1d
// Address: 0x111000 - 0x111010
void caseD_1d_0x111000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1d_0x111000");
#endif

    ctx->pc = 0x111000u;

    // 0x111000: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x111000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111004: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x111004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x111008: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x111008u;
    {
        const bool branch_taken_0x111008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111008u;
        // 0x11100c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111008) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x111010u;
}

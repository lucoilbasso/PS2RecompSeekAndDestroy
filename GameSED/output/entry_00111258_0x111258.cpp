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

// Function: entry_00111258
// Address: 0x111258 - 0x111274
void entry_00111258_0x111258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111258_0x111258");
#endif

    ctx->pc = 0x111258u;

label_111258:
    // 0x111258: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11125c: 0x0  nop
    ctx->pc = 0x11125cu;
    // NOP
    // 0x111260: 0x0  nop
    ctx->pc = 0x111260u;
    // NOP
    // 0x111264: 0x0  nop
    ctx->pc = 0x111264u;
    // NOP
    // 0x111268: 0x0  nop
    ctx->pc = 0x111268u;
    // NOP
    // 0x11126c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11126Cu;
    {
        const bool branch_taken_0x11126c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11126Cu;
        // 0x111270: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11126c) {
            ctx->pc = 0x111258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111258;
        }
    }
    ctx->pc = 0x111274u;
}

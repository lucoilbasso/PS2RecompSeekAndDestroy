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

// Function: entry_0016aa98
// Address: 0x16aa98 - 0x16aab4
void entry_0016aa98_0x16aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa98_0x16aa98");
#endif

    ctx->pc = 0x16aa98u;

label_16aa98:
    // 0x16aa98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16aa9c: 0x0  nop
    ctx->pc = 0x16aa9cu;
    // NOP
    // 0x16aaa0: 0x0  nop
    ctx->pc = 0x16aaa0u;
    // NOP
    // 0x16aaa4: 0x0  nop
    ctx->pc = 0x16aaa4u;
    // NOP
    // 0x16aaa8: 0x0  nop
    ctx->pc = 0x16aaa8u;
    // NOP
    // 0x16aaac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AAACu;
    {
        const bool branch_taken_0x16aaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAACu;
        // 0x16aab0: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaac) {
            ctx->pc = 0x16AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aa98;
        }
    }
    ctx->pc = 0x16AAB4u;
}

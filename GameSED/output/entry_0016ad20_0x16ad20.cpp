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

// Function: entry_0016ad20
// Address: 0x16ad20 - 0x16ad3c
void entry_0016ad20_0x16ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ad20_0x16ad20");
#endif

    ctx->pc = 0x16ad20u;

label_16ad20:
    // 0x16ad20: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16ad24: 0x0  nop
    ctx->pc = 0x16ad24u;
    // NOP
    // 0x16ad28: 0x0  nop
    ctx->pc = 0x16ad28u;
    // NOP
    // 0x16ad2c: 0x0  nop
    ctx->pc = 0x16ad2cu;
    // NOP
    // 0x16ad30: 0x0  nop
    ctx->pc = 0x16ad30u;
    // NOP
    // 0x16ad34: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AD34u;
    {
        const bool branch_taken_0x16ad34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad34) {
            ctx->pc = 0x16AD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AD34u;
            // 0x16ad38: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ad20;
        }
    }
    ctx->pc = 0x16AD3Cu;
}

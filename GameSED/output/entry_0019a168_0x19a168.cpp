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

// Function: entry_0019a168
// Address: 0x19a168 - 0x19a184
void entry_0019a168_0x19a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a168_0x19a168");
#endif

    ctx->pc = 0x19a168u;

label_19a168:
    // 0x19a168: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19a16c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a170: 0x0  nop
    ctx->pc = 0x19a170u;
    // NOP
    // 0x19a174: 0x0  nop
    ctx->pc = 0x19a174u;
    // NOP
    // 0x19a178: 0x0  nop
    ctx->pc = 0x19a178u;
    // NOP
    // 0x19a17c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A17Cu;
    {
        const bool branch_taken_0x19a17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A17Cu;
        // 0x19a180: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a17c) {
            ctx->pc = 0x19A168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a168;
        }
    }
    ctx->pc = 0x19A184u;
}

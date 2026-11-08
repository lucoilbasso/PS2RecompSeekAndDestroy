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

// Function: entry_00132080
// Address: 0x132080 - 0x13209c
void entry_00132080_0x132080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132080_0x132080");
#endif

    ctx->pc = 0x132080u;

label_132080:
    // 0x132080: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x132080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x132084: 0x0  nop
    ctx->pc = 0x132084u;
    // NOP
    // 0x132088: 0x0  nop
    ctx->pc = 0x132088u;
    // NOP
    // 0x13208c: 0x0  nop
    ctx->pc = 0x13208cu;
    // NOP
    // 0x132090: 0x0  nop
    ctx->pc = 0x132090u;
    // NOP
    // 0x132094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x132094u;
    {
        const bool branch_taken_0x132094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132094u;
        // 0x132098: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132094) {
            ctx->pc = 0x132080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132080;
        }
    }
    ctx->pc = 0x13209Cu;
}

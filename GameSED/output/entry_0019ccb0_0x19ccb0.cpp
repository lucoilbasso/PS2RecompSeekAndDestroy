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

// Function: entry_0019ccb0
// Address: 0x19ccb0 - 0x19ccd8
void entry_0019ccb0_0x19ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ccb0_0x19ccb0");
#endif

    ctx->pc = 0x19ccb0u;

label_19ccb0:
    // 0x19ccb0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19ccb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ccb4: 0x0  nop
    ctx->pc = 0x19ccb4u;
    // NOP
    // 0x19ccb8: 0x0  nop
    ctx->pc = 0x19ccb8u;
    // NOP
    // 0x19ccbc: 0x0  nop
    ctx->pc = 0x19ccbcu;
    // NOP
    // 0x19ccc0: 0x0  nop
    ctx->pc = 0x19ccc0u;
    // NOP
    // 0x19ccc4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CCC4u;
    {
        const bool branch_taken_0x19ccc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ccc4) {
            ctx->pc = 0x19CCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CCC4u;
            // 0x19ccc8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ccb0;
        }
    }
    ctx->pc = 0x19CCCCu;
    // 0x19cccc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19CCCCu;
    {
        const bool branch_taken_0x19cccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCCCu;
        // 0x19ccd0: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cccc) {
            ctx->pc = 0x19CCE8u;
            return;
        }
    }
    ctx->pc = 0x19CCD4u;
    // 0x19ccd4: 0x0  nop
    ctx->pc = 0x19ccd4u;
    // NOP
    ctx->pc = 0x19ccd8u;
}

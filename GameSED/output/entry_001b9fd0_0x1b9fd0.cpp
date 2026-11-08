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

// Function: entry_001b9fd0
// Address: 0x1b9fd0 - 0x1b9ff8
void entry_001b9fd0_0x1b9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9fd0_0x1b9fd0");
#endif

    ctx->pc = 0x1b9fd0u;

label_1b9fd0:
    // 0x1b9fd0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1b9fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1b9fd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b9fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9fd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b9fdc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b9fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9fe0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b9fe4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b9fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9fe8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9FE8u;
    {
        const bool branch_taken_0x1b9fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FE8u;
        // 0x1b9fec: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fe8) {
            ctx->pc = 0x1B9FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9fd0;
        }
    }
    ctx->pc = 0x1B9FF0u;
    // 0x1b9ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9FF0u;
    {
        const bool branch_taken_0x1b9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FF0u;
        // 0x1b9ff4: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ff0) {
            ctx->pc = 0x1B9FFCu;
            return;
        }
    }
    ctx->pc = 0x1B9FF8u;
}

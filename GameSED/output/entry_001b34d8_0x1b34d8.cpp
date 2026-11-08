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

// Function: entry_001b34d8
// Address: 0x1b34d8 - 0x1b34f0
void entry_001b34d8_0x1b34d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b34d8_0x1b34d8");
#endif

    ctx->pc = 0x1b34d8u;

label_1b34d8:
    // 0x1b34d8: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1b34d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b34dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B34DCu;
    {
        const bool branch_taken_0x1b34dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34DCu;
        // 0x1b34e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34dc) {
            ctx->pc = 0x1B34F0u;
            return;
        }
    }
    ctx->pc = 0x1B34E4u;
    // 0x1b34e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b34e8: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B34E8u;
    {
        const bool branch_taken_0x1b34e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b34e8) {
            ctx->pc = 0x1B34ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B34E8u;
            // 0x1b34ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B34D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b34d8;
        }
    }
    ctx->pc = 0x1B34F0u;
}

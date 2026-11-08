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

// Function: entry_001c9c38
// Address: 0x1c9c38 - 0x1c9c58
void entry_001c9c38_0x1c9c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c38_0x1c9c38");
#endif

    ctx->pc = 0x1c9c38u;

label_1c9c38:
    // 0x1c9c38: 0x64a50004  daddiu      $a1, $a1, 0x4
    ctx->pc = 0x1c9c38u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4);
    // 0x1c9c3c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c9c40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c9c40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c9c44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c9c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9c4c: 0x0  nop
    ctx->pc = 0x1c9c4cu;
    // NOP
    // 0x1c9c50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C9C50u;
    {
        const bool branch_taken_0x1c9c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C50u;
        // 0x1c9c54: 0x64840001  daddiu      $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c50) {
            ctx->pc = 0x1C9C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9c38;
        }
    }
    ctx->pc = 0x1C9C58u;
}

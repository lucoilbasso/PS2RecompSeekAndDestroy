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

// Function: entry_001b5c50
// Address: 0x1b5c50 - 0x1b5c74
void entry_001b5c50_0x1b5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5c50_0x1b5c50");
#endif

    ctx->pc = 0x1b5c50u;

label_1b5c50:
    // 0x1b5c50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5c54: 0x0  nop
    ctx->pc = 0x1b5c54u;
    // NOP
    // 0x1b5c58: 0x0  nop
    ctx->pc = 0x1b5c58u;
    // NOP
    // 0x1b5c5c: 0x0  nop
    ctx->pc = 0x1b5c5cu;
    // NOP
    // 0x1b5c60: 0x0  nop
    ctx->pc = 0x1b5c60u;
    // NOP
    // 0x1b5c64: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5C64u;
    {
        const bool branch_taken_0x1b5c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5c64) {
            ctx->pc = 0x1B5C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5C6Cu;
    // 0x1b5c6c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1B5C6Cu;
    {
        const bool branch_taken_0x1b5c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C6Cu;
        // 0x1b5c70: 0x2630b600  addiu       $s0, $s1, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c6c) {
            ctx->pc = 0x1B5BB8u;
            return;
        }
    }
    ctx->pc = 0x1B5C74u;
}

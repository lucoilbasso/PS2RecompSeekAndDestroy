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

// Function: entry_001e0d70
// Address: 0x1e0d70 - 0x1e0d8c
void entry_001e0d70_0x1e0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d70_0x1e0d70");
#endif

    ctx->pc = 0x1e0d70u;

label_1e0d70:
    // 0x1e0d70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e0d74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e0d78: 0x0  nop
    ctx->pc = 0x1e0d78u;
    // NOP
    // 0x1e0d7c: 0x0  nop
    ctx->pc = 0x1e0d7cu;
    // NOP
    // 0x1e0d80: 0x0  nop
    ctx->pc = 0x1e0d80u;
    // NOP
    // 0x1e0d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E0D84u;
    {
        const bool branch_taken_0x1e0d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D84u;
        // 0x1e0d88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d84) {
            ctx->pc = 0x1E0D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0d70;
        }
    }
    ctx->pc = 0x1E0D8Cu;
}

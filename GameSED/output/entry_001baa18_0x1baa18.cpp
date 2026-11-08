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

// Function: entry_001baa18
// Address: 0x1baa18 - 0x1baa3c
void entry_001baa18_0x1baa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baa18_0x1baa18");
#endif

    ctx->pc = 0x1baa18u;

label_1baa18:
    // 0x1baa18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1baa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1baa1c: 0x0  nop
    ctx->pc = 0x1baa1cu;
    // NOP
    // 0x1baa20: 0x0  nop
    ctx->pc = 0x1baa20u;
    // NOP
    // 0x1baa24: 0x0  nop
    ctx->pc = 0x1baa24u;
    // NOP
    // 0x1baa28: 0x0  nop
    ctx->pc = 0x1baa28u;
    // NOP
    // 0x1baa2c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BAA2Cu;
    {
        const bool branch_taken_0x1baa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1baa2c) {
            ctx->pc = 0x1BAA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BAA34u;
    // 0x1baa34: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BAA34u;
    {
        const bool branch_taken_0x1baa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA34u;
        // 0x1baa38: 0x2630dac8  addiu       $s0, $s1, -0x2538 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa34) {
            ctx->pc = 0x1BA9D8u;
            return;
        }
    }
    ctx->pc = 0x1BAA3Cu;
}

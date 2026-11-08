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

// Function: entry_001c4530
// Address: 0x1c4530 - 0x1c4554
void entry_001c4530_0x1c4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4530_0x1c4530");
#endif

    ctx->pc = 0x1c4530u;

label_1c4530:
    // 0x1c4530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4534: 0x0  nop
    ctx->pc = 0x1c4534u;
    // NOP
    // 0x1c4538: 0x0  nop
    ctx->pc = 0x1c4538u;
    // NOP
    // 0x1c453c: 0x0  nop
    ctx->pc = 0x1c453cu;
    // NOP
    // 0x1c4540: 0x0  nop
    ctx->pc = 0x1c4540u;
    // NOP
    // 0x1c4544: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4544u;
    {
        const bool branch_taken_0x1c4544 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c4544) {
            ctx->pc = 0x1C4530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4530;
        }
    }
    ctx->pc = 0x1C454Cu;
    // 0x1c454c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C454Cu;
    {
        const bool branch_taken_0x1c454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C454Cu;
        // 0x1c4550: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c454c) {
            ctx->pc = 0x1C4564u;
            return;
        }
    }
    ctx->pc = 0x1C4554u;
}

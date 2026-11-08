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

// Function: entry_001c7468
// Address: 0x1c7468 - 0x1c7484
void entry_001c7468_0x1c7468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7468_0x1c7468");
#endif

    ctx->pc = 0x1c7468u;

label_1c7468:
    // 0x1c7468: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1c746c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7470: 0x0  nop
    ctx->pc = 0x1c7470u;
    // NOP
    // 0x1c7474: 0x0  nop
    ctx->pc = 0x1c7474u;
    // NOP
    // 0x1c7478: 0x0  nop
    ctx->pc = 0x1c7478u;
    // NOP
    // 0x1c747c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C747Cu;
    {
        const bool branch_taken_0x1c747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C747Cu;
        // 0x1c7480: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c747c) {
            ctx->pc = 0x1C7468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7468;
        }
    }
    ctx->pc = 0x1C7484u;
}

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

// Function: entry_0019c918
// Address: 0x19c918 - 0x19c934
void entry_0019c918_0x19c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c918_0x19c918");
#endif

    ctx->pc = 0x19c918u;

label_19c918:
    // 0x19c918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c91c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19c920: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c924: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x19c924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x19c928: 0x0  nop
    ctx->pc = 0x19c928u;
    // NOP
    // 0x19c92c: 0x1468fffa  bne         $v1, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C92Cu;
    {
        const bool branch_taken_0x19c92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x19C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C92Cu;
        // 0x19c930: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c92c) {
            ctx->pc = 0x19C918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c918;
        }
    }
    ctx->pc = 0x19C934u;
}

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

// Function: entry_001385b0
// Address: 0x1385b0 - 0x1385d4
void entry_001385b0_0x1385b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385b0_0x1385b0");
#endif

    ctx->pc = 0x1385b0u;

label_1385b0:
    // 0x1385b0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1385b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1385b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1385B4u;
    {
        const bool branch_taken_0x1385b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385B4u;
        // 0x1385b8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385b4) {
            ctx->pc = 0x1385D4u;
            return;
        }
    }
    ctx->pc = 0x1385BCu;
    // 0x1385bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1385c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1385c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1385c4: 0x0  nop
    ctx->pc = 0x1385c4u;
    // NOP
    // 0x1385c8: 0x0  nop
    ctx->pc = 0x1385c8u;
    // NOP
    // 0x1385cc: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1385CCu;
    {
        const bool branch_taken_0x1385cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1385cc) {
            ctx->pc = 0x1385D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385CCu;
            // 0x1385d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1385B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1385b0;
        }
    }
    ctx->pc = 0x1385D4u;
}

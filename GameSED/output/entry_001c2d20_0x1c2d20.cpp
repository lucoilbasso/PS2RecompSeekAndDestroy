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

// Function: entry_001c2d20
// Address: 0x1c2d20 - 0x1c2d34
void entry_001c2d20_0x1c2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2d20_0x1c2d20");
#endif

    ctx->pc = 0x1c2d20u;

    // 0x1c2d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d24: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1c2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2d28: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C2D28u;
    {
        const bool branch_taken_0x1c2d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D28u;
        // 0x1c2d2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d28) {
            ctx->pc = 0x1C2E00u;
            return;
        }
    }
    ctx->pc = 0x1C2D30u;
    // 0x1c2d30: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    ctx->pc = 0x1c2d34u;
}

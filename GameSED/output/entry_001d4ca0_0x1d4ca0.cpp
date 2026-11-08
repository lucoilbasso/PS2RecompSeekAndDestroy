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

// Function: entry_001d4ca0
// Address: 0x1d4ca0 - 0x1d4cbc
void entry_001d4ca0_0x1d4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ca0_0x1d4ca0");
#endif

    ctx->pc = 0x1d4ca0u;

label_1d4ca0:
    // 0x1d4ca0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d4ca4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1d4ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4ca8: 0x0  nop
    ctx->pc = 0x1d4ca8u;
    // NOP
    // 0x1d4cac: 0x0  nop
    ctx->pc = 0x1d4cacu;
    // NOP
    // 0x1d4cb0: 0x0  nop
    ctx->pc = 0x1d4cb0u;
    // NOP
    // 0x1d4cb4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4CB4u;
    {
        const bool branch_taken_0x1d4cb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cb4) {
            ctx->pc = 0x1D4CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ca0;
        }
    }
    ctx->pc = 0x1D4CBCu;
}

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

// Function: entry_001a0a08
// Address: 0x1a0a08 - 0x1a0a2c
void entry_001a0a08_0x1a0a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a08_0x1a0a08");
#endif

    ctx->pc = 0x1a0a08u;

label_1a0a08:
    // 0x1a0a08: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0A08u;
    {
        const bool branch_taken_0x1a0a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0a08) {
            ctx->pc = 0x1A0A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A08u;
            // 0x1a0a0c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A34u;
            return;
        }
    }
    ctx->pc = 0x1A0A10u;
    // 0x1a0a10: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a0a14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0a18: 0x0  nop
    ctx->pc = 0x1a0a18u;
    // NOP
    // 0x1a0a1c: 0x0  nop
    ctx->pc = 0x1a0a1cu;
    // NOP
    // 0x1a0a20: 0x0  nop
    ctx->pc = 0x1a0a20u;
    // NOP
    // 0x1a0a24: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0A24u;
    {
        const bool branch_taken_0x1a0a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a24) {
            ctx->pc = 0x1A0A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A24u;
            // 0x1a0a28: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0a08;
        }
    }
    ctx->pc = 0x1A0A2Cu;
}

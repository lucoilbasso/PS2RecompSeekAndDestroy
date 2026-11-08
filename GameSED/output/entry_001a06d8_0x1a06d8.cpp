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

// Function: entry_001a06d8
// Address: 0x1a06d8 - 0x1a06fc
void entry_001a06d8_0x1a06d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a06d8_0x1a06d8");
#endif

    ctx->pc = 0x1a06d8u;

label_1a06d8:
    // 0x1a06d8: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A06D8u;
    {
        const bool branch_taken_0x1a06d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a06d8) {
            ctx->pc = 0x1A06DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06D8u;
            // 0x1a06dc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0704u;
            return;
        }
    }
    ctx->pc = 0x1A06E0u;
    // 0x1a06e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a06e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a06e8: 0x0  nop
    ctx->pc = 0x1a06e8u;
    // NOP
    // 0x1a06ec: 0x0  nop
    ctx->pc = 0x1a06ecu;
    // NOP
    // 0x1a06f0: 0x0  nop
    ctx->pc = 0x1a06f0u;
    // NOP
    // 0x1a06f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A06F4u;
    {
        const bool branch_taken_0x1a06f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a06f4) {
            ctx->pc = 0x1A06F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06F4u;
            // 0x1a06f8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A06D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a06d8;
        }
    }
    ctx->pc = 0x1A06FCu;
}

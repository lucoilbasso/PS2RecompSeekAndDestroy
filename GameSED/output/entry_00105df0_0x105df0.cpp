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

// Function: entry_00105df0
// Address: 0x105df0 - 0x105e14
void entry_00105df0_0x105df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105df0_0x105df0");
#endif

    ctx->pc = 0x105df0u;

label_105df0:
    // 0x105df0: 0x8cc20400  lw          $v0, 0x400($a2)
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1024)));
    // 0x105df4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x105df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x105df8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x105df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105dfc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x105dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x105e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105e04: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105E04u;
    {
        const bool branch_taken_0x105e04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x105E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E04u;
        // 0x105e08: 0x28850400  slti        $a1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e04) {
            ctx->pc = 0x105E20u;
            return;
        }
    }
    ctx->pc = 0x105E0Cu;
    // 0x105e0c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x105E0Cu;
    {
        const bool branch_taken_0x105e0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E0Cu;
        // 0x105e10: 0xacc40400  sw          $a0, 0x400($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e0c) {
            ctx->pc = 0x105DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105df0;
        }
    }
    ctx->pc = 0x105E14u;
}

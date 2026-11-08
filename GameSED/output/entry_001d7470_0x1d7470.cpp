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

// Function: entry_001d7470
// Address: 0x1d7470 - 0x1d7494
void entry_001d7470_0x1d7470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7470_0x1d7470");
#endif

    ctx->pc = 0x1d7470u;

label_1d7470:
    // 0x1d7470: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d7474: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d7478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d747c: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D747Cu;
    {
        const bool branch_taken_0x1d747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D747Cu;
        // 0x1d7480: 0xe8302a  slt         $a2, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d747c) {
            ctx->pc = 0x1D7498u;
            return;
        }
    }
    ctx->pc = 0x1D7484u;
    // 0x1d7484: 0x0  nop
    ctx->pc = 0x1d7484u;
    // NOP
    // 0x1d7488: 0x0  nop
    ctx->pc = 0x1d7488u;
    // NOP
    // 0x1d748c: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D748Cu;
    {
        const bool branch_taken_0x1d748c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d748c) {
            ctx->pc = 0x1D7490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D748Cu;
            // 0x1d7490: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7470;
        }
    }
    ctx->pc = 0x1D7494u;
}

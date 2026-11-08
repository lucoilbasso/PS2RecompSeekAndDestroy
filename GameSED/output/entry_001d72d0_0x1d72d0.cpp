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

// Function: entry_001d72d0
// Address: 0x1d72d0 - 0x1d72f4
void entry_001d72d0_0x1d72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d72d0_0x1d72d0");
#endif

    ctx->pc = 0x1d72d0u;

label_1d72d0:
    // 0x1d72d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d72d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72d4: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D72D4u;
    {
        const bool branch_taken_0x1d72d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72D4u;
        // 0x1d72d8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72d4) {
            ctx->pc = 0x1D72F8u;
            return;
        }
    }
    ctx->pc = 0x1D72DCu;
    // 0x1d72dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d72dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d72e0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1d72e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d72e4: 0x0  nop
    ctx->pc = 0x1d72e4u;
    // NOP
    // 0x1d72e8: 0x0  nop
    ctx->pc = 0x1d72e8u;
    // NOP
    // 0x1d72ec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D72ECu;
    {
        const bool branch_taken_0x1d72ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d72ec) {
            ctx->pc = 0x1D72F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D72ECu;
            // 0x1d72f0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D72D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d72d0;
        }
    }
    ctx->pc = 0x1D72F4u;
}

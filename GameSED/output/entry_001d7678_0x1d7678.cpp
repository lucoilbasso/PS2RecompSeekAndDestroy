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

// Function: entry_001d7678
// Address: 0x1d7678 - 0x1d769c
void entry_001d7678_0x1d7678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7678_0x1d7678");
#endif

    ctx->pc = 0x1d7678u;

label_1d7678:
    // 0x1d7678: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d767c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d7680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7684: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7684u;
    {
        const bool branch_taken_0x1d7684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7684u;
        // 0x1d7688: 0xe8302a  slt         $a2, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7684) {
            ctx->pc = 0x1D76A0u;
            return;
        }
    }
    ctx->pc = 0x1D768Cu;
    // 0x1d768c: 0x0  nop
    ctx->pc = 0x1d768cu;
    // NOP
    // 0x1d7690: 0x0  nop
    ctx->pc = 0x1d7690u;
    // NOP
    // 0x1d7694: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7694u;
    {
        const bool branch_taken_0x1d7694 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7694) {
            ctx->pc = 0x1D7698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7694u;
            // 0x1d7698: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7678;
        }
    }
    ctx->pc = 0x1D769Cu;
}

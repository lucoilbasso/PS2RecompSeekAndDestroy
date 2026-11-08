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

// Function: entry_00102a70
// Address: 0x102a70 - 0x102a94
void entry_00102a70_0x102a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102a70_0x102a70");
#endif

    ctx->pc = 0x102a70u;

label_102a70:
    // 0x102a70: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x102a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x102a74: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x102a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x102a78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x102a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102a7c: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x102a7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x102a80: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102A80u;
    {
        const bool branch_taken_0x102a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x102A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A80u;
        // 0x102a84: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a80) {
            ctx->pc = 0x102A98u;
            return;
        }
    }
    ctx->pc = 0x102A88u;
    // 0x102a88: 0x0  nop
    ctx->pc = 0x102a88u;
    // NOP
    // 0x102a8c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102A8Cu;
    {
        const bool branch_taken_0x102a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x102a8c) {
            ctx->pc = 0x102A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A8Cu;
            // 0x102a90: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102a70;
        }
    }
    ctx->pc = 0x102A94u;
}

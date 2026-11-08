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

// Function: entry_0012aa60
// Address: 0x12aa60 - 0x12aa8c
void entry_0012aa60_0x12aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa60_0x12aa60");
#endif

    ctx->pc = 0x12aa60u;

label_12aa60:
    // 0x12aa60: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12aa60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12aa64: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12aa68: 0x24a30240  addiu       $v1, $a1, 0x240
    ctx->pc = 0x12aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x12aa6c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12aa6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12aa70: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12aa74: 0x8e240480  lw          $a0, 0x480($s1)
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aa78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12aa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12aa7c: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x12aa7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12aa80: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AA80u;
    {
        const bool branch_taken_0x12aa80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA80u;
        // 0x12aa84: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa80) {
            ctx->pc = 0x12AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aa60;
        }
    }
    ctx->pc = 0x12AA88u;
    // 0x12aa88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12aa8cu;
}

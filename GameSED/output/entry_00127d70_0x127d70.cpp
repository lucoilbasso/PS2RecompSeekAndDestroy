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

// Function: entry_00127d70
// Address: 0x127d70 - 0x127d9c
void entry_00127d70_0x127d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d70_0x127d70");
#endif

    ctx->pc = 0x127d70u;

label_127d70:
    // 0x127d70: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x127d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x127d74: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x127d74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x127d78: 0x24a30240  addiu       $v1, $a1, 0x240
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x127d7c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x127d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127d80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127d80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127d84: 0x8e440480  lw          $a0, 0x480($s2)
    ctx->pc = 0x127d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
    // 0x127d88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x127d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x127d8c: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x127d8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x127d90: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127D90u;
    {
        const bool branch_taken_0x127d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x127D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D90u;
        // 0x127d94: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d90) {
            ctx->pc = 0x127D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127d70;
        }
    }
    ctx->pc = 0x127D98u;
    // 0x127d98: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x127d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->pc = 0x127d9cu;
}

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

// Function: entry_00103b20
// Address: 0x103b20 - 0x103b44
void entry_00103b20_0x103b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103b20_0x103b20");
#endif

    ctx->pc = 0x103b20u;

label_103b20:
    // 0x103b20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x103b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x103b24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103b28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103B28u;
    {
        const bool branch_taken_0x103b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B28u;
        // 0x103b2c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b28) {
            ctx->pc = 0x103B48u;
            return;
        }
    }
    ctx->pc = 0x103B30u;
    // 0x103b30: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x103b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x103b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103b38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103b3c: 0x5471fff8  bnel        $v1, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x103B3Cu;
    {
        const bool branch_taken_0x103b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x103b3c) {
            ctx->pc = 0x103B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103B3Cu;
            // 0x103b40: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103b20;
        }
    }
    ctx->pc = 0x103B44u;
}

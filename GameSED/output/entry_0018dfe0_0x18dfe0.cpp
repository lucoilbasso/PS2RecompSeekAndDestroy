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

// Function: entry_0018dfe0
// Address: 0x18dfe0 - 0x18e000
void entry_0018dfe0_0x18dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dfe0_0x18dfe0");
#endif

    ctx->pc = 0x18dfe0u;

label_18dfe0:
    // 0x18dfe0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x18dfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18dfe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18dfe8: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18dfec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18dfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dff0: 0x0  nop
    ctx->pc = 0x18dff0u;
    // NOP
    // 0x18dff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DFF4u;
    {
        const bool branch_taken_0x18dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF4u;
        // 0x18dff8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dff4) {
            ctx->pc = 0x18DFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dfe0;
        }
    }
    ctx->pc = 0x18DFFCu;
    // 0x18dffc: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x18e000u;
}

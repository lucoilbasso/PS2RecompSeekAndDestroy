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

// Function: entry_0010dc30
// Address: 0x10dc30 - 0x10dc58
void entry_0010dc30_0x10dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc30_0x10dc30");
#endif

    ctx->pc = 0x10dc30u;

label_10dc30:
    // 0x10dc30: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x10dc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10dc34: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x10dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x10dc38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10dc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10dc3c: 0x4a1824  and         $v1, $v0, $t2
    ctx->pc = 0x10dc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x10dc40: 0x10b302a  slt         $a2, $t0, $t3
    ctx->pc = 0x10dc40u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x10dc44: 0x6a100b  movn        $v0, $v1, $t2
    ctx->pc = 0x10dc44u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x10dc48: 0x1050ffeb  beq         $v0, $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10DC48u;
    {
        const bool branch_taken_0x10dc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x10DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC48u;
        // 0x10dc4c: 0x1241821  addu        $v1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc48) {
            ctx->pc = 0x10DBF8u;
            return;
        }
    }
    ctx->pc = 0x10DC50u;
    // 0x10dc50: 0x54c0fff7  bnel        $a2, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10DC50u;
    {
        const bool branch_taken_0x10dc50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dc50) {
            ctx->pc = 0x10DC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DC50u;
            // 0x10dc54: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dc30;
        }
    }
    ctx->pc = 0x10DC58u;
}

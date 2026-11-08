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

// Function: entry_0018e0e0
// Address: 0x18e0e0 - 0x18e104
void entry_0018e0e0_0x18e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e0e0_0x18e0e0");
#endif

    ctx->pc = 0x18e0e0u;

label_18e0e0:
    // 0x18e0e0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x18e0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e0e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e0e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18e0ec: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x18e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e0f0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e0f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e0f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E0F8u;
    {
        const bool branch_taken_0x18e0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0F8u;
        // 0x18e0fc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0f8) {
            ctx->pc = 0x18E0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e0e0;
        }
    }
    ctx->pc = 0x18E100u;
    // 0x18e100: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x18e104u;
}

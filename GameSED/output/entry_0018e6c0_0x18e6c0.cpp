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

// Function: entry_0018e6c0
// Address: 0x18e6c0 - 0x18e6e4
void entry_0018e6c0_0x18e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6c0_0x18e6c0");
#endif

    ctx->pc = 0x18e6c0u;

label_18e6c0:
    // 0x18e6c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e6c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e6c8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x18e6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18e6cc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e6d0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e6d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e6d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E6D8u;
    {
        const bool branch_taken_0x18e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D8u;
        // 0x18e6dc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6d8) {
            ctx->pc = 0x18E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e6c0;
        }
    }
    ctx->pc = 0x18E6E0u;
    // 0x18e6e0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->pc = 0x18e6e4u;
}

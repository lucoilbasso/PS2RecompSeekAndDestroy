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

// Function: entry_00123c70
// Address: 0x123c70 - 0x123c8c
void entry_00123c70_0x123c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123c70_0x123c70");
#endif

    ctx->pc = 0x123c70u;

label_123c70:
    // 0x123c70: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x123c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x123c74: 0x24620240  addiu       $v0, $v1, 0x240
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x123c78: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x123c78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x123c7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x123c80: 0x0  nop
    ctx->pc = 0x123c80u;
    // NOP
    // 0x123c84: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123C84u;
    {
        const bool branch_taken_0x123c84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C84u;
        // 0x123c88: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c84) {
            ctx->pc = 0x123C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c70;
        }
    }
    ctx->pc = 0x123C8Cu;
}

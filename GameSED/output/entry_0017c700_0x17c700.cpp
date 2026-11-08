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

// Function: entry_0017c700
// Address: 0x17c700 - 0x17c71c
void entry_0017c700_0x17c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c700_0x17c700");
#endif

    ctx->pc = 0x17c700u;

label_17c700:
    // 0x17c700: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17c704: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x17c704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c708: 0x0  nop
    ctx->pc = 0x17c708u;
    // NOP
    // 0x17c70c: 0x0  nop
    ctx->pc = 0x17c70cu;
    // NOP
    // 0x17c710: 0x0  nop
    ctx->pc = 0x17c710u;
    // NOP
    // 0x17c714: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C714u;
    {
        const bool branch_taken_0x17c714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C714u;
        // 0x17c718: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c714) {
            ctx->pc = 0x17C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c700;
        }
    }
    ctx->pc = 0x17C71Cu;
}

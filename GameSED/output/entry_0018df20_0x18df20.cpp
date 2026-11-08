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

// Function: entry_0018df20
// Address: 0x18df20 - 0x18df40
void entry_0018df20_0x18df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018df20_0x18df20");
#endif

    ctx->pc = 0x18df20u;

label_18df20:
    // 0x18df20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18df24: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x18df24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18df28: 0x0  nop
    ctx->pc = 0x18df28u;
    // NOP
    // 0x18df2c: 0x0  nop
    ctx->pc = 0x18df2cu;
    // NOP
    // 0x18df30: 0x0  nop
    ctx->pc = 0x18df30u;
    // NOP
    // 0x18df34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DF34u;
    {
        const bool branch_taken_0x18df34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF34u;
        // 0x18df38: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df34) {
            ctx->pc = 0x18DF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DF3Cu;
    // 0x18df3c: 0x2482023c  addiu       $v0, $a0, 0x23C
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
    ctx->pc = 0x18df40u;
}

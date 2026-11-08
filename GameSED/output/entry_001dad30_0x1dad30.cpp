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

// Function: entry_001dad30
// Address: 0x1dad30 - 0x1dad58
void entry_001dad30_0x1dad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dad30_0x1dad30");
#endif

    ctx->pc = 0x1dad30u;

label_1dad30:
    // 0x1dad30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dad34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dad34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1dad38: 0x0  nop
    ctx->pc = 0x1dad38u;
    // NOP
    // 0x1dad3c: 0x0  nop
    ctx->pc = 0x1dad3cu;
    // NOP
    // 0x1dad40: 0x0  nop
    ctx->pc = 0x1dad40u;
    // NOP
    // 0x1dad44: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DAD44u;
    {
        const bool branch_taken_0x1dad44 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD44u;
        // 0x1dad48: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad44) {
            ctx->pc = 0x1DAD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dad30;
        }
    }
    ctx->pc = 0x1DAD4Cu;
    // 0x1dad4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dad50: 0x2522125c  addiu       $v0, $t1, 0x125C
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4700));
    // 0x1dad54: 0x0  nop
    ctx->pc = 0x1dad54u;
    // NOP
    ctx->pc = 0x1dad58u;
}

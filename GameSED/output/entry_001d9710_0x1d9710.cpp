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

// Function: entry_001d9710
// Address: 0x1d9710 - 0x1d9740
void entry_001d9710_0x1d9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9710_0x1d9710");
#endif

    ctx->pc = 0x1d9710u;

label_1d9710:
    // 0x1d9710: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9714: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d9714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d9718: 0x0  nop
    ctx->pc = 0x1d9718u;
    // NOP
    // 0x1d971c: 0x0  nop
    ctx->pc = 0x1d971cu;
    // NOP
    // 0x1d9720: 0x0  nop
    ctx->pc = 0x1d9720u;
    // NOP
    // 0x1d9724: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D9724u;
    {
        const bool branch_taken_0x1d9724 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9724u;
        // 0x1d9728: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9724) {
            ctx->pc = 0x1D9710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9710;
        }
    }
    ctx->pc = 0x1D972Cu;
    // 0x1d972c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9734: 0x24c206dc  addiu       $v0, $a2, 0x6DC
    ctx->pc = 0x1d9734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1756));
    // 0x1d9738: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d973c: 0x0  nop
    ctx->pc = 0x1d973cu;
    // NOP
    ctx->pc = 0x1d9740u;
}

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

// Function: TankInit__14ApItemTankList
// Address: 0x118cd0 - 0x118cfc
void TankInit__14ApItemTankList_0x118cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankInit__14ApItemTankList_0x118cd0");
#endif

    switch (ctx->pc) {
        case 0x118cd8u: goto label_118cd8;
        default: break;
    }

    ctx->pc = 0x118cd0u;

    // 0x118cd0: 0x248401b4  addiu       $a0, $a0, 0x1B4
    ctx->pc = 0x118cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 436));
    // 0x118cd4: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x118cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_118cd8:
    // 0x118cd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118cdc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x118cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x118ce0: 0x0  nop
    ctx->pc = 0x118ce0u;
    // NOP
    // 0x118ce4: 0x0  nop
    ctx->pc = 0x118ce4u;
    // NOP
    // 0x118ce8: 0x0  nop
    ctx->pc = 0x118ce8u;
    // NOP
    // 0x118cec: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118CECu;
    {
        const bool branch_taken_0x118cec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CECu;
        // 0x118cf0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cec) {
            ctx->pc = 0x118CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118cd8;
        }
    }
    ctx->pc = 0x118CF4u;
    // 0x118cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x118CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CFCu;
}

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

// Function: ApDaemonInitAroundChain__Fv
// Address: 0x139350 - 0x13938c
void ApDaemonInitAroundChain__Fv_0x139350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonInitAroundChain__Fv_0x139350");
#endif

    switch (ctx->pc) {
        case 0x139368u: goto label_139368;
        default: break;
    }

    ctx->pc = 0x139350u;

    // 0x139350: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x139354: 0xaf808a28  sw          $zero, -0x75D8($gp)
    ctx->pc = 0x139354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 0));
    // 0x139358: 0x2442a408  addiu       $v0, $v0, -0x5BF8
    ctx->pc = 0x139358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943752));
    // 0x13935c: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x13935cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x139360: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x139360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x139364: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x139364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_139368:
    // 0x139368: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13936c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13936cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x139370: 0x0  nop
    ctx->pc = 0x139370u;
    // NOP
    // 0x139374: 0x0  nop
    ctx->pc = 0x139374u;
    // NOP
    // 0x139378: 0x0  nop
    ctx->pc = 0x139378u;
    // NOP
    // 0x13937c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13937Cu;
    {
        const bool branch_taken_0x13937c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x139380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13937Cu;
        // 0x139380: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13937c) {
            ctx->pc = 0x139368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139368;
        }
    }
    ctx->pc = 0x139384u;
    // 0x139384: 0x3e00008  jr          $ra
    ctx->pc = 0x139384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13938Cu;
}

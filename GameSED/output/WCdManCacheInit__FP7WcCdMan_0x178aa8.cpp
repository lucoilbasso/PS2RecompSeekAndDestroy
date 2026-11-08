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

// Function: WCdManCacheInit__FP7WcCdMan
// Address: 0x178aa8 - 0x178ad4
void WCdManCacheInit__FP7WcCdMan_0x178aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManCacheInit__FP7WcCdMan_0x178aa8");
#endif

    switch (ctx->pc) {
        case 0x178ab0u: goto label_178ab0;
        default: break;
    }

    ctx->pc = 0x178aa8u;

    // 0x178aa8: 0x2484108c  addiu       $a0, $a0, 0x108C
    ctx->pc = 0x178aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4236));
    // 0x178aac: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x178aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_178ab0:
    // 0x178ab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178ab4: 0xa080ffbc  sb          $zero, -0x44($a0)
    ctx->pc = 0x178ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967228), (uint8_t)GPR_U32(ctx, 0));
    // 0x178ab8: 0xac80fffc  sw          $zero, -0x4($a0)
    ctx->pc = 0x178ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 0));
    // 0x178abc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x178abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x178ac0: 0x0  nop
    ctx->pc = 0x178ac0u;
    // NOP
    // 0x178ac4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x178AC4u;
    {
        const bool branch_taken_0x178ac4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x178AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AC4u;
        // 0x178ac8: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ac4) {
            ctx->pc = 0x178AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178ab0;
        }
    }
    ctx->pc = 0x178ACCu;
    // 0x178acc: 0x3e00008  jr          $ra
    ctx->pc = 0x178ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AD4u;
}

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

// Function: WMonitorLoadImageDebugPop__Fv
// Address: 0x1773a8 - 0x1773d0
void WMonitorLoadImageDebugPop__Fv_0x1773a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMonitorLoadImageDebugPop__Fv_0x1773a8");
#endif

    ctx->pc = 0x1773a8u;

    // 0x1773a8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1773ac: 0x2484cec0  addiu       $a0, $a0, -0x3140
    ctx->pc = 0x1773acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    // 0x1773b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1773b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26CEC4u));
    // 0x1773b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1773b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1773bc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1773bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1773c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1773c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1773c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1773c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1773c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1773C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1773CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773C8u;
        // 0x1773cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1773C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1773D0u;
}

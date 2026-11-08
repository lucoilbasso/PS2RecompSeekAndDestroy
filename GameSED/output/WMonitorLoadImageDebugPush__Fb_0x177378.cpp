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

// Function: WMonitorLoadImageDebugPush__Fb
// Address: 0x177378 - 0x1773a8
void WMonitorLoadImageDebugPush__Fb_0x177378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMonitorLoadImageDebugPush__Fb_0x177378");
#endif

    ctx->pc = 0x177378u;

    // 0x177378: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x177378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x17737c: 0x24a5cec0  addiu       $a1, $a1, -0x3140
    ctx->pc = 0x17737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
    // 0x177380: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x177380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x177384: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x177384u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x26CEC0u));
    // 0x177388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x177388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26CEC4u));
    // 0x17738c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17738cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x177390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177394: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x177394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x177398: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x177398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x17739c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x17739cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1773a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1773A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1773A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773A0u;
        // 0x1773a4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1773A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1773A8u;
}

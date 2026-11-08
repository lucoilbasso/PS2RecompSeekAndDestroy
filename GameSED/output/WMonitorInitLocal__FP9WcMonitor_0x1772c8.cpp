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

// Function: WMonitorInitLocal__FP9WcMonitor
// Address: 0x1772c8 - 0x177300
void WMonitorInitLocal__FP9WcMonitor_0x1772c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMonitorInitLocal__FP9WcMonitor_0x1772c8");
#endif

    switch (ctx->pc) {
        case 0x1772f0u: goto label_1772f0;
        default: break;
    }

    ctx->pc = 0x1772c8u;

    // 0x1772c8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1772c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1772cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1772ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1772d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1772d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1772d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1772d8: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x1772d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x1772dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1772dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772e0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1772e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1772e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1772e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1772e8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1772E8u;
    SET_GPR_U32(ctx, 31, 0x1772F0u);
    ctx->pc = 0x1772ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772E8u;
    // 0x1772ec: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1772E8u, 0x1772F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772F0u;
label_1772f0:
    // 0x1772f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1772f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1772f4: 0xaf828c98  sw          $v0, -0x7368($gp)
    ctx->pc = 0x1772f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 2));
    // 0x1772f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1772F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1772FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772F8u;
        // 0x1772fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1772F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177300u;
}

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

// Function: SRemoteCameraTimerCtrl__Fv
// Address: 0x110830 - 0x110858
void SRemoteCameraTimerCtrl__Fv_0x110830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRemoteCameraTimerCtrl__Fv_0x110830");
#endif

    ctx->pc = 0x110830u;

    // 0x110830: 0x8f82911c  lw          $v0, -0x6EE4($gp)
    ctx->pc = 0x110830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x110834: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x110834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110838: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x110838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11083c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11083Cu;
    {
        const bool branch_taken_0x11083c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11083Cu;
        // 0x110840: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11083c) {
            ctx->pc = 0x110850u;
            goto label_110850;
        }
    }
    ctx->pc = 0x110844u;
    // 0x110844: 0xaf83911c  sw          $v1, -0x6EE4($gp)
    ctx->pc = 0x110844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 3));
    // 0x110848: 0x3e00008  jr          $ra
    ctx->pc = 0x110848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110848u;
        // 0x11084c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110850u;
label_110850:
    // 0x110850: 0x3e00008  jr          $ra
    ctx->pc = 0x110850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110850u;
        // 0x110854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110858u;
}

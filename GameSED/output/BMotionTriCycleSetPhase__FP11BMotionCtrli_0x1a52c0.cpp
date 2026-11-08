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

// Function: BMotionTriCycleSetPhase__FP11BMotionCtrli
// Address: 0x1a52c0 - 0x1a52f0
void BMotionTriCycleSetPhase__FP11BMotionCtrli_0x1a52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionTriCycleSetPhase__FP11BMotionCtrli_0x1a52c0");
#endif

    ctx->pc = 0x1a52c0u;

    // 0x1a52c0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a52c4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a52c8: 0x24422990  addiu       $v0, $v0, 0x2990
    ctx->pc = 0x1a52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x1a52cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A52CCu;
    {
        const bool branch_taken_0x1a52cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a52cc) {
            ctx->pc = 0x1A52E8u;
            goto label_1a52e8;
        }
    }
    ctx->pc = 0x1A52D4u;
    // 0x1a52d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1a52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a52d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a52dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A52DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52DCu;
        // 0x1a52e0: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A52E4u;
    // 0x1a52e4: 0x0  nop
    ctx->pc = 0x1a52e4u;
    // NOP
label_1a52e8:
    // 0x1a52e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A52E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E8u;
        // 0x1a52ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A52F0u;
}

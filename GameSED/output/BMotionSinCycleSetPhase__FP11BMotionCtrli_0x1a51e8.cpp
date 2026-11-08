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

// Function: BMotionSinCycleSetPhase__FP11BMotionCtrli
// Address: 0x1a51e8 - 0x1a5228
void BMotionSinCycleSetPhase__FP11BMotionCtrli_0x1a51e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSinCycleSetPhase__FP11BMotionCtrli_0x1a51e8");
#endif

    ctx->pc = 0x1a51e8u;

    // 0x1a51e8: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a51ec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a51ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a51f0: 0x24424f38  addiu       $v0, $v0, 0x4F38
    ctx->pc = 0x1a51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20280));
    // 0x1a51f4: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A51F4u;
    {
        const bool branch_taken_0x1a51f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a51f4) {
            ctx->pc = 0x1A51F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A51F4u;
            // 0x1a51f8: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5210u;
            goto label_1a5210;
        }
    }
    ctx->pc = 0x1A51FCu;
    // 0x1a51fc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a5200: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x1a5200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x1a5204: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5204u;
    {
        const bool branch_taken_0x1a5204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5204) {
            ctx->pc = 0x1A5220u;
            goto label_1a5220;
        }
    }
    ctx->pc = 0x1A520Cu;
    // 0x1a520c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1a520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1a5210:
    // 0x1a5210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5214: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5214u;
        // 0x1a5218: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A521Cu;
    // 0x1a521c: 0x0  nop
    ctx->pc = 0x1a521cu;
    // NOP
label_1a5220:
    // 0x1a5220: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5220u;
        // 0x1a5224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5228u;
}

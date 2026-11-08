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

// Function: BMotionCycleSetPhase__FP11BMotionCtrli
// Address: 0x1a52f0 - 0x1a5344
void BMotionCycleSetPhase__FP11BMotionCtrli_0x1a52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionCycleSetPhase__FP11BMotionCtrli_0x1a52f0");
#endif

    ctx->pc = 0x1a52f0u;

    // 0x1a52f0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a52f4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a52f8: 0x24422990  addiu       $v0, $v0, 0x2990
    ctx->pc = 0x1a52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x1a52fc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A52FCu;
    {
        const bool branch_taken_0x1a52fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a52fc) {
            ctx->pc = 0x1A5300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52FCu;
            // 0x1a5300: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5310u;
            goto label_1a5310;
        }
    }
    ctx->pc = 0x1A5304u;
    // 0x1a5304: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1a5304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a5308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a530c: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1a530cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_1a5310:
    // 0x1a5310: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5310u;
    {
        const bool branch_taken_0x1a5310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5310u;
        // 0x1a5314: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5310) {
            ctx->pc = 0x1A533Cu;
            goto label_1a533c;
        }
    }
    ctx->pc = 0x1A5318u;
    // 0x1a5318: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a531c: 0x24424f38  addiu       $v0, $v0, 0x4F38
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20280));
    // 0x1a5320: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A5334u;
            goto label_1a5334;
        }
    }
    ctx->pc = 0x1A5328u;
    // 0x1a5328: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x1a532c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A532Cu;
    {
        const bool branch_taken_0x1a532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a532c) {
            ctx->pc = 0x1A533Cu;
            goto label_1a533c;
        }
    }
    ctx->pc = 0x1A5334u;
label_1a5334:
    // 0x1a5334: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1a5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a5338: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1a5338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_1a533c:
    // 0x1a533c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5344u;
}

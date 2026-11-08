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

// Function: __9ApcPtcSpr
// Address: 0x123128 - 0x12316c
void ps2___9ApcPtcSpr_0x123128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9ApcPtcSpr_0x123128");
#endif

    switch (ctx->pc) {
        case 0x123148u: goto label_123148;
        default: break;
    }

    ctx->pc = 0x123128u;

    // 0x123128: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x123128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12312c: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x12312cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x123130: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x123130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
    // 0x123134: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x123134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x123138: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x123138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x12313c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123140: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x123140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x123144: 0x24820168  addiu       $v0, $a0, 0x168
    ctx->pc = 0x123144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
label_123148:
    // 0x123148: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x123148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12314c: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x12314cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x123150: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x123150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x123154: 0x0  nop
    ctx->pc = 0x123154u;
    // NOP
    // 0x123158: 0x0  nop
    ctx->pc = 0x123158u;
    // NOP
    // 0x12315c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12315Cu;
    {
        const bool branch_taken_0x12315c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x123160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12315Cu;
        // 0x123160: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12315c) {
            ctx->pc = 0x123148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123148;
        }
    }
    ctx->pc = 0x123164u;
    // 0x123164: 0x3e00008  jr          $ra
    ctx->pc = 0x123164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123164u;
        // 0x123168: 0xac800150  sw          $zero, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12316Cu;
}

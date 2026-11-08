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

// Function: WingPartsEffectDelete__9ApcCqpart
// Address: 0x1db120 - 0x1db15c
void WingPartsEffectDelete__9ApcCqpart_0x1db120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WingPartsEffectDelete__9ApcCqpart_0x1db120");
#endif

    switch (ctx->pc) {
        case 0x1db130u: goto label_1db130;
        default: break;
    }

    ctx->pc = 0x1db120u;

    // 0x1db120: 0x24841258  addiu       $a0, $a0, 0x1258
    ctx->pc = 0x1db120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4696));
    // 0x1db124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1db124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db12c: 0x0  nop
    ctx->pc = 0x1db12cu;
    // NOP
label_1db130:
    // 0x1db130: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB134u;
    {
        const bool branch_taken_0x1db134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB134u;
        // 0x1db138: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db134) {
            ctx->pc = 0x1DB144u;
            goto label_1db144;
        }
    }
    ctx->pc = 0x1DB13Cu;
    // 0x1db13c: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x1db13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
    // 0x1db140: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1db140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1db144:
    // 0x1db144: 0x0  nop
    ctx->pc = 0x1db144u;
    // NOP
    // 0x1db148: 0x0  nop
    ctx->pc = 0x1db148u;
    // NOP
    // 0x1db14c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DB14Cu;
    {
        const bool branch_taken_0x1db14c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB14Cu;
        // 0x1db150: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db14c) {
            ctx->pc = 0x1DB130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db130;
        }
    }
    ctx->pc = 0x1DB154u;
    // 0x1db154: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB15Cu;
}

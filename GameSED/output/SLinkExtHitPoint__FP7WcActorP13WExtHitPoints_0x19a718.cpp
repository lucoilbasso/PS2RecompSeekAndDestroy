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

// Function: SLinkExtHitPoint__FP7WcActorP13WExtHitPoints
// Address: 0x19a718 - 0x19a74c
void SLinkExtHitPoint__FP7WcActorP13WExtHitPoints_0x19a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SLinkExtHitPoint__FP7WcActorP13WExtHitPoints_0x19a718");
#endif

    switch (ctx->pc) {
        case 0x19a728u: goto label_19a728;
        default: break;
    }

    ctx->pc = 0x19a718u;

    // 0x19a718: 0x24840104  addiu       $a0, $a0, 0x104
    ctx->pc = 0x19a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x19a71c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a720: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A720u;
    {
        const bool branch_taken_0x19a720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a720) {
            ctx->pc = 0x19A744u;
            goto label_19a744;
        }
    }
    ctx->pc = 0x19A728u;
label_19a728:
    // 0x19a728: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x19a72c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a730: 0x0  nop
    ctx->pc = 0x19a730u;
    // NOP
    // 0x19a734: 0x0  nop
    ctx->pc = 0x19a734u;
    // NOP
    // 0x19a738: 0x0  nop
    ctx->pc = 0x19a738u;
    // NOP
    // 0x19a73c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A73Cu;
    {
        const bool branch_taken_0x19a73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a73c) {
            ctx->pc = 0x19A740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A73Cu;
            // 0x19a740: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a728;
        }
    }
    ctx->pc = 0x19A744u;
label_19a744:
    // 0x19a744: 0x3e00008  jr          $ra
    ctx->pc = 0x19A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A744u;
        // 0x19a748: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A74Cu;
}

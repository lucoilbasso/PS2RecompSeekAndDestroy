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

// Function: WSequenceInitLocal__FP10WcSequence
// Address: 0x199558 - 0x199588
void WSequenceInitLocal__FP10WcSequence_0x199558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequenceInitLocal__FP10WcSequence_0x199558");
#endif

    switch (ctx->pc) {
        case 0x19957cu: goto label_19957c;
        default: break;
    }

    ctx->pc = 0x199558u;

    // 0x199558: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x199558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x19955c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19955cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199560: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199568: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x199568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x19956c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x19956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x199570: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x199570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x199574: 0xc066562  jal         func_199588
    ctx->pc = 0x199574u;
    SET_GPR_U32(ctx, 31, 0x19957Cu);
    ctx->pc = 0x199578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199574u;
    // 0x199578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199588u, 0x199574u, 0x19957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19957Cu;
label_19957c:
    // 0x19957c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19957cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199580: 0x3e00008  jr          $ra
    ctx->pc = 0x199580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199580u;
        // 0x199584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199588u;
}

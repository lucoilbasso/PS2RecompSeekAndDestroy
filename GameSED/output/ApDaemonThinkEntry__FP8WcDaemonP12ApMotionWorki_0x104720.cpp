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

// Function: ApDaemonThinkEntry__FP8WcDaemonP12ApMotionWorki
// Address: 0x104720 - 0x104754
void ApDaemonThinkEntry__FP8WcDaemonP12ApMotionWorki_0x104720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonThinkEntry__FP8WcDaemonP12ApMotionWorki_0x104720");
#endif

    switch (ctx->pc) {
        case 0x104748u: goto label_104748;
        default: break;
    }

    ctx->pc = 0x104720u;

    // 0x104720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104724: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x104724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10472c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x10472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x104730: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104730u;
    {
        const bool branch_taken_0x104730 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x104734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104730u;
        // 0x104734: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104730) {
            ctx->pc = 0x104748u;
            goto label_104748;
        }
    }
    ctx->pc = 0x104738u;
    // 0x104738: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x104738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x10473c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x10473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x104740: 0xc041228  jal         func_1048A0
    ctx->pc = 0x104740u;
    SET_GPR_U32(ctx, 31, 0x104748u);
    ctx->pc = 0x104744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104740u;
    // 0x104744: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x104740u, 0x104748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104748u;
label_104748:
    // 0x104748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10474c: 0x3e00008  jr          $ra
    ctx->pc = 0x10474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10474Cu;
        // 0x104750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104754u;
}

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

// Function: ApTankLandJob__FP5BcJobPv
// Address: 0x1560b8 - 0x1560ec
void ApTankLandJob__FP5BcJobPv_0x1560b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankLandJob__FP5BcJobPv_0x1560b8");
#endif

    switch (ctx->pc) {
        case 0x1560c8u: goto label_1560c8;
        case 0x1560d8u: goto label_1560d8;
        default: break;
    }

    ctx->pc = 0x1560b8u;

    // 0x1560b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1560b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1560bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1560bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1560c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1560c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1560c4: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1560c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1560c8:
    // 0x1560c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1560c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1560cc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1560ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1560d0: 0xc054760  jal         func_151D80
    ctx->pc = 0x1560D0u;
    SET_GPR_U32(ctx, 31, 0x1560D8u);
    ctx->pc = 0x151D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151D80u, 0x1560D0u, 0x1560D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560D8u;
label_1560d8:
    // 0x1560d8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1560D8u;
    {
        const bool branch_taken_0x1560d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D8u;
        // 0x1560dc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d8) {
            ctx->pc = 0x1560C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1560c8;
        }
    }
    ctx->pc = 0x1560E0u;
    // 0x1560e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1560e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1560e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1560E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560E4u;
        // 0x1560e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1560ECu;
}

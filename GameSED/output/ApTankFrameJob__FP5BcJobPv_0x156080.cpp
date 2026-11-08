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

// Function: ApTankFrameJob__FP5BcJobPv
// Address: 0x156080 - 0x1560b4
void ApTankFrameJob__FP5BcJobPv_0x156080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankFrameJob__FP5BcJobPv_0x156080");
#endif

    switch (ctx->pc) {
        case 0x156090u: goto label_156090;
        case 0x1560a0u: goto label_1560a0;
        default: break;
    }

    ctx->pc = 0x156080u;

    // 0x156080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15608c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x15608cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_156090:
    // 0x156090: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156094: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x156094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156098: 0xc054e3a  jal         func_1538E8
    ctx->pc = 0x156098u;
    SET_GPR_U32(ctx, 31, 0x1560A0u);
    ctx->pc = 0x1538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1538E8u, 0x156098u, 0x1560A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560A0u;
label_1560a0:
    // 0x1560a0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1560A0u;
    {
        const bool branch_taken_0x1560a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560A0u;
        // 0x1560a4: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560a0) {
            ctx->pc = 0x156090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156090;
        }
    }
    ctx->pc = 0x1560A8u;
    // 0x1560a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1560a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1560ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1560ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560ACu;
        // 0x1560b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1560B4u;
}

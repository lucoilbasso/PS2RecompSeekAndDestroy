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

// Function: SetPointPosition__8WcMulobjP12WMulobjPointP9FVector32
// Address: 0x1e0828 - 0x1e084c
void SetPointPosition__8WcMulobjP12WMulobjPointP9FVector32_0x1e0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPointPosition__8WcMulobjP12WMulobjPointP9FVector32_0x1e0828");
#endif

    switch (ctx->pc) {
        case 0x1e0840u: goto label_1e0840;
        default: break;
    }

    ctx->pc = 0x1e0828u;

    // 0x1e0828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e082c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0830: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e0830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0834: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e0834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0838: 0xc0618c2  jal         func_186308
    ctx->pc = 0x1E0838u;
    SET_GPR_U32(ctx, 31, 0x1E0840u);
    ctx->pc = 0x1E083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0838u;
    // 0x1e083c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1E0838u, 0x1E0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0840u;
label_1e0840:
    // 0x1e0840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0844: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0844u;
        // 0x1e0848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E084Cu;
}

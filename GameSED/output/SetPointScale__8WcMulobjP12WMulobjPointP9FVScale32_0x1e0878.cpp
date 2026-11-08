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

// Function: SetPointScale__8WcMulobjP12WMulobjPointP9FVScale32
// Address: 0x1e0878 - 0x1e089c
void SetPointScale__8WcMulobjP12WMulobjPointP9FVScale32_0x1e0878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPointScale__8WcMulobjP12WMulobjPointP9FVScale32_0x1e0878");
#endif

    switch (ctx->pc) {
        case 0x1e0890u: goto label_1e0890;
        default: break;
    }

    ctx->pc = 0x1e0878u;

    // 0x1e0878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e087c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0880: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0884: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e0884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0888: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x1E0888u;
    SET_GPR_U32(ctx, 31, 0x1E0890u);
    ctx->pc = 0x1E088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0888u;
    // 0x1e088c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1E0888u, 0x1E0890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0890u;
label_1e0890:
    // 0x1e0890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0894: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0894u;
        // 0x1e0898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E089Cu;
}

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

// Function: SetupFileData__7WcModel
// Address: 0x17f638 - 0x17f654
void SetupFileData__7WcModel_0x17f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__7WcModel_0x17f638");
#endif

    switch (ctx->pc) {
        case 0x17f648u: goto label_17f648;
        default: break;
    }

    ctx->pc = 0x17f638u;

    // 0x17f638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f640: 0xc05face  jal         func_17EB38
    ctx->pc = 0x17F640u;
    SET_GPR_U32(ctx, 31, 0x17F648u);
    ctx->pc = 0x17F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F640u;
    // 0x17f644: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EB38u, 0x17F640u, 0x17F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F648u;
label_17f648:
    // 0x17f648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F64Cu;
        // 0x17f650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F654u;
}

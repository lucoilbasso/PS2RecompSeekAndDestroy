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

// Function: Broadcast__9ApcStudio
// Address: 0x1141f0 - 0x11420c
void Broadcast__9ApcStudio_0x1141f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Broadcast__9ApcStudio_0x1141f0");
#endif

    switch (ctx->pc) {
        case 0x114200u: goto label_114200;
        default: break;
    }

    ctx->pc = 0x1141f0u;

    // 0x1141f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1141f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1141f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1141f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1141f8: 0xc044c94  jal         func_113250
    ctx->pc = 0x1141F8u;
    SET_GPR_U32(ctx, 31, 0x114200u);
    ctx->pc = 0x113250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113250u, 0x1141F8u, 0x114200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114200u;
label_114200:
    // 0x114200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114204: 0x3e00008  jr          $ra
    ctx->pc = 0x114204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114204u;
        // 0x114208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11420Cu;
}

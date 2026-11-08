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

// Function: BGphUtlInit__Fv
// Address: 0x19e5f8 - 0x19e614
void BGphUtlInit__Fv_0x19e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BGphUtlInit__Fv_0x19e5f8");
#endif

    switch (ctx->pc) {
        case 0x19e608u: goto label_19e608;
        default: break;
    }

    ctx->pc = 0x19e5f8u;

    // 0x19e5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e600: 0xc067994  jal         func_19E650
    ctx->pc = 0x19E600u;
    SET_GPR_U32(ctx, 31, 0x19E608u);
    ctx->pc = 0x19E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E650u, 0x19E600u, 0x19E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E608u;
label_19e608:
    // 0x19e608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E60Cu;
        // 0x19e610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E614u;
}

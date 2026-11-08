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

// Function: before__C9type_infoRC9type_info
// Address: 0x1ce7f8 - 0x1ce81c
void before__C9type_infoRC9type_info_0x1ce7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("before__C9type_infoRC9type_info_0x1ce7f8");
#endif

    switch (ctx->pc) {
        case 0x1ce80cu: goto label_1ce80c;
        default: break;
    }

    ctx->pc = 0x1ce7f8u;

    // 0x1ce7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce800: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce804: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CE804u;
    SET_GPR_U32(ctx, 31, 0x1CE80Cu);
    ctx->pc = 0x1CE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE804u;
    // 0x1ce808: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CE804u, 0x1CE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce810: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1ce814: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE814u;
        // 0x1ce818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE81Cu;
}

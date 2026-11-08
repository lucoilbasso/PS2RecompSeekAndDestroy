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

// Function: mpegError
// Address: 0x171c50 - 0x171c78
void mpegError_0x171c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegError_0x171c50");
#endif

    switch (ctx->pc) {
        case 0x171c68u: goto label_171c68;
        default: break;
    }

    ctx->pc = 0x171c50u;

    // 0x171c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c54: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x171c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171c5c: 0x2484d470  addiu       $a0, $a0, -0x2B90
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956144));
    // 0x171c60: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x171C60u;
    SET_GPR_U32(ctx, 31, 0x171C68u);
    ctx->pc = 0x171C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C60u;
    // 0x171c64: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x171C60u, 0x171C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C68u;
label_171c68:
    // 0x171c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c70: 0x3e00008  jr          $ra
    ctx->pc = 0x171C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C70u;
        // 0x171c74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C78u;
}

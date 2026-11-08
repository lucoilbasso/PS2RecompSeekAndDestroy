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

// Function: mpegNodata
// Address: 0x171c78 - 0x171ca4
void mpegNodata_0x171c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegNodata_0x171c78");
#endif

    switch (ctx->pc) {
        case 0x171c88u: goto label_171c88;
        case 0x171c94u: goto label_171c94;
        default: break;
    }

    ctx->pc = 0x171c78u;

    // 0x171c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171c80: 0xc05c120  jal         func_170480
    ctx->pc = 0x171C80u;
    SET_GPR_U32(ctx, 31, 0x171C88u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x171C80u, 0x171C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C88u;
label_171c88:
    // 0x171c88: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x171c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x171c8c: 0xc05d510  jal         func_175440
    ctx->pc = 0x171C8Cu;
    SET_GPR_U32(ctx, 31, 0x171C94u);
    ctx->pc = 0x171C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C8Cu;
    // 0x171c90: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175440u, 0x171C8Cu, 0x171C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C94u;
label_171c94:
    // 0x171c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x171C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C9Cu;
        // 0x171ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171CA4u;
}

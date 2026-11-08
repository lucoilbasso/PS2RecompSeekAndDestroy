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

// Function: ApDaemonGetActorArray__FP5BcObji
// Address: 0x138a80 - 0x138aa0
void ApDaemonGetActorArray__FP5BcObji_0x138a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonGetActorArray__FP5BcObji_0x138a80");
#endif

    switch (ctx->pc) {
        case 0x138a90u: goto label_138a90;
        default: break;
    }

    ctx->pc = 0x138a80u;

    // 0x138a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138a88: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x138A88u;
    SET_GPR_U32(ctx, 31, 0x138A90u);
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x138A88u, 0x138A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A90u;
label_138a90:
    // 0x138a90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x138a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138a98: 0x3e00008  jr          $ra
    ctx->pc = 0x138A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A98u;
        // 0x138a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138AA0u;
}

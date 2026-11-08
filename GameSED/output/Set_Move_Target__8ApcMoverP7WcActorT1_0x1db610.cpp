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

// Function: Set_Move_Target__8ApcMoverP7WcActorT1
// Address: 0x1db610 - 0x1db63c
void Set_Move_Target__8ApcMoverP7WcActorT1_0x1db610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Move_Target__8ApcMoverP7WcActorT1_0x1db610");
#endif

    switch (ctx->pc) {
        case 0x1db630u: goto label_1db630;
        default: break;
    }

    ctx->pc = 0x1db610u;

    // 0x1db610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db614: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db61c: 0xac850264  sw          $a1, 0x264($a0)
    ctx->pc = 0x1db61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 5));
    // 0x1db620: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x1db620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x1db624: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1db624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db628: 0xc066810  jal         func_19A040
    ctx->pc = 0x1DB628u;
    SET_GPR_U32(ctx, 31, 0x1DB630u);
    ctx->pc = 0x1DB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB628u;
    // 0x1db62c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x1DB628u, 0x1DB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB630u;
label_1db630:
    // 0x1db630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db634: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB634u;
        // 0x1db638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB63Cu;
}

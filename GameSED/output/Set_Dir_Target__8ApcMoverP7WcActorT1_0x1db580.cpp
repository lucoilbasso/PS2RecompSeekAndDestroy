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

// Function: Set_Dir_Target__8ApcMoverP7WcActorT1
// Address: 0x1db580 - 0x1db5ac
void Set_Dir_Target__8ApcMoverP7WcActorT1_0x1db580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Dir_Target__8ApcMoverP7WcActorT1_0x1db580");
#endif

    switch (ctx->pc) {
        case 0x1db5a0u: goto label_1db5a0;
        default: break;
    }

    ctx->pc = 0x1db580u;

    // 0x1db580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db58c: 0xac8501e4  sw          $a1, 0x1E4($a0)
    ctx->pc = 0x1db58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 5));
    // 0x1db590: 0xac8201e0  sw          $v0, 0x1E0($a0)
    ctx->pc = 0x1db590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    // 0x1db594: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1db594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db598: 0xc066810  jal         func_19A040
    ctx->pc = 0x1DB598u;
    SET_GPR_U32(ctx, 31, 0x1DB5A0u);
    ctx->pc = 0x1DB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB598u;
    // 0x1db59c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x1DB598u, 0x1DB5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5A0u;
label_1db5a0:
    // 0x1db5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5A4u;
        // 0x1db5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB5ACu;
}

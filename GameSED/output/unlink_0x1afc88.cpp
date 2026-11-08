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

// Function: unlink
// Address: 0x1afc88 - 0x1afcb0
void unlink_0x1afc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unlink_0x1afc88");
#endif

    switch (ctx->pc) {
        case 0x1afc98u: goto label_1afc98;
        default: break;
    }

    ctx->pc = 0x1afc88u;

    // 0x1afc88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afc8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afc90: 0xc073d52  jal         func_1CF548
    ctx->pc = 0x1AFC90u;
    SET_GPR_U32(ctx, 31, 0x1AFC98u);
    ctx->pc = 0x1CF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF548u, 0x1AFC90u, 0x1AFC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC98u;
label_1afc98:
    // 0x1afc98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1afc9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1afca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1afca4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCA8u;
        // 0x1afcac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFCB0u;
}

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

// Function: ApRscKeyAssignReset__Fv
// Address: 0x114258 - 0x114274
void ApRscKeyAssignReset__Fv_0x114258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyAssignReset__Fv_0x114258");
#endif

    ctx->pc = 0x114258u;

    // 0x114258: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x114258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x11425c: 0x24030240  addiu       $v1, $zero, 0x240
    ctx->pc = 0x11425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x114260: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    // 0x114264: 0xaf828920  sw          $v0, -0x76E0($gp)
    ctx->pc = 0x114264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 2));
    // 0x114268: 0xaf838924  sw          $v1, -0x76DC($gp)
    ctx->pc = 0x114268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 3));
    // 0x11426c: 0x3e00008  jr          $ra
    ctx->pc = 0x11426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11426Cu;
        // 0x114270: 0xaf848928  sw          $a0, -0x76D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11426Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114274u;
}

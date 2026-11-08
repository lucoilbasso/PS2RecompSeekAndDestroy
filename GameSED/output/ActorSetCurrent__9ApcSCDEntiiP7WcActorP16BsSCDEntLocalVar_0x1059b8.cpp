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

// Function: ActorSetCurrent__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar
// Address: 0x1059b8 - 0x1059d0
void ActorSetCurrent__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar_0x1059b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorSetCurrent__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar_0x1059b8");
#endif

    ctx->pc = 0x1059b8u;

    // 0x1059b8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1059b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1059bc: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1059c0: 0xac48004c  sw          $t0, 0x4C($v0)
    ctx->pc = 0x1059c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 8));
    // 0x1059c4: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1059c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
    // 0x1059c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1059C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1059CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059C8u;
        // 0x1059cc: 0xac450048  sw          $a1, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1059D0u;
}

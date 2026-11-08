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

// Function: Set_Dir_Pos__8ApcMoverP9FVector32
// Address: 0x1db560 - 0x1db57c
void Set_Dir_Pos__8ApcMoverP9FVector32_0x1db560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Dir_Pos__8ApcMoverP9FVector32_0x1db560");
#endif

    ctx->pc = 0x1db560u;

    // 0x1db560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db564: 0xac8201e0  sw          $v0, 0x1E0($a0)
    ctx->pc = 0x1db564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    // 0x1db568: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x1db56c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1db56cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db570: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1db570u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1db574: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB57Cu;
}

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

// Function: Set_Dir_Angle__8ApcMoverP9DVAngle32
// Address: 0x1db540 - 0x1db55c
void Set_Dir_Angle__8ApcMoverP9DVAngle32_0x1db540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Dir_Angle__8ApcMoverP9DVAngle32_0x1db540");
#endif

    ctx->pc = 0x1db540u;

    // 0x1db540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db544: 0xac8201e0  sw          $v0, 0x1E0($a0)
    ctx->pc = 0x1db544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    // 0x1db548: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x1db548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x1db54c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1db54cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db550: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1db550u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1db554: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB55Cu;
}

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

// Function: Set_Move_Dir__8ApcMoverP9FVector32
// Address: 0x1db5d0 - 0x1db5ec
void Set_Move_Dir__8ApcMoverP9FVector32_0x1db5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Move_Dir__8ApcMoverP9FVector32_0x1db5d0");
#endif

    ctx->pc = 0x1db5d0u;

    // 0x1db5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db5d4: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x1db5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x1db5d8: 0x24840270  addiu       $a0, $a0, 0x270
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    // 0x1db5dc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1db5dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db5e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1db5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1db5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB5ECu;
}

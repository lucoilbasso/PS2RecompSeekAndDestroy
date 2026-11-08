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

// Function: UnFormat__7WcMCard
// Address: 0x1796c0 - 0x1796dc
void UnFormat__7WcMCard_0x1796c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnFormat__7WcMCard_0x1796c0");
#endif

    ctx->pc = 0x1796c0u;

    // 0x1796c0: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x1796c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x1796c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1796c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1796cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1796ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1796d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1796d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1796d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1796D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1796D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1796DCu;
}

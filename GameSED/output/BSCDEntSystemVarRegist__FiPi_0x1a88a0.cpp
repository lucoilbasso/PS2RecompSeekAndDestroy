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

// Function: BSCDEntSystemVarRegist__FiPi
// Address: 0x1a88a0 - 0x1a88b8
void BSCDEntSystemVarRegist__FiPi_0x1a88a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntSystemVarRegist__FiPi_0x1a88a0");
#endif

    ctx->pc = 0x1a88a0u;

    // 0x1a88a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a88a4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1a88a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1a88a8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x1a88a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1a88ac: 0xac2504b0  sw          $a1, 0x4B0($at)
    ctx->pc = 0x1a88acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1200), GPR_U32(ctx, 5));
    // 0x1a88b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88B8u;
}

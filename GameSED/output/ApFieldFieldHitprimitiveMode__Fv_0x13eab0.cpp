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

// Function: ApFieldFieldHitprimitiveMode__Fv
// Address: 0x13eab0 - 0x13eac8
void ApFieldFieldHitprimitiveMode__Fv_0x13eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldFieldHitprimitiveMode__Fv_0x13eab0");
#endif

    ctx->pc = 0x13eab0u;

    // 0x13eab0: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x13eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x13eab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13eab8: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x13eab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13eabc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x13eabcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x13eac0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC0u;
        // 0x13eac4: 0xaf82912c  sw          $v0, -0x6ED4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EAC8u;
}

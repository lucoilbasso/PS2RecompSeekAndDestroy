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

// Function: WMCardThreadSubProgramEnd__FP17MCARD_INFORMATION
// Address: 0x1795e8 - 0x1795fc
void WMCardThreadSubProgramEnd__FP17MCARD_INFORMATION_0x1795e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardThreadSubProgramEnd__FP17MCARD_INFORMATION_0x1795e8");
#endif

    ctx->pc = 0x1795e8u;

    // 0x1795e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1795e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1795ec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1795ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1795f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1795f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1795f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1795F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795FCu;
}

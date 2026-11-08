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

// Function: Cmd_EFFECT_SE_LOCK_Entry__FP15BsSCDEntControl
// Address: 0x1325e0 - 0x1325ec
void Cmd_EFFECT_SE_LOCK_Entry__FP15BsSCDEntControl_0x1325e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_SE_LOCK_Entry__FP15BsSCDEntControl_0x1325e0");
#endif

    ctx->pc = 0x1325e0u;

    // 0x1325e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1325e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1325e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1325E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325E4u;
        // 0x1325e8: 0xaf828a14  sw          $v0, -0x75EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1325ECu;
}

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

// Function: _ResetSleepActive__9WcTxPanel
// Address: 0x1defc8 - 0x1defdc
void ps2__ResetSleepActive__9WcTxPanel_0x1defc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ResetSleepActive__9WcTxPanel_0x1defc8");
#endif

    ctx->pc = 0x1defc8u;

    // 0x1defc8: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x1defcc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1defd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1defd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1defd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFD4u;
        // 0x1defd8: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEFDCu;
}

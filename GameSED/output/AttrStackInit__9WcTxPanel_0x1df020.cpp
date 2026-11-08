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

// Function: AttrStackInit__9WcTxPanel
// Address: 0x1df020 - 0x1df02c
void AttrStackInit__9WcTxPanel_0x1df020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttrStackInit__9WcTxPanel_0x1df020");
#endif

    ctx->pc = 0x1df020u;

    // 0x1df020: 0x24820260  addiu       $v0, $a0, 0x260
    ctx->pc = 0x1df020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
    // 0x1df024: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF024u;
        // 0x1df028: 0xac82025c  sw          $v0, 0x25C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF02Cu;
}

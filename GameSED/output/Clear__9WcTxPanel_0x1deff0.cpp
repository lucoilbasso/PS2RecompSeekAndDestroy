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

// Function: Clear__9WcTxPanel
// Address: 0x1deff0 - 0x1df01c
void Clear__9WcTxPanel_0x1deff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9WcTxPanel_0x1deff0");
#endif

    ctx->pc = 0x1deff0u;

    // 0x1deff0: 0xac800258  sw          $zero, 0x258($a0)
    ctx->pc = 0x1deff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
    // 0x1deff4: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x1deff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x1deff8: 0xac800210  sw          $zero, 0x210($a0)
    ctx->pc = 0x1deff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 0));
    // 0x1deffc: 0xac800214  sw          $zero, 0x214($a0)
    ctx->pc = 0x1deffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 0));
    // 0x1df000: 0xac800218  sw          $zero, 0x218($a0)
    ctx->pc = 0x1df000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 0));
    // 0x1df004: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x1df004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
    // 0x1df008: 0xac800220  sw          $zero, 0x220($a0)
    ctx->pc = 0x1df008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 0));
    // 0x1df00c: 0xac800228  sw          $zero, 0x228($a0)
    ctx->pc = 0x1df00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
    // 0x1df010: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x1df010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x1df014: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF014u;
        // 0x1df018: 0xac800250  sw          $zero, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF01Cu;
}

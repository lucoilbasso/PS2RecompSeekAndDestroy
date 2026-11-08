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

// Function: Locate__9WcTxPanelii
// Address: 0x18ea68 - 0x18ea7c
void Locate__9WcTxPanelii_0x18ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Locate__9WcTxPanelii_0x18ea68");
#endif

    ctx->pc = 0x18ea68u;

    // 0x18ea68: 0xa4850244  sh          $a1, 0x244($a0)
    ctx->pc = 0x18ea68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 5));
    // 0x18ea6c: 0xa4860246  sh          $a2, 0x246($a0)
    ctx->pc = 0x18ea6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 6));
    // 0x18ea70: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x18ea74: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA74u;
        // 0x18ea78: 0xac820248  sw          $v0, 0x248($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EA7Cu;
}

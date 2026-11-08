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

// Function: STxpDefault__FP9WcTxPanel
// Address: 0x18ebe0 - 0x18ec08
void STxpDefault__FP9WcTxPanel_0x18ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("STxpDefault__FP9WcTxPanel_0x18ebe0");
#endif

    ctx->pc = 0x18ebe0u;

    // 0x18ebe0: 0x2482023c  addiu       $v0, $a0, 0x23C
    ctx->pc = 0x18ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
    // 0x18ebe4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ebe8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x18ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ebec: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18ebecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ebf0: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x18ebf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ebf4: 0xa4800246  sh          $zero, 0x246($a0)
    ctx->pc = 0x18ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ebf8: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x18ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x18ebfc: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x18ec00: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC00u;
        // 0x18ec04: 0xac820248  sw          $v0, 0x248($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC08u;
}

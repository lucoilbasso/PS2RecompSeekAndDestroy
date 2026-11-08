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

// Function: WPadCntlStatusWorkInit__FP14WPadStatusWork
// Address: 0x1567b0 - 0x1567c4
void WPadCntlStatusWorkInit__FP14WPadStatusWork_0x1567b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadCntlStatusWorkInit__FP14WPadStatusWork_0x1567b0");
#endif

    ctx->pc = 0x1567b0u;

    // 0x1567b0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1567b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1567b4: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1567b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1567b8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x1567b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1567bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1567BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1567C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567BCu;
        // 0x1567c0: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1567C4u;
}

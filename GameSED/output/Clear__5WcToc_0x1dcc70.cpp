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

// Function: Clear__5WcToc
// Address: 0x1dcc70 - 0x1dcc8c
void Clear__5WcToc_0x1dcc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__5WcToc_0x1dcc70");
#endif

    ctx->pc = 0x1dcc70u;

    // 0x1dcc70: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1dcc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1dcc74: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1dcc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1dcc78: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1dcc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1dcc7c: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x1dcc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dcc80: 0xa480002a  sh          $zero, 0x2A($a0)
    ctx->pc = 0x1dcc80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dcc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC84u;
        // 0x1dcc88: 0xa480002c  sh          $zero, 0x2C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC8Cu;
}

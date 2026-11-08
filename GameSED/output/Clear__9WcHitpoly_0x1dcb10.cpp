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

// Function: Clear__9WcHitpoly
// Address: 0x1dcb10 - 0x1dcb24
void Clear__9WcHitpoly_0x1dcb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9WcHitpoly_0x1dcb10");
#endif

    ctx->pc = 0x1dcb10u;

    // 0x1dcb10: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1dcb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1dcb14: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x1dcb14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dcb18: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x1dcb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dcb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB1Cu;
        // 0x1dcb20: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB24u;
}

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

// Function: Clear__8WcSprite
// Address: 0x1de580 - 0x1de590
void Clear__8WcSprite_0x1de580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcSprite_0x1de580");
#endif

    ctx->pc = 0x1de580u;

    // 0x1de580: 0xac800208  sw          $zero, 0x208($a0)
    ctx->pc = 0x1de580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 0));
    // 0x1de584: 0xa4800200  sh          $zero, 0x200($a0)
    ctx->pc = 0x1de584u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x1de588: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE588u;
        // 0x1de58c: 0xa4800202  sh          $zero, 0x202($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 514), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE590u;
}

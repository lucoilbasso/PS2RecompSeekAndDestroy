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

// Function: WSpriteReHomeSequence__FP8WcSprite
// Address: 0x18b428 - 0x18b434
void WSpriteReHomeSequence__FP8WcSprite_0x18b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteReHomeSequence__FP8WcSprite_0x18b428");
#endif

    ctx->pc = 0x18b428u;

    // 0x18b428: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x18b42c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B42Cu;
        // 0x18b430: 0xa440000e  sh          $zero, 0xE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B434u;
}

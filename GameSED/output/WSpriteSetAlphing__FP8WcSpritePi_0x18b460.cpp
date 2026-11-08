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

// Function: WSpriteSetAlphing__FP8WcSpritePi
// Address: 0x18b460 - 0x18b474
void WSpriteSetAlphing__FP8WcSpritePi_0x18b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteSetAlphing__FP8WcSpritePi_0x18b460");
#endif

    ctx->pc = 0x18b460u;

    // 0x18b460: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b464: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x18b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x18b468: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x18b468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x18b46c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B46Cu;
        // 0x18b470: 0xa0830157  sb          $v1, 0x157($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B474u;
}

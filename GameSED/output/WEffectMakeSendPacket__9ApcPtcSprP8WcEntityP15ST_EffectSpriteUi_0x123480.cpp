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

// Function: WEffectMakeSendPacket__9ApcPtcSprP8WcEntityP15ST_EffectSpriteUi
// Address: 0x123480 - 0x123488
void WEffectMakeSendPacket__9ApcPtcSprP8WcEntityP15ST_EffectSpriteUi_0x123480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEffectMakeSendPacket__9ApcPtcSprP8WcEntityP15ST_EffectSpriteUi_0x123480");
#endif

    ctx->pc = 0x123480u;

    // 0x123480: 0x3e00008  jr          $ra
    ctx->pc = 0x123480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123488u;
}

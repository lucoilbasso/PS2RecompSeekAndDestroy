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

// Function: YouAretheWorld__7WcWorld
// Address: 0x1dd968 - 0x1dd97c
void YouAretheWorld__7WcWorld_0x1dd968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("YouAretheWorld__7WcWorld_0x1dd968");
#endif

    ctx->pc = 0x1dd968u;

    // 0x1dd968: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1dd968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd96c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1dd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1dd970: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dd970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dd974: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD974u;
        // 0x1dd978: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD97Cu;
}

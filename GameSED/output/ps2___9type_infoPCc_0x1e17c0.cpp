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

// Function: __9type_infoPCc
// Address: 0x1e17c0 - 0x1e17d4
void ps2___9type_infoPCc_0x1e17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9type_infoPCc_0x1e17c0");
#endif

    ctx->pc = 0x1e17c0u;

    // 0x1e17c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1e17c4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e17c8: 0x24630cb8  addiu       $v1, $v1, 0xCB8
    ctx->pc = 0x1e17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3256));
    // 0x1e17cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17CCu;
        // 0x1e17d0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E17D4u;
}

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

// Function: SetWeaponAttr__7ApcWponi
// Address: 0x1d9b90 - 0x1d9ba0
void SetWeaponAttr__7ApcWponi_0x1d9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWeaponAttr__7ApcWponi_0x1d9b90");
#endif

    ctx->pc = 0x1d9b90u;

    // 0x1d9b90: 0x94820266  lhu         $v0, 0x266($a0)
    ctx->pc = 0x1d9b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 614)));
    // 0x1d9b94: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1d9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d9b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B98u;
        // 0x1d9b9c: 0xa4820266  sh          $v0, 0x266($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 614), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9BA0u;
}

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

// Function: _InqBodyCtrl__9ApcCqpart
// Address: 0x1dacb0 - 0x1dacc4
void ps2__InqBodyCtrl__9ApcCqpart_0x1dacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqBodyCtrl__9ApcCqpart_0x1dacb0");
#endif

    ctx->pc = 0x1dacb0u;

    // 0x1dacb0: 0x8c820c10  lw          $v0, 0xC10($a0)
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3088)));
    // 0x1dacb4: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1dacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1dacb8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1dacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1dacbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DACBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACBCu;
        // 0x1dacc0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DACBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DACC4u;
}

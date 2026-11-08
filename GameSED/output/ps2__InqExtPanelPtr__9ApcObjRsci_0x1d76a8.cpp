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

// Function: _InqExtPanelPtr__9ApcObjRsci
// Address: 0x1d76a8 - 0x1d76b8
void ps2__InqExtPanelPtr__9ApcObjRsci_0x1d76a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqExtPanelPtr__9ApcObjRsci_0x1d76a8");
#endif

    ctx->pc = 0x1d76a8u;

    // 0x1d76a8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1d76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d76ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d76b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D76B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76B0u;
        // 0x1d76b4: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D76B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D76B8u;
}

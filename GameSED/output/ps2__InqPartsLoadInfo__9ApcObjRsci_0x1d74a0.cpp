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

// Function: _InqPartsLoadInfo__9ApcObjRsci
// Address: 0x1d74a0 - 0x1d74b0
void ps2__InqPartsLoadInfo__9ApcObjRsci_0x1d74a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqPartsLoadInfo__9ApcObjRsci_0x1d74a0");
#endif

    ctx->pc = 0x1d74a0u;

    // 0x1d74a0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1d74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d74a4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d74a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D74A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A8u;
        // 0x1d74ac: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D74A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D74B0u;
}

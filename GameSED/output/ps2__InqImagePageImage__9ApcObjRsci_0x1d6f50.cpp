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

// Function: _InqImagePageImage__9ApcObjRsci
// Address: 0x1d6f50 - 0x1d6f64
void ps2__InqImagePageImage__9ApcObjRsci_0x1d6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqImagePageImage__9ApcObjRsci_0x1d6f50");
#endif

    ctx->pc = 0x1d6f50u;

    // 0x1d6f50: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1d6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1d6f54: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d6f58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d6f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d6f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F5Cu;
        // 0x1d6f60: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F64u;
}

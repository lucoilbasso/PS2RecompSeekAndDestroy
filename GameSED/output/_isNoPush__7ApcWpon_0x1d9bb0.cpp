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

// Function: _isNoPush__7ApcWpon
// Address: 0x1d9bb0 - 0x1d9bc0
void _isNoPush__7ApcWpon_0x1d9bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isNoPush__7ApcWpon_0x1d9bb0");
#endif

    ctx->pc = 0x1d9bb0u;

    // 0x1d9bb0: 0x94820266  lhu         $v0, 0x266($a0)
    ctx->pc = 0x1d9bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 614)));
    // 0x1d9bb4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1d9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1d9bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BB8u;
        // 0x1d9bbc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9BC0u;
}

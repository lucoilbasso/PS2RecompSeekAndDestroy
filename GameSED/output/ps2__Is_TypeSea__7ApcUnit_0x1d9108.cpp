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

// Function: _Is_TypeSea__7ApcUnit
// Address: 0x1d9108 - 0x1d9118
void ps2__Is_TypeSea__7ApcUnit_0x1d9108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Is_TypeSea__7ApcUnit_0x1d9108");
#endif

    ctx->pc = 0x1d9108u;

    // 0x1d9108: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x1d9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x1d910c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x1d9110: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9110u;
        // 0x1d9114: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9118u;
}

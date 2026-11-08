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

// Function: UnitTypeReset__7ApcUnitUi
// Address: 0x1d90c0 - 0x1d90d4
void UnitTypeReset__7ApcUnitUi_0x1d90c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitTypeReset__7ApcUnitUi_0x1d90c0");
#endif

    ctx->pc = 0x1d90c0u;

    // 0x1d90c0: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x1d90c4: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1d90c4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d90c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d90c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d90cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D90CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90CCu;
        // 0x1d90d0: 0xac820180  sw          $v0, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D90CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D90D4u;
}

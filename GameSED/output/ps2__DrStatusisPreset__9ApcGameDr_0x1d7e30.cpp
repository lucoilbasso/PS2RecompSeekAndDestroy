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

// Function: _DrStatusisPreset__9ApcGameDr
// Address: 0x1d7e30 - 0x1d7e40
void ps2__DrStatusisPreset__9ApcGameDr_0x1d7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DrStatusisPreset__9ApcGameDr_0x1d7e30");
#endif

    ctx->pc = 0x1d7e30u;

    // 0x1d7e30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1d7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1d7e34: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x1d7e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x1d7e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E38u;
        // 0x1d7e3c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E40u;
}

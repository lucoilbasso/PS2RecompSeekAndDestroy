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

// Function: _InqTempSavePack2__9ApcStudioi
// Address: 0x1d7cf8 - 0x1d7d18
void ps2__InqTempSavePack2__9ApcStudioi_0x1d7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqTempSavePack2__9ApcStudioi_0x1d7cf8");
#endif

    ctx->pc = 0x1d7cf8u;

    // 0x1d7cf8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1d7cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d7cfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d7d00: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1d7d04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d7d08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d7d0c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1d7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d7d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D10u;
        // 0x1d7d14: 0x2442039c  addiu       $v0, $v0, 0x39C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 924));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7D18u;
}

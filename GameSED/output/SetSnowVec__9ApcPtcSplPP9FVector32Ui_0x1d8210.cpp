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

// Function: SetSnowVec__9ApcPtcSplPP9FVector32Ui
// Address: 0x1d8210 - 0x1d8228
void SetSnowVec__9ApcPtcSplPP9FVector32Ui_0x1d8210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSnowVec__9ApcPtcSplPP9FVector32Ui_0x1d8210");
#endif

    ctx->pc = 0x1d8210u;

    // 0x1d8210: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1d8210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d8214: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1d8214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1d8218: 0x24210b70  addiu       $at, $at, 0xB70
    ctx->pc = 0x1d8218u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2928));
    // 0x1d821c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x1d821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1d8220: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8220u;
        // 0x1d8224: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8228u;
}
